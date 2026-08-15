rm -f ../bin/mingw-gcc/RevanScript.exe
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/main.c -o ../object/main.o; then
	echo "Successful [main.o] object file!!!"
else
	echo "Failed [main.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsbuf.c -o ../object/rvsbuf.o; then
	echo "Successful [rvsbuf.o] object file!!!"
else
	echo "Failed [rvsbuf.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsctl.c -o ../object/rvsctl.o; then
	echo "Successful [rvsctl.o] object file!!!"
else
	echo "Failed [rvsctl.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsexp.c -o ../object/rvsexp.o; then
	echo "Successful [rvsexp.o] object file!!!"
else
	echo "Failed [rvsexp.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsflg.c -o ../object/rvsflg.o; then
	echo "Successful [rvsflg.o] object file!!!"
else
	echo "Failed [rvsflg.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsio.c -o ../object/rvsio.o; then
	echo "Successful [rvsio.o] object file!!!"
else
	echo "Failed [rvsio.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvslgc.c -o ../object/rvslgc.o; then
	echo "Successful [rvslgc.o] object file!!!"
else
	echo "Failed [rvslgc.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsmem.c -o ../object/rvsmem.o; then
	echo "Successful [rvsmem.o] object file!!!"
else
	echo "Failed [rvsmem.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsmth.c -o ../object/rvsmth.o; then
	echo "Successful [rvsmth.o] object file!!!"
else
	echo "Failed [rvsmth.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsprs.c -o ../object/rvsprs.o; then
	echo "Successful [rvsprs.o] object file!!!"
else
	echo "Failed [rvsprs.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsstd.c -o ../object/rvsstd.o; then
	echo "Successful [rvsstd.o] object file!!!"
else
	echo "Failed [rvsstd.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvstbl.c -o ../object/rvstbl.o; then
	echo "Successful [rvstbl.o] object file!!!"
else
	echo "Failed [rvstbl.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvskey.c -o ../object/rvskey.o; then
	echo "Successful [rvskey.o] object file!!!"
else
	echo "Failed [rvskey.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvskey.c -o ../object/rvskey.o; then
	echo "Successful [rvskey.o] object file!!!"
else
	echo "Failed [rvskey.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsarr.c -o ../object/rvsarr.o; then
	echo "Successful [rvsarr.o] object file!!!"
else
	echo "Failed [rvsarr.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -std=c99 -O2 -c ../src/rvsmtx.c -o ../object/rvsmtx.o; then
	echo "Successful [rvsmtx.o] object file!!!"
else
	echo "Failed [rvsmtx.o] object file!!!"
fi
if x86_64-w64-mingw32-gcc -static -o ../bin/mingw-gcc/RevanScript.exe ../object/*.o; then
    strip ../bin/mingw-gcc/RevanScript.exe
    echo "Successful Executable!!!"
else
    echo "Failed Executable!!!"
fi
