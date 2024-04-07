.PHONY: compila
compila:
	g++ main.cpp ./src/definicoes/*.cpp ./src/headers/*.h -o ./out/main
createDir:
	mkdir out