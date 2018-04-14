#ifndef TASKPROTO__H
#define TASKPROTO__H

#include "mytype.h"
#include "protocol.h"

#define STATUS_DATA_VALID       1
#define STATUS_DATA_INVALID     0

extern uint16_t PRO_STATUS;

// task declaration
void StartProtocolTask(void const *argument);
void SetProStatusValid(void);
uint16_t CheckProStatus(void);
#endif