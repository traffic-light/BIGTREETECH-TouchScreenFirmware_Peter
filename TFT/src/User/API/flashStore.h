#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "stdbool.h"
#include "variants.h"
#include "Settings.h"

#define PARA_SIZE 768  //bytes

void readStoredPara(void);
void storePara(void);
bool readIsTSCExist(void);
bool readIsRestored(void);

#ifdef __cplusplus
}
#endif
