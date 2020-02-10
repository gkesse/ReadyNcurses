//===============================================
#ifndef _GFilesystem_
#define _GFilesystem_
//===============================================
#include "GInclude.h"
//===============================================
class GFilesystem {
public:
    GFilesystem();
    virtual ~GFilesystem();
    static GFilesystem* Create(int key);

public:
    virtual WINDOW* getWindow(WINDOW* parent, int rows, int cols, int row, int col);
};
//===============================================
#endif
//===============================================
