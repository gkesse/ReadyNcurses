//===============================================
#ifndef _GWindowDefault_
#define _GWindowDefault_
//===============================================
#include "GWindow.h"
//===============================================
class GWindowDefault : public GWindow {
public:
    GWindowDefault();
    ~GWindowDefault();
    
public:
    void show();
    
public:
    void paintEvent();
    
private:
    WINDOW* m_menu;
};
//===============================================
#endif
//===============================================
