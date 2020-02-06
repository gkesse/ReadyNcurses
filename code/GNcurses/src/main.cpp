//===============================================
#include "GWindow.h"
//===============================================
int main(int argc, char** argv) {
    GWindow* lWindow = GWindow::Create(G_WINDOW_MOUSE);
    lWindow->show();
    return 0;
}
//===============================================
