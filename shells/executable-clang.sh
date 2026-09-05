rm -f ../bin/clang/RevanScript
if clang -std=c99 -O2 -c ../src/main.c -o ../objects/clang/main.o; then
	echo "Successful [main.o] object file!!!"
else
	echo "Failed [main.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsbuf.c -o ../objects/clang/rvsbuf.o; then
	echo "Successful [rvsbuf.o] object file!!!"
else
	echo "Failed [rvsbuf.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsctl.c -o ../objects/clang/rvsctl.o; then
	echo "Successful [rvsctl.o] object file!!!"
else
	echo "Failed [rvsctl.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsexp.c -o ../objects/clang/rvsexp.o; then
	echo "Successful [rvsexp.o] object file!!!"
else
	echo "Failed [rvsexp.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsflg.c -o ../objects/clang/rvsflg.o; then
	echo "Successful [rvsflg.o] object file!!!"
else
	echo "Failed [rvsflg.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsio.c -o ../objects/clang/rvsio.o; then
	echo "Successful [rvsio.o] object file!!!"
else
	echo "Failed [rvsio.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvslgc.c -o ../objects/clang/rvslgc.o; then
	echo "Successful [rvslgc.o] object file!!!"
else
	echo "Failed [rvslgc.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsmem.c -o ../objects/clang/rvsmem.o; then
	echo "Successful [rvsmem.o] object file!!!"
else
	echo "Failed [rvsmem.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsmth.c -o ../objects/clang/rvsmth.o; then
	echo "Successful [rvsmth.o] object file!!!"
else
	echo "Failed [rvsmth.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsprs.c -o ../objects/clang/rvsprs.o; then
	echo "Successful [rvsprs.o] object file!!!"
else
	echo "Failed [rvsprs.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsstd.c -o ../objects/clang/rvsstd.o; then
	echo "Successful [rvsstd.o] object file!!!"
else
	echo "Failed [rvsstd.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvstbl.c -o ../objects/clang/rvstbl.o; then
	echo "Successful [rvstbl.o] object file!!!"
else
	echo "Failed [rvstbl.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvskey.c -o ../objects/clang/rvskey.o; then
	echo "Successful [rvskey.o] object file!!!"
else
	echo "Failed [rvskey.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvskey.c -o ../objects/clang/rvskey.o; then
	echo "Successful [rvskey.o] object file!!!"
else
	echo "Failed [rvskey.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsarr.c -o ../objects/clang/rvsarr.o; then
	echo "Successful [rvsarr.o] object file!!!"
else
	echo "Failed [rvsarr.o] object file!!!"
fi
if clang -std=c99 -O2 -c ../src/rvsmtx.c -o ../objects/clang/rvsmtx.o; then
	echo "Successful [rvsmtx.o] object file!!!"
else
	echo "Failed [rvsmtx.o] object file!!!"
fi
if clang -static -o ../bin/clang/RevanScript ../objects/clang/*.o; then
    strip ../bin/clang/RevanScript
    echo "Successful Executable!!!"
else
    echo "Failed Executable!!!"
fi