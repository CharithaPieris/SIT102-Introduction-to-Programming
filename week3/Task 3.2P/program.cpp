#include "splashkit.h"
#define RADIUS 150

int main()
{

    double x, y;

    open_window("Circle Mover By Charitha", 800,600);

    x = screen_width()/ 2;
    y = screen_height()/2;
 
    while (not quit_requested())
    {
        process_events();
     
        if (key_down(RIGHT_KEY))
        {
            x = x +1;
        }
        if (key_down(LEFT_KEY))
        {
            x = x - 1;
        }
        if (key_down(UP_KEY))
        {
            y = y - 1;
        }
        if (key_down(DOWN_KEY))
        {
            y = y + 1;
        }

        if( x + RADIUS > screen_width() )
        {
            x = screen_width() - RADIUS;
        }

        if ( x - RADIUS < 0)
        {
            x = RADIUS;
        }
 
         if (y + RADIUS > screen_height())
        {
            y = screen_height() - RADIUS; 
        }
        if (y - RADIUS < 0)
        {
            y = RADIUS;
        }

        clear_screen(COLOR_WHITE);
        fill_circle(COLOR_GREEN, x, y, 150);
        refresh_screen(60);
    
    }
        
    return 0;
}   