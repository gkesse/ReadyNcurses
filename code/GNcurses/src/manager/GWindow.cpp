//===============================================
#include "GWindow.h"
#include "GWindowDefault.h"
#include "GWindowMouse.h"
//===============================================
GWindow::GWindow() {
    
}
//===============================================
GWindow::~GWindow() {
    
}
//===============================================
GWindow* GWindow::Create(int key) {
    if(key == G_WINDOW_DEFAULT) return new GWindowDefault;
    if(key == G_WINDOW_MOUSE) return new GWindowMouse;
    return new GWindowDefault;
}
//===============================================
void GWindow::show() {

}
//===============================================
