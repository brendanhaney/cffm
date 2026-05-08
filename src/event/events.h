#ifndef EVENTS_H
#define EVENTS_H

#include "../misc/bitset.h"

#include <stdint.h>
#include <stdbool.h>

#define MAX_EVENTS 256

typedef struct Event Event;
typedef struct EventManager EventManager;

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

struct EventManager {
    uint8_t processing;
    int eventc; // event count
	int eventp; // event pointer (current index in buffer)
    // Events are added, first come first serve
    Event buffer[MAX_EVENTS];
};

Event new_event(uint8_t type, bitset_t value);

void queue_event(EventManager *em, Event e);
Event next_event(EventManager *em);
void clear_manager(EventManager *em);
void print_queue(EventManager *em);

#endif
