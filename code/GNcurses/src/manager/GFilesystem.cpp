//===============================================
#include "GFilesystem.h"
#include "GFilesystemDefault.h"
//===============================================
GFilesystem::GFilesystem() {

}
//===============================================
GFilesystem::~GFilesystem() {
    
}
//===============================================
GFilesystem* GFilesystem::Create(int key) {
    if(key == G_FILESYSTEM_DEFAULT) return new GFilesystemDefault() ;
    return new GFilesystemDefault; 
}
//===============================================
WINDOW* GFilesystem::getWindow(WINDOW* parent, int rows, int cols, int row, int col) {return 0;}
//===============================================
