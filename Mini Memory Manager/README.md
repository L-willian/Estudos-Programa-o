# 💾 Mini Memory Manager

Um gerenciador de memória minimalista desenvolvido em **C** para simular a alocação e liberação de memória por processos, com visualização gráfica do mapa de memória.

## 📋 Objetivo do Projeto

Este projeto implementa um sistema básico de gerenciamento de memória que permite:
- Criar processos que ocupam espaço na memória
- Alocar blocos contíguos de memória para processos
- Rastrear quais processos estão usando quais endereços de memória
- Visualizar o estado atual da memória através de um mapa gráfico

É um projeto educacional para entender os conceitos fundamentais de gerenciamento de memória em sistemas operacionais.

## 📁 Estrutura do Projeto

```
Mini Memory Manager/
├── Main.c           # Menu interativo e ponto de entrada do programa
├── Memoria.c        # Implementação do gerenciador de memória
├── Memoria.h        # Definições de interface da memória
├── Processo.c       # Manipulação de dados dos processos
├── Processo.h       # Estrutura de dados do processo
└── README.md        # Este arquivo
```

## 🏗️ Arquitetura

### Arquivos e Responsabilidades

#### **Main.c** - Interface de Usuário
- Implementa um menu interativo em linha de comando
- Coordena as operações entre memória e processos
- Tratamento básico de erros
- Incrementa automaticamente o ID dos processos

#### **Memoria.h / Memoria.c** - Gerenciador de Memória
Gerencia alocação e visualização de memória:
- `inicializar_memoria()`: Zera toda a memória disponível
- `alocar_memoria(tamanho, id)`: Aloca espaço contíguo para um processo
- `mostrar_memoria()`: Exibe o mapa visual da memória

**Características:**
- Tamanho total: **1024 bytes**
- Usa algoritmo de alocação **First Fit** (primeiro espaço que cabe)
- Procura por blocos contíguos livres (marcados com '.')
- Marca posições ocupadas com o ID do processo ('#')

#### **Processo.h / Processo.c** - Gerenciamento de Processos
Gerencia a lista de processos criados:
- `adicionar_processo(id, tamanho, endereco)`: Registra um novo processo
- `listar_processos()`: Exibe informações de todos os processos

Estrutura `Processo`:
```c
typedef struct {
    int id;          // Identificador único do processo
    int tamanho;     // Bytes necessários
    int endereco;    // Posição inicial na memória
    int ativo;       // Status: 1 (ativo) ou 0 (inativo)
} Processo;
```

## 🚀 Funcionalidades Implementadas

### ✅ Concluídas

| Funcionalidade | Descrição |
|---|---|
| **Criar Processo** | Aloca memória contígua para um novo processo |
| **Listar Processos** | Exibe todos os processos com seus dados |
| **Exibir Memória** | Mostra mapa visual de ocupação (# = ocupado, . = livre) |
| **Menu Interativo** | Interface simples baseada em texto |
| **Gerenciamento Automático de IDs** | Incrementa ID automaticamente a cada novo processo |
| **Validação de Tamanho** | Rejeita tamanhos inválidos (≤ 0) |
| **Alocação Contígua** | Busca blocos contínuos de memória livre |

### ⏳ Funcionalidades Não Implementadas

- [ ] Liberar/desalocar processos
- [ ] Compactação de memória
- [ ] Algoritmos avançados (Best Fit, Worst Fit)
- [ ] Proteção de memória entre processos
- [ ] Tratamento de fragmentação

## 🎮 Como Usar

### Compilação

```bash
gcc -o memory_manager Main.c Memoria.c Processo.c
```

### Execução

```bash
./memory_manager
```

### Menu Principal

```
1. Criar processo        - Aloca memória para novo processo
2. Liberar processo      - [Não implementado]
3. Listar processos      - Mostra todos os processos
4. Exibir memória        - Visualiza mapa de memória
5. Sair                  - Encerra o programa
```

### Exemplo de Uso

```
1. Criar processo
   Digite o tamanho do processo: 50
   Processo 1 alocado no endereço 0.

2. Criar processo
   Digite o tamanho do processo: 30
   Processo 2 alocado no endereço 50.

3. Listar processos
   =================
   Processos Ativos:
   =================
   ID: 1
    Tamanho: 50
    Endereço: 0
    Status: Ativo
   -----------------
   ID: 2
    Tamanho: 30
    Endereço: 50
    Status: Ativo
   -----------------

4. Exibir memória
   Mapa de Memória:
   ####################(50 chars)##############(30 chars)...(944 chars)
```

## 💡 Conceitos Técnicos

### Alocação de Memória

O sistema implementa a estratégia **First Fit**:
1. Varre a memória do início até o fim
2. Procura por espaço livre contíguo
3. Aloca no primeiro espaço que cabe
4. Marca com o ID do processo

```c
for (int i = 0; i < TAM_MEMORIA; i++) {
    if (memoria[i] == 0) {
        livres++;
    } else {
        livres = 0;  // Reset se encontrar ocupado
    }
    if (livres == tamanho) {
        // Aloca a memória
    }
}
```

### Mapa de Memória

Visualização ASCII do estado da memória:
- `#` representa bytes ocupados por um processo
- `.` representa bytes livres
- Facilita identificar fragmentação

### Estrutura de Dados

- **Array global `memoria[1024]`**: Simula a memória principal
- **Array dinâmico `processos`**: Rastreia dados dos processos
- **Variável `total_processos`**: Contador de processos ativos

## 📊 Dados de Implementação

| Aspecto | Valor |
|---|---|
| Linguagem | C (ANSI C) |
| Tamanho da Memória | 1024 bytes |
| Máximo de Processos | Ilimitado (alocação dinâmica) |
| Algoritmo de Alocação | First Fit |
| Status | Em desenvolvimento |

## 🔧 Compilação e Testes

### Comando Completo

```bash
# Compilar
gcc -Wall -std=c99 -o memory_manager Main.c Memoria.c Processo.c

# Executar
./memory_manager
```

### Flags Recomendadas

- `-Wall`: Mostra todos os avisos
- `-std=c99`: Usa padrão C99
- `-g`: Adiciona informações de debug (se necessário)

## 📝 Status de Desenvolvimento

**Versão:** 1.0  
**Última Atualização:** Junho 2026

### Histórico de Commits

- `41eb5c0` - Adicionar mensagens e correções na alocação de processos
- `8f22813` - Adicionar funções para gerenciar processos e alocação de memória
- `ae7d139` - Adicionar funcionalidade para criar processos e alocar memória
- `b2f3e9f` - Adicionar implementação do menu e funções de gerenciamento de memória
- `d5d8d36` - Adicionar arquivos iniciais para o Mini Memory Manager

## 🎯 Próximos Passos Sugeridos

1. **Implementar Desalocação**: Liberar memória de processos terminados
2. **Compactação**: Reorganizar memória para reduzir fragmentação
3. **Algoritmos Avançados**: Best Fit ou Worst Fit
4. **Melhorias de UI**: Menu com mais opções e validações
5. **Persistência**: Salvar/carregar estado em arquivo

## 📚 Referências e Conceitos

- **Gerenciamento de Memória**: Conceito fundamental em SO
- **Alocação Contígua**: Blocos contínuos de memória para cada processo
- **Fragmentação**: Perda de espaço útil devido à divisão fragmentada
- **First Fit Algorithm**: Aloca no primeiro espaço disponível

## 👨‍💻 Autor

**Luiz Willian**  
Projeto educacional de sistemas operacionais

## 📄 Licença

Este projeto é fornecido como material educacional.

---

**Nota:** Este é um projeto educacional com fins didáticos. Não é recomendado para uso em produção ou sistemas críticos.
