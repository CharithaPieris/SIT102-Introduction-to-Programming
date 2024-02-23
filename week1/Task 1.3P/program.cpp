#include "splashkit.h"

void draw_house_scene() //The house scene
{

    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_BRIGHT_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    refresh_screen();

}

void my_scene() //My drawing
{

    clear_screen(COLOR_WHITE);
    fill_rectangle(COLOR_GRAY, 0, 400, 800, 90);
    fill_rectangle(COLOR_GREEN, 0, 480, 800, 90);
    fill_rectangle(COLOR_BLUE, 460, 290, 330, 90);
    fill_rectangle(COLOR_RED, 460, 290, 40, 25);
    fill_rectangle(COLOR_BLUE, 540, 230, 150, 70);

    fill_circle(COLOR_BLACK, 530, 390, 50);
    fill_circle(COLOR_BLACK, 720, 390, 50);
    

    fill_rectangle(COLOR_RED, 60, 290, 330, 90);
    fill_rectangle(COLOR_YELLOW, 60, 290, 40, 25);
    fill_rectangle(COLOR_RED, 140, 230, 150, 70);

    fill_circle(COLOR_BLACK, 130, 390, 50);
    fill_circle(COLOR_BLACK, 320, 390, 50);
    refresh_screen();

}

int main()
{

open_window("Shape Drawing BSCP|CS|62|114 Charitha Pieris", 800, 600);

draw_house_scene();
delay(5000);

my_scene();
delay(5000);

draw_house_scene();
delay(5000);

my_scene();
delay(5000);

return 0;

}