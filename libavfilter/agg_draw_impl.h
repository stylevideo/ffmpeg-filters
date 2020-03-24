#include <stdint.h>
#include "avfilter.h"

extern "C" {
    
void draw_line(buffer_conext buf,
                      int x0, int y0, int x1, int y1,
                      const uint8_t color[4]);

}
