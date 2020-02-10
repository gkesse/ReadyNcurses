//===============================================
#include "GOptions.h"
//===============================================
GOptions* GOptions::m_instance = 0;
//===============================================
GOptions::GOptions() {

}
//===============================================
GOptions::~GOptions() {
    
}
//===============================================
GOptions* GOptions::Instance() {
    if(m_instance == 0) {
        m_instance = new GOptions;
    }
    return m_instance;
}
//===============================================
void GOptions::getArgs(int argc, char** argv) {
    m_argc = argc;
    m_argv = argv;
}
//===============================================
int GOptions::getArgc() {
    return m_argc;
}
//===============================================
char** GOptions::getArgv() {
    return m_argv;
}
//===============================================
