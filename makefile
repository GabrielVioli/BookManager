# Nome do executável final
EXEC = C:\Users\gabri\OneDrive\Área de Trabalho\SistemaDegerenciamentodeBibliotecas

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Diretórios
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build
OUTPUT_DIR = bin
DATA_DIR = data

# Arquivos fonte e objeto
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Alvo padrão (compilar o projeto)
all: $(EXEC)

# Como compilar o executável
$(EXEC): $(OBJ_FILES)
	@mkdir -p $(OUTPUT_DIR)  # Cria a pasta output se não existir
	$(CXX) $(OBJ_FILES) -o $(EXEC)

# Como compilar os arquivos objeto (.o)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)  # Cria a pasta build se não existir
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Limpar os arquivos de build (objetos e executáveis)
clean:
	rm -rf $(BUILD_DIR)/*.o $(EXEC)

# Tarefa para rodar o programa
run: $(EXEC)
	./$(EXEC)

# Alvos especiais
.PHONY: all clean run
