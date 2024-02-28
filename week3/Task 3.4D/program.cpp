#include "splashkit.h"
#include <cmath>

#define MAX_ITERATIONS 1000
#define MIN_REAL -2
#define MAX_REAL 2
#define MIN_IMAGINARY -2
#define MAX_IMAGINARY 2

float map(float input_value, float input_min, float input_max, float map_min, float map_max)
{
    return (input_value - input_min) / (input_max - input_min) * (map_max - map_min) + map_min;
}

color iteration_color(int iterations)
{
    if (iterations == MAX_ITERATIONS)
    {
        return COLOR_BLACK;
    }
    else
    {
        float hue = map(iterations, 0, MAX_ITERATIONS, 0, 360);
        return hsb_color(hue, 1, 1);
    }
}

color mandelbrot_color(float c_real, float c_imaginary)
{
    float real = 0;
    float imaginary = 0;

    int iterations;
    for (iterations = 0; iterations < MAX_ITERATIONS; iterations++)
    {
        float next_real = real * real - imaginary * imaginary;
        float next_imaginary = 2 * real * imaginary;

        real = next_real + c_real;
        imaginary = next_imaginary + c_imaginary;

        if (sqrt((real * real) + (imaginary * imaginary)) > 4)
        {
            break;
        }
    }

    return iteration_color(iterations);
}

void draw_mandelbrot(int width, int height, float zoom, float offset_x, float offset_y)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            float c_real = map(i + offset_x, 0, width, MIN_REAL / zoom, MAX_REAL / zoom) + offset_x;
            float c_imaginary = map(j + offset_y, 0, height, MIN_IMAGINARY / zoom, MAX_IMAGINARY / zoom) + offset_y;

            draw_pixel(mandelbrot_color(c_real, c_imaginary), i, j);
        }
    }
}

int main()
{
    open_window("Mandelbrot By Charitha ", 800,800 );

    int width = screen_width();
    int height = screen_height();
    float zoom = 1;
    float offset_x = 0;
    float offset_y = 0;

    while (not quit_requested())
    {
        process_events();

        clear_screen(COLOR_WHITE);
        draw_mandelbrot(width, height, zoom, offset_x, offset_y);

        if (key_typed(W_KEY))
        {
            offset_y -= 0.1 / zoom;
        }
        else if (key_typed(S_KEY))
        {
            offset_y += 0.1 / zoom;
        }
        else if (key_typed(A_KEY))
        {
            offset_x -= 0.1 / zoom;
        }
        else if (key_typed(D_KEY))
        {
            offset_x += 0.1 / zoom;
        }
        else if (key_typed(Q_KEY))
        {
            zoom += 0.1 * zoom;
        }
        else if (key_typed(E_KEY))
        {
            zoom -= 0.1 * zoom;
        }

        refresh_screen(60);
    }

    return 0;
}