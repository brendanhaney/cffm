#ifndef FM_STATE_H
#define FM_STATE_H

enum {
    FM_RUNNING = 0x1,
    FM_SHOW_HIDDEN = 0x2,
    FM_ORDER_INVERSE = 0x4,
    FM_CUTTING = 0x8,
    FM_COPYING = 0x10,
    FM_DELETING = 0x20,
    FM_MODE_VISUAL = 0x40
};

#endif