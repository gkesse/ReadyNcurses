//===============================================
#include "GWindow.h"
#include "GDebug.h"
//===============================================
int main(int argc, char** argv) {
    if(0) {
    GWindow* lWindow = GWindow::Create(G_WINDOW_DEFAULT);
    lWindow->show();}
    GDebug::Instance()->write("message de debogage");
    return 0;
}
//===============================================
