#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

/* called by parseAck() to notify ABL process status */
void ablUpdateStatus(bool succeeded);

void menuUBLSave(void);
void menuUBLLoad(void);

void menuABL(void);

#ifdef __cplusplus
}
#endif
