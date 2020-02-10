//===============================================
#ifndef _GFilesystemDefault_
#define _GFilesystemDefault_
//===============================================
#include "GFilesystem.h"
//===============================================
class GFilesystemDefault : public GFilesystem {
public:
    GFilesystemDefault();
    ~GFilesystemDefault();
    
public:
    WINDOW* getWindow(WINDOW* parent, int rows, int cols, int row, int col);
    
        
private:
    WINDOW* m_window;
};
//===============================================
#endif
//===============================================
