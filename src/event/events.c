#include "events.h"

#include <stdio.h>

Event new_event(uint8_t type, bitset_t value) {

	Event e;
	e.type = type;
	e.value = value;
	e.argc = 0;

	return e;
}
