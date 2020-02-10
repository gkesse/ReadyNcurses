//===============================================
#ifndef _GEnum_
#define _GEnum_
//===============================================
#include "GInclude.h"
//===============================================
typedef enum _eGEnum {
	G_UNKNOWN,
	G_WINDOW_DEFAULT,
	G_FILESYSTEM_DEFAULT,
	G_LAST
} eGEnum;
//===============================================
typedef struct _sGEnum {
	bool onFlag;
    int id;
    const char* name;
    
} sGEnum;
//===============================================
class GEnum {
private:
    GEnum(); 

public:
    ~GEnum();
    static GEnum* Instance();
    const char* getName(int id);
    int getId(const char* name);

public:
    static GEnum* m_instance;
};
//===============================================
#endif
//===============================================
