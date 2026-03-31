#include <vector>

void merge(std::vector<int> &V, int inicio, int meio, int fim) {
  std::vector<int> esquerda(V.begin() + inicio, V.begin() + meio + 1);
  std::vector<int> direita(V.begin() + meio + 1, V.begin() + fim + 1);

  int i = 0;
  int j = 0;
  int k = 0;

  while (i < (int) esquerda.size() and j < (int) direita.size()) {
    if (esquerda[i] <= direita[j]) {
        V[k++] = esquerda[i++];
    } else {
        V[k++] = direita[j++];
    }
  }

  while (i < (int) esquerda.size()) {
    V[k++] = esquerda[i++];
  }
  while (j < (int)direita.size()) {
    V[k++] = direita[j++];
  }
}

void merge_sort(std::vector<int> &V, int inicio, int fim) {
  if (inicio >= fim) {
    return;
  }

  int meio = inicio + (fim - inicio) / 2;

  merge_sort(V, inicio, meio);
  merge_sort(V, meio + 1, fim);
  merge(V, inicio, meio, fim);
}

void merge_sort(std::vector<int> &V) {
  if (V.empty()) {
    return;
  }
  merge_sort(V, 0, (int) V.size() - 1);
}
