rm -f ../bin/gcc/RevanScript
if gcc -static -std=c99 -O2 -o ../bin/gcc/RevanScript ../src/main.c ../src/rvsio.c ../src/rvsctl.c ../src/rvsmem.c ../src/rvsbuf.c ../src/rvsflg.c ../src/rvsprs.c ../src/rvsexp.c ../src/rvsmth.c ../src/rvslgc.c ../src/rvstbl.c ../src/rvsstd.c; then
    strip ../bin/gcc/RevanScript
    echo Successful Executable!!!
else
    echo No Executable!!!
fi
