#ifndef DRAW_H
#define DRAW_H

#define MAXLINEBUFFER 256
#define MAXPREVIEWSIZE 4096

enum display_colors {
  TERMCOLOR = -1,
  RED       = 1,
  GREEN     = 2,
  BLUE      = 3,
  CYAN      = 4,
  PURPLE    = 5,
  YELLOW    = 6,
  WHITE     = 7,
  BLACK     = 8
};

enum window_modes {
  DIR_MODE      = 0,
  PREVIEW_MODE  = 1,
  BOX_MODE      = 2,
  CMD_MODE      = 3,
  INFO_MODE     = 4,
  RN_MODE       = 5,
  CONFIRM_MODE  = 6
};

#include "state.h"
#include "../misc/types.h"
#include "../file/data.h"
#include "../file/manager.h"
#include "../event/manager.h"

#include <ncurses.h>

struct Display {
  WINDOW *root;
  WINDOW *titlew;
  WINDOW *leftw;
  WINDOW *mainw;
  WINDOW *rightw;
  WINDOW *previeww;
 
  int mainw_width;
  int leftw_width;
  int rightw_width;
  int preview_width;
  int preview_height;
  int width, height;

  FileManager *fm;

  EventManager *em;

  bitset_t state;
 
};

void get_updates(Display *dis);
Display *init_display(Directory *dir);
void update_display(Display *dis, Directory **dir);
void kill_display(Display *dis);

#endif
