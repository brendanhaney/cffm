#include "manager.h"

FileManager fm_new(char *path) {

    FileManager f = {0};

    f.active = init_directories(path);

    f.parent = f.active->parent;

    return f;
}