#ifndef FILE_MAN_H
#define FILE_MAN_H

#include "../misc/types.h"
#include "data.h"

typedef struct m_fileman {
    Directory *root;
    Directory *parent;
    Directory *active;
  
    bitset_t state;
    /*directory hashtable*/
    Table ht;

    ClipBoard cb;

} FileManager;

FileManager fm_new(const char *start_path);

#endif