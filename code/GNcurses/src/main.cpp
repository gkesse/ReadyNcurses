//===============================================
#include "GWindow.h"
#include "GOptions.h"
//===============================================
int main(int argc, char** argv) {
    GOptions::Instance()->getArgs(argc, argv);
    GWindow* lWindow = GWindow::Create();
    lWindow->show();
    return 0;
}
//===============================================
