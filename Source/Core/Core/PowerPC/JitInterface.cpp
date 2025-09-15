#ifdef __EMSCRIPTEN__
// WebAssembly: JIT is not supported, use interpreter instead
void InitJIT() {
    // No-op for WASM, or log a warning
    fprintf(stderr, "JIT is disabled in WASM build. Falling back to interpreter.\n");
}
#else
void InitJIT() {
    // Normal JIT initialization
}
#endif