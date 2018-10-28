exe_name = bitmap_loader
objects = main.o bitmap.o filesystem.o

$(exe_name) : $(objects)
	g++ -Wall -o $(exe_name) $(objects)

main.o : main.cpp bitmap.h filesystem.h
	g++ -c main.cpp

bitmap.o : bitmap.cpp bitmap.h
	g++ -c bitmap.cpp

filesystem.o : filesystem.cpp filesystem.h bitmap.h
	g++ -c filesystem.cpp

.PHONY : clean

clean:
	rm $(objects)