//===============================================
#include "GFilesystemDefault.h"
#include "GEnum.h"
#include "GDebug.h"
//===============================================
GFilesystemDefault::GFilesystemDefault() :
GFilesystem() {

}
//===============================================
GFilesystemDefault::~GFilesystemDefault() {

}
//===============================================
WINDOW* GFilesystemDefault::getWindow(WINDOW* parent, int rows, int cols, int row, int col) {
    m_window = subwin(parent, rows, cols, row, col);
    box(m_window, ACS_VLINE, ACS_HLINE);
    return m_window;
}
//===============================================
