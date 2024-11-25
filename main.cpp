#include <cstdint>
#include <iostream>
#include <allegro5/allegro.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    if(!al_init())
        return -1;

    ALLEGRO_DISPLAY* window = al_create_display(1280, 720);
    al_set_window_title(window, "HelloAllegro");

    std::cout<<"Bye"<<std::endl;

    while(true)
    {}

    al_destroy_display(window);

    return 0;
}

/*
 *
 */
