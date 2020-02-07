//===============================================
#ifndef _GDebug_
#define _GDebug_
//===============================================
#include "GInclude.h"
//===============================================
class GDebug {
private:
    GDebug(); 

public:
    ~GDebug();
    static GDebug* Instance();
    void getCurrentDate();
    void write(const char* data);

public:
    static GDebug* m_instance;
    char m_filename[GBUFFER_STRING+1];
    char m_dateTime[GBUFFER_STRING+1];
    char m_dataLine[GBUFFER_STRING+1];
};
//===============================================
#endif
//===============================================
