//===============================================
#include "GWindowMenu.h"
//===============================================
GWindowMenu::GWindowMenu() : GWindow() {
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
        refresh();

}
//===============================================
GWindowMenu::~GWindowMenu() {

}
//===============================================
void GWindowMenu::show() {
    int WIDTH = 30;
    int HEIGHT = 10;

    int startx = 0;
    int starty = 0;

	WINDOW* lMenu = newwin(HEIGHT, WIDTH, starty, startx);
	box(lMenu, 0, 0);
    //wattron(lMenu, A_REVERSE); 
    mvwprintw(lMenu, 0, 0, "%s", "Produit 1");
    //wattroff(lMenu, A_REVERSE);	
    wrefresh(lMenu);
    getch();
    refresh(); 
    endwin();
}
//===============================================
