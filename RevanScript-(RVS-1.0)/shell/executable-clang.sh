rm -f ../bin/clang/RevanScript
if clang -static -std=c99 -O2 -o ../bin/clang/RevanScript ../src/main.c ../src/rvsio.c ../src/rvsctl.c ../src/rvsmem.c ../src/rvsbuf.c ../src/rvsflg.c ../src/rvsprs.c ../src/rvsexp.c ../src/rvsmth.c ../src/rvslgc.c ../src/rvstbl.c ../src/rvsstd.c ../src/rvsarr.c; then
    strip ../bin/clang/RevanScript
    echo Successful Executable!!!
else
    echo No Executable!!!
fi
