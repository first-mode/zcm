#ifndef _ZCM_BLOCKING_H
#define _ZCM_BLOCKING_H

#include "zcm/zcm.h"
#include "zcm/transport.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct zcm_blocking zcm_blocking_t;
zcm_blocking_t *zcm_blocking_create(zcm_t *z, zcm_trans_t *trans);
void   zcm_blocking_destroy(zcm_blocking_t *zcm);

int    zcm_blocking_publish(zcm_blocking_t *zcm, const char *channel, char *data, size_t len);
int    zcm_blocking_subscribe(zcm_blocking_t *zcm, const char *channel, zcm_callback_t *cb, void *usr);

void   zcm_blocking_become(zcm_blocking_t *zcm);

#ifdef __cplusplus
}
#endif

#endif /* _ZCM_BLOCKING_H */
