//===============================================
#include "GWindowDefault.h"
#include "GNcurses.h"
//===============================================
GWindowDefault::GWindowDefault() : GWindow() {
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
}
//===============================================
GWindowDefault::~GWindowDefault() {

}
//===============================================
void GWindowDefault::show() {
    printw("Modules");
	mvprintw(1, 0, "AQTR");
	GNcurses::Instance()->move(100, 100);
	printw("Start");
    getch();
    endwin();
}
//===============================================
