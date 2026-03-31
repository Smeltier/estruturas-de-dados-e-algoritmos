#include <vector>

int binary_search(std::vector<int> &V, const int valor) {
  int esquerda = 0;
  int direita = (int) V.size() - 1;

  while (esquerda <= direita) {
    int meio = esquerda + (direita - esquerda) / 2;

    if (valor == V[meio]) {
      return meio + 1;
    }
    else if (valor < V[meio]) {
      direita = meio - 1;
    }
    else {
      esquerda = meio + 1;
    }
  }

  return 0;
}
