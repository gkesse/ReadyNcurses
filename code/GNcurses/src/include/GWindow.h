//===============================================
#ifndef _GWindow_
#define _GWindow_
//===============================================
#include "GInclude.h"
//===============================================
class GWindow {
public:
    GWindow();
    virtual ~GWindow();
    static GWindow* Create(int key);

public:
    virtual void show();
};
//===============================================
#endif
//===============================================
