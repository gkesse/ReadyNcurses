//===============================================
#ifndef _GNcurses_
#define _GNcurses_
//===============================================
#include "GInclude.h"
//===============================================
class GNcurses {
private:
    GNcurses();

public:
    ~GNcurses();
    static GNcurses* Instance();
    void move(int row, int col);

public:
    static GNcurses* m_instance;
};
//===============================================
#endif
//===============================================
