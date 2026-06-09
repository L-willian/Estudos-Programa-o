# 🔐 Gerador de Senha

Aplicação em **C** que gera senhas aleatórias e seguras com customização de comprimento e variedade de caracteres.

## 📋 Objetivo do Projeto

Este projeto implementa um gerador de senhas robusto que:
- Gera senhas aleatórias com caracteres diversos
- Oferece controle sobre o comprimento da senha
- Garante segurança através de aleatoriedade adequada
- Demonstra boas práticas de gerenciamento de memória em C

É um projeto prático para entender geração de números aleatórios, alocação dinâmica de memória e manipulação de strings em C.

## 📁 Estrutura do Projeto

```
Gerador de Senha/
├── Gerador-de-senha.c      # Código-fonte do gerador
├── Gerador-de-senha        # Executável compilado
└── README.md               # Este arquivo
```

## 🏗️ Arquitetura

### **Gerador-de-senha.c** - Implementação

O programa implementa um gerador de senhas com os seguintes componentes:

#### Conjuntos de Caracteres
```c
uppercase  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"  // 26 letras maiúsculas
lowercase  = "abcdefghijklmnopqrstuvwxyz"  // 26 letras minúsculas
digits     = "0123456789"                  // 10 dígitos
special    = "!@#$%^&*()-_=+[]{}|;:,.<>?"  // 27 caracteres especiais
```

#### Fluxo de Execução

1. **Solicitação de Entrada**
   - Pede ao usuário o tamanho desejado da senha

2. **Alocação de Memória**
   - Aloca dinamicamente espaço para a senha: `malloc(tamanho + 1)`
   - O +1 é para o caractere nulo terminador `\0`

3. **Inicialização do Gerador**
   ```c
   srand(time(NULL) * getpid());
   ```
   - Usa hora atual e PID para seed aleatória
   - Garante diferentes resultados a cada execução

4. **Geração da Senha**
   - Para cada posição (0 até tamanho-1):
     - Sorteia tipo aleatório (0-3)
     - Seleciona caractere aleatório do conjunto
     - Insere na posição correspondente

5. **Finalização**
   - Adiciona terminador nulo `\0`
   - Exibe a senha gerada
   - Libera memória com `free()`

## 🚀 Funcionalidades Implementadas

| Funcionalidade | Descrição |
|---|---|
| **Entrada Customizável** | Usuário define o comprimento da senha |
| **Caracteres Maiúsculos** | Inclui A-Z |
| **Caracteres Minúsculos** | Inclui a-z |
| **Dígitos** | Inclui 0-9 |
| **Caracteres Especiais** | Inclui !@#$%^&*()-_=+[]{}\\|;:,.<>? |
| **Aleatoriedade** | Usa `rand()` com seed baseado em tempo e PID |
| **Gerenciamento de Memória** | Alocação e liberação corretas |
| **Terminador Nulo** | String C bem formatada |

## 🎮 Como Usar

### Compilação

```bash
gcc -o Gerador-de-senha Gerador-de-senha.c
```

Ou com flags recomendadas:

```bash
gcc -Wall -std=c99 -o Gerador-de-senha Gerador-de-senha.c
```

### Execução

```bash
./Gerador-de-senha
```

### Exemplo de Uso

```
$ ./Gerador-de-senha
Digite o tamanho da senha desejada: 
16
Senha gerada: 
k9mP#xL2@qB7$wYc

$ ./Gerador-de-senha
Digite o tamanho da senha desejada: 
20
Senha gerada: 
3F&d9jK*lQ2#bM-pX8vN
```

## 💡 Conceitos Técnicos

### Aleatoriedade

O programa usa a função `rand()` com uma seed baseada em tempo e PID:

```c
srand(time(NULL) * getpid());
```

- `time(NULL)`: Retorna segundos desde 1970
- `getpid()`: Retorna o ID único do processo
- Multiplicação garante maior variação entre execuções

### Seleção de Caracteres

O algoritmo usa operação modulo para mapear números aleatórios a índices:

```c
tipo = rand() % 4;              // Escolhe tipo (0-3)
password[i] = array[rand() % tamanho];  // Escolhe caractere
```

### Gerenciamento de Memória

```c
char *password = malloc(tamanho + 1);  // Alocação
// ... uso ...
free(password);                         // Liberação
```

Evita vazamento de memória (memory leak).

## 📊 Dados de Implementação

| Aspecto | Valor |
|---|---|
| Linguagem | C (ANSI C) |
| Linhas de Código | ~66 |
| Caracteres Únicos Possíveis | 89 (26+26+10+27) |
| Método de Geração | Seleção aleatória com rand() |
| Gerenciamento de Memória | Alocação dinâmica com malloc/free |
| Status | ✅ Completo |

## 🔒 Segurança

### Pontos Fortes

- ✅ Variedade de caracteres (4 tipos)
- ✅ Aleatoriedade baseada em tempo e PID
- ✅ Sem hardcoding de tamanho
- ✅ Limpeza correta de memória

### Limitações

- ⚠️ `rand()` não é criptograficamente seguro
- ⚠️ Para uso crítico, considerar `/dev/urandom` ou bibliotecas especializadas
- ⚠️ Sem validação de entrada (tamanho negativo)

## 🧪 Testes Recomendados

```bash
# Teste com tamanho pequeno
./Gerador-de-senha
# Digite: 8

# Teste com tamanho grande
./Gerador-de-senha
# Digite: 128

# Teste com tamanho inválido
./Gerador-de-senha
# Digite: 0  (comportamento indefinido)
# Digite: -5 (comportamento indefinido)
```

## 🎯 Próximas Melhorias Sugeridas

- [ ] Validação de entrada (rejeitar tamanho ≤ 0)
- [ ] Opção de excludente caracteres especiais
- [ ] Copiar senha para clipboard automaticamente
- [ ] Gerar múltiplas senhas em sequência
- [ ] Opção de salvar em arquivo
- [ ] Melhor aleatoriedade (usar `/dev/urandom`)
- [ ] Interface mais amigável com menu de opções

## 📝 Status de Desenvolvimento

**Versão:** 1.0  
**Status:** ✅ Funcional e Completo  
**Última Atualização:** Junho 2026

## 📚 Conceitos Abordados

- Alocação dinâmica de memória (`malloc`, `free`)
- Geração de números aleatórios (`rand`, `srand`)
- Manipulação de strings em C
- Arrays de caracteres
- Loops e condicionais
- Entrada/saída em C

## 👨‍💻 Autor

**Luiz Willian**  
Projeto educacional de programação C

## 📄 Licença

Este projeto é fornecido como material educacional.

---

**Nota:** Para fins educacionais. Para aplicações críticas de segurança, considere usar bibliotecas especializadas de criptografia.
