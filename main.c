#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

// function prototypes
void set_up_screen();
void set_up_map();

int
main(int argc, char** argv){
    set_up_screen();
    set_up_map();
    getch();
    endwin(); // stop ncurses
    return 0;
}

void
set_up_screen(){
    initscr();
    printw("Hello World");
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