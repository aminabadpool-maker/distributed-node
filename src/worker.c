#include <emscripten/emscripten.h>
EMSCRIPTEN_KEEPALIVE
int process_micro_task(int id, int c) { int r=0; for(int i=0; i<c*1000; i++) r+=(i*id)%97; return r; }