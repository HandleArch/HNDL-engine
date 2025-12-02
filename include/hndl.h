// hndl.h — HNDL Engine public C API
// Copyright (c) 2025 handle

#pragma once

#ifdef __cplusplus
extern "C" {
    #endif

    typedef struct HndlEngine HndlEngine;
    typedef struct HndlWindow HndlWindow;

    // Core
    HndlEngine* hndl_create_engine(void);
    void        hndl_destroy_engine(HndlEngine* engine);

    // Window & rendering
    HndlWindow* hndl_create_window(HndlEngine* engine, int w, int h, const char* title);
    void        hndl_poll_events(HndlEngine* engine);
    bool        hndl_window_should_close(HndlWindow* window);
    void        hndl_swap_buffers(HndlWindow* window);

    // Future extensions (to be added)
    void        hndl_load_scene(HndlEngine* engine, const char* gltf_path);
    void        hndl_render_frame(HndlEngine* engine);

    #ifdef __cplusplus
}
#endif
