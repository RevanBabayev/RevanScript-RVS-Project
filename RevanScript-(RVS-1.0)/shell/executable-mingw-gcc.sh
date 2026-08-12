rm -f ../bin/mingw-gcc/RevanScript.exe
if x86_64-w64-mingw32-gcc -static -std=c99 -O2 -o ../bin/mingw-gcc/RevanScript.exe ../src/main.c ../src/rvsio.c ../src/rvsctl.c ../src/rvsmem.c ../src/rvsbuf.c ../src/rvsflg.c ../src/rvsprs.c ../src/rvsexp.c ../src/rvsmth.c ../src/rvslgc.c ../src/rvstbl.c ../src/rvsstd.c ../src/rvsarr.c; then
    strip ../bin/mingw-gcc/RevanScript.exe
    echo Successful Executable!!!
else
    echo No Executable!!!
fi
