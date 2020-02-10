//===============================================
#ifndef _GOptions_
#define _GOptions_
//===============================================
#include "GInclude.h"
//===============================================
class GOptions {
private:
    GOptions(); 

public:
    ~GOptions();
    static GOptions* Instance();
    void getArgs(int argc, char** argv);
    int getArgc();
    char** getArgv();

public:
    static GOptions* m_instance;
    int m_argc;
    char** m_argv;
};
//===============================================
#endif
//===============================================
