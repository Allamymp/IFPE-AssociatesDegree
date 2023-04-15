template<class T>
class Fila {
private:
    T *itens;
    int capacidade;
    int tamanhoFila;
    int posicaoInicial;

public:
    Fila(int cap) {
        this->capacidade = cap;
        itens = new T[capacidade];
        this->tamanhoFila = 0;
        posicaoInicial = 0;
    }

    ~Fila() {
        delete[] itens;
    }

    void enfileira(const T &item) {
        if (tamanhoFila ==capacidade) {
           throw "fila cheia";
        } else {
            int pos = (posicaoInicial + tamanhoFila) % capacidade;
            itens[pos] = item;
            tamanhoFila++;
        }
    }

    T desenfileira() {
        if (tamanhoFila == 0) {
          throw "fila vazia";
        } else {
            T item = itens[posicaoInicial];
            posicaoInicial = (posicaoInicial + 1) % capacidade;
            tamanhoFila--;
            return item;
        }
    }

    int cheia() {
        return tamanhoFila == capacidade;
    }

    int vazia() {
        return tamanhoFila == 0;
    }

    int tamanho() {
        return tamanhoFila;
    }

    int cap() {
        return capacidade - 1; // retorna a capacidade real da fila (sem o +1 adicionado no construtor)
    }
};
