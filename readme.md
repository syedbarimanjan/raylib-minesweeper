A simple minesweeper game written in raylib and c.

<img width="2559" height="1361" alt="Screenshot_20260514_154657" src="https://github.com/user-attachments/assets/cfc9be18-cefa-4e0e-a433-c3d7de14fc23" />



# How to run locally
Install emscripten sdk for your machine and then install raylib with web compilation using this command: 
```
git clone https://github.com/raysan5/raylib
cd raylib
emcmake cmake . -DPLATFORM=Web
emmake make
sudo make install
```
also compile it for desktop:
```
cmake -B build -DPLATFORM=PLATFORM_DESKTOP -DPLATFORM=Desktop;Web .
cmake --build build
sudo cmake --install build/
```
finally compile your code with emscripten comilation command on linux: 
```
emcc -o index.html main.c -Os -Wall -I /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/include -L /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/lib/libraylib.a -s USE_GLFW=3 -s ASYNCIFY --preload-file /home/sbj/Downloads/programming/c/raylib-minesweeper/resources/flag.png -DPLATFORM_WEB /home/sbj/Downloads/programming/c/emsdk/upstream/emscripten/cache/sysroot/lib/libraylib.a
```

