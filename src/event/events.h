#ifndef EVENTS_H
#define EVENTS_H

#include "../misc/bitset.h"

#include <stdint.h>
#include <stdbool.h>

#define MAX_EVENTS 256

typedef struct Event Event;

enum {
	E_TERM, E_ERR, E_NOOP, E_INPUT, E_SYSTEM, E_REF
};

struct Event {
    uint8_t type;
    bitset_t value;

    // Extended functionality
    int argc;
    char **argv;
};

Event new_event(uint8_t type, bitset_t value);

#endif
