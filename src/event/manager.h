#ifndef EVENT_MAN_H
#define EVENT_MAN_H

#include "events.h"

#define MAX_EVENTS 64

typedef struct m_eventman {
    uint8_t processing;
    int eventc; // event count
	int eventp; // event pointer (current index in buffer)

    // Events are added, first come first serve
    Event buffer[MAX_EVENTS];

} EventManager;

void queue_event(EventManager *em, Event e);
Event next_event(EventManager *em);
void clear_manager(EventManager *em);
void print_queue(EventManager *em);

#endif