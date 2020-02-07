//===============================================
#include "GNcurses.h"
//===============================================
GNcurses* GNcurses::m_instance = 0;
//===============================================
GNcurses::GNcurses() {
    
}
//===============================================
GNcurses::~GNcurses() {
    
}
//===============================================
GNcurses* GNcurses::Instance() {
    if(m_instance == 0) {
        m_instance = new GNcurses;
    }
    return m_instance;
}
//===============================================
void GNcurses::move(int row, int col) {
    int lRow = (row*(LINES - 1))/100;
    int lCol = (col*(COLS - 1))/100;
    cout << lRow << " ; " << lCol << "\n";
    //move(lRow, lCol);
}
//===============================================
