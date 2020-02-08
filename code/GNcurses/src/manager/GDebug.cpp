//===============================================
#include "GDebug.h"
//===============================================
GDebug* GDebug::m_instance = 0;
//===============================================
GDebug::GDebug() {
    sprintf(m_filename, "%s", "data/debug/debug.txt");
    clear();
}
//===============================================
GDebug::~GDebug() {
    
}
//===============================================
GDebug* GDebug::Instance() {
    if(m_instance == 0) {
        m_instance = new GDebug;
    }
    return m_instance;
}
//===============================================
void GDebug::getCurrentDate() {
    time_t lTime = time(NULL);
    struct tm lLocalTime = *localtime(&lTime);
    int lDay = lLocalTime.tm_mday;
    int lMonth = lLocalTime.tm_mon + 1;
    int lYear = lLocalTime.tm_year + 1900;
    int lHour = lLocalTime.tm_hour;
    int lMin = lLocalTime.tm_min;
    int lSec = lLocalTime.tm_sec;
    sprintf(m_dateTime, "%02d/%02d/%04d %02d:%02d:%02d", lDay, lMonth, lYear, lHour, lMin, lSec);
}
//===============================================
void GDebug::write(const char* format, ...) {
    char lDataLine[GBUFFER_STRING+1];
    getCurrentDate();
    FILE* lpFile = fopen(m_filename, "a+"); 
    va_list lArgs;
    va_start(lArgs, format);
    vsprintf(lDataLine, format, lArgs);
    va_end(lArgs);    
    fprintf(lpFile, "%s | %s\n", m_dateTime, lDataLine);
    fclose(lpFile);
}
//===============================================
void GDebug::clear() {
    char lCommand[GBUFFER_STRING+1];
    sprintf(lCommand, "> %s", m_filename);
    system(lCommand);
}
//===============================================
