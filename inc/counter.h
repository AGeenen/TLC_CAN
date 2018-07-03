#include <stdint.h>

#ifndef __COUNTER_H
#define __COUNTER_H

void counter_count_and_tx (void);
void counter_update_leds (uint8_t count);
void counter_init (void);
#endif
