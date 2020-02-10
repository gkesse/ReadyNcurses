//===============================================
#include "GWindow.h"
#include "GWindowDefault.h"
#include "GOptions.h"
//===============================================
GWindow::GWindow() {

}
//===============================================
GWindow::~GWindow() {
    
}
//===============================================
GWindow* GWindow::Create() {
    int lKey = -1;
    int lArgc = GOptions::Instance()->getArgc();
    char** lArgv = GOptions::Instance()->getArgv();
    if(lArgc > 1) {lKey = GEnum::Instance()->getId(lArgv[0]);}
    if(lKey == G_WINDOW_DEFAULT) return new GWindowDefault;
    return new GWindowDefault;
}
//===============================================
GWindow* GWindow::Create(int key) {
    if(key == G_WINDOW_DEFAULT) return new GWindowDefault;
    return new GWindowDefault;
}
//===============================================
void GWindow::setTextUnderline(int row, int col, const char* format, ...) {
    char lBuffer[GBUFFER_STRING+1];
    va_list lArgs;
    va_start(lArgs, format);
    vsprintf(lBuffer, format, lArgs);
    va_end(lArgs);
    attron(A_UNDERLINE);
    mvprintw(row, col, lBuffer);
    attroff(A_UNDERLINE);
}
//===============================================
void GWindow::setTextInverse(int row, int col, const char* format, ...) {
    char lBuffer[GBUFFER_STRING+1];
    va_list lArgs;
    va_start(lArgs, format);
    vsprintf(lBuffer, format, lArgs);
    va_end(lArgs);
    attron(A_REVERSE);
    mvprintw(row, col, lBuffer);
    attroff(A_REVERSE);
}
//===============================================
void GWindow::setText(int row, int col, const char* format, ...) {
    char lBuffer[GBUFFER_STRING+1];
    va_list lArgs;
    va_start(lArgs, format);
    vsprintf(lBuffer, format, lArgs);
    va_end(lArgs);
    mvprintw(row, col, lBuffer);
}
//===============================================
void GWindow::show() {}
//===============================================
