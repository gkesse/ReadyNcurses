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
    static GWindow* Create();
    static GWindow* Create(int key);

public:
    virtual void setText(int row, int col, const char* format, ...);
    virtual void setTextUnderline(int row, int col, const char* format, ...);
    virtual void setTextInverse(int row, int col, const char* format, ...);
    virtual void show();
};
//===============================================
#endif
//===============================================
