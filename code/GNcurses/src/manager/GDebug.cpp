//===============================================
#include "GDebug.h"
//===============================================
GDebug* GDebug::m_instance = 0;
//===============================================
GDebug::GDebug() {
    sprintf(m_filename, "%s", "data/log/debug.txt");
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
    int lYear = lLocalTime.tm_year + 1900;
    int lMonth = lLocalTime.tm_mon + 1;
    int lDay = lLocalTime.tm_mday;
    int lHour = lLocalTime.tm_hour;
    int lMin = lLocalTime.tm_min;
    int lSec = lLocalTime.tm_sec;
    sprintf(m_dateTime, "%02d/%02d%04d %02d:%02d:%02d", lDay, lYear, lMonth, lHour, lMin, lSec);
}
//===============================================
void GDebug::write(const char* data) {
    getCurrentDate();
    FILE* lpFile = fopen(m_filename, "a+"); 
    fprintf(lpFile, "%s | %s\n", m_dateTime, data);
    fclose(lpFile);
}
//===============================================
