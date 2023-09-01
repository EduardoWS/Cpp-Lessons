# Makefile para compilar e executar o hello.cpp

# Compilador a ser utilizado
CXX = g++

# Opções de compilação
CXXFLAGS = -std=c++11 -Wall

EXECUTABLE = main

# Regra para compilar o arquivo hello.cpp e gerar o executável
main: hello.cpp
	$(CXX) $(CXXFLAGS) hello.cpp -o $(EXECUTABLE)
	

# Regra para executar o programa
exec:
	$(CXX) $(CXXFLAGS) hello.cpp -o $(EXECUTABLE)
	./$(EXECUTABLE)
	rm -f $(EXECUTABLE)

# Regra para limpar os arquivos gerados pela compilação
clean:
	rm -f $(EXECUTABLE)