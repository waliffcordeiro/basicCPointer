all:
	g++ ./source/main.cpp ./source/func.cpp -o sumPointer

run:
	g++ ./source/main.cpp ./source/func.cpp -o sumPointer
	./sumPointer
clean:
	find . -type f -executable -exec rm '{}' \;