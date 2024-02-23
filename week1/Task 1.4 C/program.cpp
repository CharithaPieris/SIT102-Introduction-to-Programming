#include "splashkit.h"

//Main function
int main()
{

open_window("Charitha BSCP | CS | 62 | 114 ", 1000, 800);

// Idle images from line 10 to 70
clear_screen(COLOR_AQUA);                   // Opening the screen with Aqua colour
load_bitmap("dino41", "Idle (1).png");      // Loading the image file
load_sound_effect("audio", "Audio.mp3");    // Loading the audio file
draw_bitmap("dino41", 250, 175);            // Drawing the bitmap   
refresh_screen();                           
play_sound_effect("audio");                 // Playing the sound(audio)
delay(150);                                 // Delay the image before the next image

clear_screen(COLOR_AQUA);
load_bitmap("dino42", "Idle (2).png");
draw_bitmap("dino42", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino43", "Idle (3).png");
draw_bitmap("dino43", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino44", "Idle (4).png");
draw_bitmap("dino44", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino45", "Idle (5).png");
draw_bitmap("dino45", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino46", "Idle (6).png");
draw_bitmap("dino46", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino47", "Idle (7).png");
draw_bitmap("dino47", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino48", "Idle (8).png");
draw_bitmap("dino48", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino49", "Idle (9).png");
draw_bitmap("dino49", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino50", "Idle (10).png");
draw_bitmap("dino50", 250, 175);
refresh_screen();
delay(150);

// Walking images from 73 to 191 line
clear_screen(COLOR_AQUA);
load_bitmap("dino19", "Walk (1).png");
draw_bitmap("dino19", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino20", "Walk (2).png");
draw_bitmap("dino20", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino21", "Walk (3).png");
draw_bitmap("dino21", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino22", "Walk (4).png");
draw_bitmap("dino22", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino23", "Walk (5).png");
draw_bitmap("dino23", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino24", "Walk (6).png");
draw_bitmap("dino24", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino25", "Walk (7).png");
draw_bitmap("dino25", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino26", "Walk (8).png");
draw_bitmap("dino26", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino27", "Walk (9).png");
draw_bitmap("dino27", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino28", "Walk (10).png");
draw_bitmap("dino28", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino19", "Walk (1).png");
draw_bitmap("dino19", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino20", "Walk (2).png");
draw_bitmap("dino20", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino21", "Walk (3).png");
draw_bitmap("dino21", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino22", "Walk (4).png");
draw_bitmap("dino22", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino23", "Walk (5).png");
draw_bitmap("dino23", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino24", "Walk (6).png");
draw_bitmap("dino24", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino25", "Walk (7).png");
draw_bitmap("dino25", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino26", "Walk (8).png");
draw_bitmap("dino26", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino27", "Walk (9).png");
draw_bitmap("dino27", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino28", "Walk (10).png");
draw_bitmap("dino28", 250, 175);
refresh_screen();
delay(150);

// Run images from line 194 to 242
clear_screen(COLOR_AQUA);
load_bitmap("dino18", "Run (8).png");
load_sound_effect("run", "run.mp3");
draw_bitmap("dino18", 250, 175);
refresh_screen();
play_sound_effect("run");
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino17", "Run (7).png");
draw_bitmap("dino17", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino16", "Run (6).png");
draw_bitmap("dino16", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino15", "Run (5).png");
draw_bitmap("dino15", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino14", "Run (4).png");
draw_bitmap("dino14", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino13", "Run (3).png");
draw_bitmap("dino13", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino12", "Run (2).png");
draw_bitmap("dino12", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino11", "Run (1).png");
draw_bitmap("dino11", 250, 175);
refresh_screen();
delay(150);

// Jump images from line 245 to 311
clear_screen(COLOR_AQUA);
load_bitmap("dino61", "Jump (2).png");
load_sound_effect("Boing", "comedy_boing.ogg");     // Sound for the jumping animation
draw_bitmap("dino61", 250, 155);
refresh_screen();
play_sound_effect("Boing");                         // Play the sound
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino62", "Jump (3).png");
draw_bitmap("dino62", 250, 135);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino63", "Jump (4).png");
draw_bitmap("dino63", 250, 115);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino64", "Jump (5).png");
draw_bitmap("dino64", 250, 95);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino65", "Jump (6).png");
draw_bitmap("dino65", 250, 95);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino66", "Jump (7).png");
draw_bitmap("dino66", 250, 115);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino67", "Jump (8).png");
draw_bitmap("dino67", 250, 135);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino68", "Jump (9).png");
draw_bitmap("dino68", 250, 155);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino69", "Jump (10).png");
draw_bitmap("dino69", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino70", "Jump (11).png");
draw_bitmap("dino70", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino71", "Jump (12).png");
draw_bitmap("dino71", 250, 175);
refresh_screen();
delay(150);

// Again run images from line 314 to 408
clear_screen(COLOR_AQUA);
load_bitmap("dino11", "Run (1).png");
draw_bitmap("dino11", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino12", "Run (2).png");
draw_bitmap("dino12", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino13", "Run (3).png");
draw_bitmap("dino13", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino14", "Run (4).png");
draw_bitmap("dino14", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino15", "Run (5).png");
draw_bitmap("dino15", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino16", "Run (6).png");
draw_bitmap("dino16", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino17", "Run (7).png");
draw_bitmap("dino17", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino18", "Run (8).png");
draw_bitmap("dino18", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino11", "Run (1).png");
draw_bitmap("dino11", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino12", "Run (2).png");
draw_bitmap("dino12", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino13", "Run (3).png");
draw_bitmap("dino13", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino14", "Run (4).png");
draw_bitmap("dino14", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino15", "Run (5).png");
draw_bitmap("dino15", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino16", "Run (6).png");
draw_bitmap("dino16", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino17", "Run (7).png");
draw_bitmap("dino17", 250, 175);
refresh_screen();
delay(150);

clear_screen(COLOR_AQUA);
load_bitmap("dino18", "Run (8).png");
draw_bitmap("dino18", 250, 175);
refresh_screen();
delay(150);

return 0;
}