A minesweeper game written in raylib and c.

emscripten comilation command on linux: 
```
emcc -o index.html main.c -Os -Wall -I /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/include -L /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/lib/libraylib.a -s USE_GLFW=3 -s ASYNCIFY --preload-file /home/sbj/Downloads/programming/c/raylib-minesweeper/resources/flag.png -DPLATFORM_WEB /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/lib/libraylib.a
```

