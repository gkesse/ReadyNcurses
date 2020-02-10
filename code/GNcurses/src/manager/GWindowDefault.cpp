//===============================================
#include "GWindowDefault.h"
#include "GFilesystem.h"
#include "GEnum.h"
//===============================================
GWindowDefault::GWindowDefault() : GWindow() {
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
    m_menu = 0;
}
//===============================================
GWindowDefault::~GWindowDefault() {

}
//===============================================
void GWindowDefault::show() {
    paintEvent();
    while(1) {
        int lKey = getch();
        if(lKey == KEY_ESCAPE) break;
        if(lKey == KEY_RESIZE) {paintEvent();}
    }
    
    endwin();
}
//===============================================
void GWindowDefault::paintEvent() {
    //free(m_menu);
    m_menu = GFilesystem::Create(G_FILESYSTEM_DEFAULT)->getWindow(stdscr, LINES, 0.20*COLS, 0, 0);
    mvwprintw(m_menu, 1, 1, "Menu");    
    wrefresh(m_menu);
}
//===============================================
