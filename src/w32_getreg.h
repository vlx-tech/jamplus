#ifndef W32_GETREG_H
#define W32_GETREG_H

const char* w32_getreg(LIST* pathlist);
LIST* w32_getregkeys(LIST* pathlist);
const char* w32_getreg64(LIST* pathlist);

#endif
