# 🔒 Cifra de César

Implementação completa de um sistema de criptografia clássica usando **Cifra de César** em **C (ANSI C)**.

## 📋 Objetivo do Projeto

Este projeto demonstra a implementação prática de um algoritmo de criptografia clássico através de dois programas independentes:
- **Criptografando**: Encripta mensagens deslocando cada caractere
- **Descriptografando**: Decripta mensagens revertendo o deslocamento

É um projeto educacional que reforça conceitos fundamentais de:
- Manipulação de strings em C
- Operações com caracteres ASCII
- Algoritmos de criptografia
- Programação em linha de comando

## 📁 Estrutura do Projeto

```
Cifra de César/
├── Criptografando.c         # Programa de encriptação
├── Descriptografando.c      # Programa de descriptografia
├── Criptografando           # Executável compilado
├── Descriptografando        # Executável compilado
└── README.md                # Este arquivo
```

## 📝 Status de Desenvolvimento

| Métrica | Valor |
|---------|-------|
| **Versão** | 1.0 |
| **Status** | ✅ Funcional e Completo |
| **Última Atualização** | Junho 2026 |

### ✅ Funcionalidades Implementadas

- [x] Encriptação de mensagens com Cifra de César
- [x] Descriptografia de mensagens
- [x] Deslocamento fixo de 3 posições (chave = 3)
- [x] Suporte a qualquer caractere ASCII
- [x] Leitura de entrada do usuário
- [x] Compilação com GCC

## 🔧 Compilação e Execução

### Pré-requisitos
- GCC (compilador C)
- Terminal/Console
- Nenhuma biblioteca externa necessária (apenas libs padrão ANSI C)

### Compilar

```bash
# Compilar programa de encriptação
gcc -Wall -std=c99 -o Criptografando Criptografando.c

# Compilar programa de descriptografia
gcc -Wall -std=c99 -o Descriptografando Descriptografando.c
```

### Executar

```bash
# Encriptar uma mensagem
./Criptografando

# Decriptar uma mensagem
./Descriptografando
```

## 💡 Como Usar

### Exemplo 1: Criptografando

```bash
$ ./Criptografando
Digite o texto a ser criptografado: Olá Mundo
Texto criptografado: Roj#Pxqgr
```

**Explicação:** Cada caractere foi deslocado 3 posições na tabela ASCII:
- `O` (79) → `R` (82)
- `l` (108) → `o` (111)
- `á` (225) → `ä` (228)
- ` ` (32) → `#` (35)

### Exemplo 2: Descriptografando

```bash
$ ./Descriptografando
Digite o texto a ser descriptografado: Roj#Pxqgr
Texto descriptografado: Olá Mundo
```

## 🔐 Conceitos Técnicos

### O que é Cifra de César?

A **Cifra de César** é um dos algoritmos de criptografia mais antigos, usado pelo líder romano Julius Caesar. Funciona deslocando cada letra um número fixo de posições no alfabeto.

### Como funciona nesta implementação

```
Encriptação:   Caractere + Chave = Caractere Criptografado
Descriptografia: Caractere Criptografado - Chave = Caractere Original

Chave utilizada: 3
```

### Exemplo com o alfabeto

```
Alfabeto original:   A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
Alfabeto cifrado:    D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
(deslocamento = 3)
```

## 📊 Detalhes da Implementação

### Criptografando.c

```c
- Lê texto do usuário (até 100 caracteres)
- Chave fixa: 3
- Loop por cada caractere
- Aplica: caractere + chave
- Exibe resultado criptografado
```

### Descriptografando.c

```c
- Lê texto criptografado (até 100 caracteres)
- Chave fixa: 3 (mesma da encriptação)
- Loop por cada caractere
- Aplica: caractere - chave
- Exibe resultado descriptografado
```

## 🚀 Possíveis Melhorias Futuras

- [ ] Chave dinâmica (entrada do usuário)
- [ ] Menu interativo (criptografar/descriptografar)
- [ ] Suporte apenas ao alfabeto (ignorar espaços/símbolos)
- [ ] Validação de entrada
- [ ] Programa unificado com ambas funcionalidades
- [ ] Análise de frequência para quebra de cifra
- [ ] Interface gráfica

## 🎓 Conceitos Aprendidos

- ✅ Manipulação de arrays em C
- ✅ Operações com caracteres ASCII
- ✅ Loops e estruturas de controle
- ✅ Funções de entrada/saída (stdio)
- ✅ Manipulação de strings (string.h)
- ✅ Compilação e execução de programas C

## 🔍 Segurança

⚠️ **Importante:** A Cifra de César é **historicamente interessante**, mas **não deve ser usada para proteção de dados real**. É facilmente quebrável por análise de frequência. Use algoritmos modernos como AES para criptografia real.

## 📚 Referências

- **Cifra de César**: Algoritmo de substituição monoalfabético
- **Deslocamento**: Número fixo de posições no alfabeto
- **Força Bruta**: Apenas 25 chaves possíveis (fácil quebrar)
- **Análise de Frequência**: Método clássico para quebra de Cifra de César

## 👨‍💻 Autor

**Luiz Willian**  
Projeto educacional de programação em C

## 📄 Licença

Este projeto é fornecido como material educacional.

---

**Última Atualização:** Junho 2026  
**Versão:** 1.0

✨ *Um projeto clássico de criptografia para fins de aprendizado.*
