# Gerenciador de Biblioteca

Este projeto é um sistema de gerenciamento de biblioteca desenvolvido em C++. Ele permite aos usuários gerenciar uma coleção de livros de forma simples e eficiente, utilizando uma interface de linha de comando (CLI) ou, opcionalmente, uma interface gráfica.

## Funcionalidades

### Requisitos Funcionais
1. **Adicionar Livros**
   - Permite ao usuário adicionar livros com as seguintes informações:
     - Título
     - Autor
     - Gênero
     - Ano de publicação
   - Os livros são armazenados em uma lista.

2. **Listar Livros**
   - Exibe todos os livros cadastrados, mostrando suas informações de forma organizada.

3. **Pesquisar Livros**
   - Permite a busca de livros pelo título ou pelo autor.
   - A pesquisa é feita por meio de palavras-chave.

4. **Remover Livros**
   - Permite ao usuário remover livros utilizando o título como referência.

5. **Persistência de Dados**
   - Salva os dados dos livros em um arquivo (`library_data.txt`) para garantir persistência.
   - Carrega os dados automaticamente ao iniciar o programa.

### Requisitos Não Funcionais
1. **Facilidade de Uso**
   - Interface simples e intuitiva baseada em linha de comando (CLI).

2. **Desempenho**
   - Operações de listagem e busca são otimizadas para lidar com grandes volumes de dados.

3. **Portabilidade**
   - O sistema é compatível com diferentes sistemas operacionais (Windows, Linux, MacOS) utilizando um compilador C++.

4. **Manutenibilidade**
   - Código modular para facilitar alterações e expansões futuras.

### Requisitos Opcionais
1. **Interface Gráfica**
   - Substituição da CLI por uma interface gráfica utilizando bibliotecas como Qt ou SFML.

2. **Funcionalidades Avançadas**
   - Classificação de livros em categorias.
   - Sistema de empréstimos de livros.
   - Ordenação de livros por título, autor ou ano de publicação.

3. **Segurança de Dados**
   - Criptografia dos dados salvos no arquivo `library_data.txt`.

4. **Internacionalização**
   - Suporte para múltiplos idiomas, como português e inglês.

## Tecnologias Utilizadas
- Linguagem: C++
- Persistência de dados: Arquivo de texto (`library_data.txt`)
- Bibliotecas opcionais: Qt ou SFML (para interface gráfica)

## Como Executar
1. Certifique-se de ter um compilador C++ instalado no seu sistema.
2. Clone este repositório:
   ```bash
   git clone https://github.com/seu-usuario/gerenciador-biblioteca.git
   ```
3. Compile o código:
   ```bash
   g++ -o gerenciador main.cpp
   ```
4. Execute o programa:
   ```bash
   ./gerenciador
   ```

## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests com melhorias.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).