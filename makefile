compila:
	g++ -std=c++20 main.cpp ./src/definicoes/*.cpp ./src/headers/*.h -o ./out/main
createDir:
	mkdir out