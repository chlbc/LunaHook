cmake -DPLUGIN=1 ../CMakeLists.txt -G "Visual Studio 17 2022" -A win32 -T host=x86 -B ../build/plugin32
cmake --build ../build/plugin32 --config Release --target ALL_BUILD -j 14