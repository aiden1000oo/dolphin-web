#ifdef __EMSCRIPTEN__
// Stub: No audio support yet in WASM build
void InitAudio() {
    fprintf(stderr, "Audio is disabled in WASM build.\n");
}
#else
void InitAudio() {
    // Normal audio initialization
}
#endif