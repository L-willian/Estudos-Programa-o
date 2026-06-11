# 📚 Estudos-Programação

Repositório pessoal contendo projetos de aprendizado e prática de programação em diversas linguagens e áreas.

## 🎯 Objetivo

Este repositório serve como um portfólio de estudos, consolidando diferentes projetos realizados para aprender e aprofundar conhecimentos em:
- Linguagens de programação (C, Python, Java, JavaScript, etc.)
- Algoritmos e estruturas de dados
- Sistemas operacionais
- Desenvolvimento de software

## 📁 Estrutura do Repositório

```
Estudos-Programação/
├── Mini Memory Manager/     # Gerenciador de memória em C
├── Gerador de Senha/        # Gerador de senhas aleatórias em C
├── Cifra de César/          # Criptografia com Cifra de César em C
├── README.md                # Este arquivo
└── [Futuros projetos...]
```

## 🏢 Projetos

### 1. **Mini Memory Manager** 💾
   
   **Descrição:** Simulador de gerenciamento de memória em C
   
   **Tecnologias:** C (ANSI C)
   
   **Funcionalidades:**
   - Criar processos que alocam memória
   - Visualização gráfica do mapa de memória
   - Listagem de processos ativos
   - Alocação contígua com algoritmo First Fit
   
   **Status:** ✅ Em Desenvolvimento
   
   **Próximos Passos:**
   - Implementar desalocação de processos
   - Compactação de memória
   - Algoritmos avançados (Best Fit, Worst Fit)
   
   📖 [Documentação Completa](Mini%20Memory%20Manager/README.md)

### 2. **Gerador de Senha** 🔐
   
   **Descrição:** Gerador de senhas aleatórias e seguras
   
   **Tecnologias:** C (ANSI C)
   
   **Funcionalidades:**
   - Gera senhas aleatórias com 4 tipos de caracteres
   - Customização de comprimento
   - Suporta letras maiúsculas, minúsculas, dígitos e caracteres especiais
   - Gerenciamento correto de memória
   
   **Status:** ✅ Funcional e Completo
   
   **Próximos Passos:**
   - Validação de entrada
   - Melhor aleatoriedade criptográfica
   - Opções de filtro de caracteres
   
   📖 [Documentação Completa](Gerador%20de%20Senha/README.md)

### 3. **Cifra de César** 🔒
   
   **Descrição:** Implementação completa de criptografia clássica com Cifra de César
   
   **Tecnologias:** C (ANSI C)
   
   **Funcionalidades:**
   - ✅ Criptografar mensagens com deslocamento de 3 posições
   - ✅ Descriptografar mensagens (reversão do deslocamento)
   - ✅ Suporte a todos os caracteres ASCII
   - ✅ Programas independentes para cada função (Criptografando.c, Descriptografando.c)
   - ✅ Leitura interativa de entrada do usuário
   
   **Status:** ✅ Funcional e Completo
   
   **Próximos Passos:**
   - Implementar chave dinâmica (entrada do usuário)
   - Menu unificado com ambas funcionalidades
   - Suporte apenas ao alfabeto (ignorar símbolos)
   - Análise de frequência para quebra de cifra
   
   📖 [Documentação Completa](Cifra%20de%20C%C3%A9sar/README.md)

---

## 📊 Estatísticas do Repositório

| Métrica | Valor |
|---|---|
| Total de Projetos | 3 |
| Linguagens Utilizadas | C |
| Últimas Atualizações | Junho 2026 |

## 🛠️ Como Usar Este Repositório

### Compilar Projetos

```bash
# Mini Memory Manager
cd "Mini Memory Manager"
gcc -Wall -std=c99 -o memory_manager Main.c Memoria.c Processo.c
./memory_manager

# Gerador de Senha
cd "Gerador de Senha"
gcc -Wall -std=c99 -o Gerador-de-senha Gerador-de-senha.c
./Gerador-de-senha

# Cifra de César
cd "Cifra de César"
gcc -Wall -std=c99 -o Criptografando Criptografando.c
gcc -Wall -std=c99 -o Descriptografando Descriptografando.c
./Criptografando   # Para criptografar
./Descriptografando # Para descriptografar
```

### Navegar entre Projetos

Cada pasta de projeto contém seu próprio `README.md` com:
- Descrição detalhada
- Instruções de compilação/execução
- Exemplos de uso
- Estrutura de código

## 👨‍💻 Autor

**Luiz Willian**

## 📅 Histórico de Desenvolvimento

### Junho 2026
- ✅ Criado Mini Memory Manager
- ✅ Implementação de alocação de memória
- ✅ Sistema de gerenciamento de processos
- ✅ Documentação completa do Mini Memory Manager
- ✅ Criado Gerador de Senha
- ✅ Geração de senhas aleatórias com 4 tipos de caracteres
- ✅ Documentação completa do Gerador de Senha
- ✅ Implementado projeto Cifra de César (funcional e completo)
- ✅ Programas de criptografia e descriptografia
- ✅ Documentação profissional de todos os projetos

## 🎓 Áreas de Aprendizado

- [x] Gerenciamento de memória
- [x] Geração de números aleatórios
- [x] Criptografia
- [ ] Estruturas de dados avançadas
- [ ] Algoritmos de otimização
- [ ] Programação orientada a objetos
- [ ] Padrões de design
- [ ] Desenvolvimento web
- [ ] Inteligência artificial

## 📚 Recursos Utilizados

- **Linguagens:** C, (futuras: Python, Java, JavaScript)
- **Ferramentas:** GCC, VSCode, Git
- **Conceitos:** SO, Algoritmos, Estruturas de Dados

## 🚀 Roadmap Futuro

### Próximos Projetos Planejados

- [ ] **Sistema de Arquivos Simples** - Implementar um miniFS em C
- [ ] **Gerenciador de Tarefas** - Aplicação em Python com banco de dados
- [ ] **Jogo 2D** - Desenvolvido com biblioteca gráfica
- [ ] **API REST** - Back-end em Python/Node.js
- [ ] **Aplicativo Web** - Front-end em React/Vue

## 🤝 Contribuições

Este é um repositório pessoal de estudos. Feedback e sugestões são bem-vindos!

## 📝 Licença

Projetos fornecidos para fins educacionais.

---

**Última Atualização:** Junho 2026  
**Versão do Repositório:** 1.3

✨ *Cada projeto é um passo na jornada do aprendizado em programação.*
