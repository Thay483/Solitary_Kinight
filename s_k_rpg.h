#ifndef S_K_RPG_H_INCLUDED
#define S_K_RPG_H_INCLUDED

//Aqui est�o definidas as bibliotecas do jogo
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h> // Usar fontes
#include <allegro5/allegro_ttf.h> // Renderizar fontes
#include <allegro5/allegro_image.h> // Usar imagens
#include <allegro5/keyboard.h> // Usar keyboard

    //INICIAR JOGO COM ALLEGRO
    void inicializar_jogo();

    //MOVIMENTA��O DO DRAG�O
    void mover_dragon();

    //DESTRUI��ES NECESS�RIAS
    al_destroy_bitmap(bg);
    al_destroy_bitmap(sprite);
    al_destroy_font(font);
    al_destroy_display(display);
    al_destroy_event_queue(event_queue);

#endif // S_K_RPG_H_INCLUDED
