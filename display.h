#ifndef DRAW_H
#define DRAW_H

#define MAXLINEBUFFER 256
#define MAXPREVIEWSIZE 4096

/*you shouldn't modify these*/
#define TERMCOLOR -1
#define RED     1
#define GREEN   2
#define BLUE    3
#define CYAN    4
#define PURPLE  5
#define YELLOW  6
#define WHITE   7
#define BLACK   8

/*window modes*/
#define DIR_MODE      0
#define PREVIEW_MODE  1
#define BOX_MODE      2
#define CMD_MODE      3
#define INFO_MODE     4
#define RN_MODE       5
#define CONFIRM_MODE  6

#include "data.h"

#include <ncurses.h>

typedef struct Display {
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
 
} Display;

void get_updates(Display *dis);
Display *init_display(Directory *dir);
void update_display(Display *dis, Directory **dir);
void kill_display(Display *dis);

#endif
