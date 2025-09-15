#ifdef __EMSCRIPTEN__
#include <GLES2/gl2.h> // WebGL via Emscripten
// ...implement minimal WebGL backend...
#else
#include <GL/gl.h> // Native OpenGL
#endif