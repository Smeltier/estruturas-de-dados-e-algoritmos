# Merge Sort

### Ideia:

Algoritmo de ordenação que utiliza a técnica de divisão e conquista.
Divide a lista em sub-listas menores, depois vai mesclando de forma ordenada cada uma delas.

### Algoritmo:

Os três passos dos algoritmos de **divisão e conquista** que se aplicam ao *MERGE* são:

1. Dividir: Calcula o ponto médio na sub-lista, o que demora um tempo constante $\Theta(1)$.
2. Conquistar: Recursivamente resolve dois subproblemas, cada um de tamanho $n/2$, o que contribui com $2T(n/2)$ para o tempo de execução.
3. Combinar: Unir as sub-listas em uma única lista ordenado, o que leva o tempo $\Theta(n)$.

### Pseudocódigo:

```C++
MERGE_SORT(V, inicio, fim)
  V: Vetor que ordenaremos.
  inicio: Onde o intervalo de ordenação começa.
  fim: Onde o intervalo de ordenação termina.

    se inicio = fim então
        retorne

    meio <- inicio + ⌊(fim - inicio) / 2⌋

    MERGE_SORT(V, inicio, meio)
    MERGE_SORT(V, meio + 1, fim)

    MESCLAR(V, inicio, meio, fim)

MESCLAR(V, inicio, meio, fim)
    esquerda <- V[inicio] ... V[meio]
    direita <- V[meio + 1] ... V[fim]

    i <- 0
    j <- 0
    k <- inicio

    enquanto i < tamanho(esquerda) e j < tamanho(direita) faça
        se esquerda[i] <= direita[j] então
            V[k] <- esquerda[i]
            i <- i + 1
            k <- k + 1
        senão
            V[k] <- direita[j]
            j <- j + 1
            k <- k + 1

    enquanto i < tamanho(esquerda) faça
        V[k] <- esquerda[i]
        i <- i + 1
        k <- k + 1

    enquanto j < tamanho(direita) faça
        V[k] <- direita[j]
        j <- j + 1
        k <- k + 1

```

### Implementação:

O código implementado em C++ pode ser acessado clicando aqui: [MERGE SORT](merge_sort.cpp)

### Complexidade de Tempo:

- Melhor caso: $O(n\, lgn)$
- Pior caso: $\Omega(n\, lgn)$

### Complexidade de Espaço:

- $O(n)$ - Devido aos vetores temporários usados na função _MESCLAR_.
