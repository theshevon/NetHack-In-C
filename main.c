#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Player{
    int x_pos;
    int y_pos;
    int health;
} Player_t;

// function prototypes
void set_up_screen();
void set_up_map();
Player_t* set_up_player();

int
main(int argc, char** argv){
    Player_t *player;
    set_up_screen();
    set_up_map();
    int ch;

    player = set_up_player();

    while ((ch = getch()) != 'q'){

    }
    endwin(); // stop ncurses
    return 0;
}

void
set_up_screen(){
    initscr();
    noecho(); // stops keyboard input from being visible on the screen
    refresh();
}

void
set_up_map(){
    mvprintw(13, 13, "--------");
    mvprintw(14, 13, "|------|");
    mvprintw(15, 13, "|------|");
    mvprintw(16, 13, "|------|");
    mvprintw(17, 13, "|------|");
    mvprintw(18, 13, "--------");

    mvprintw(2, 40, "--------");
    mvprintw(3, 40, "|------|");
    mvprintw(4, 40, "|------|");
    mvprintw(5, 40, "|------|");
    mvprintw(6, 40, "|------|");
    mvprintw(7, 40, "--------");

    mvprintw(10, 40, "------------");
    mvprintw(11, 40, "|----------|");
    mvprintw(12, 40, "|----------|");
    mvprintw(13, 40, "|----------|");
    mvprintw(14, 40, "|----------|");
    mvprintw(15, 40, "------------");
}

Player_t*
set_up_player(){
    Player_t* player;
    player = malloc(sizeof(*player));

    player->x_pos = 14;
    player->y_pos = 14;
    player->health = 20;

    mvprintw(player->y_pos, player->x_pos, "@");
    move(player->y_pos, player->x_pos); // moves the cursor to the player's position
    return player;

}