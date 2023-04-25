//template<class T>
//class Lista {
//private:
//	T *itens;
//	int capacidade;
//	int tamanhoAtual;
//	// atributos:
//	// - itens da lista (ponteiro para T usado como array)
//	// - capacidade e tamanho atual (inteiros)
//public:
//	Lista(int capacidade) {
//		this->capacidade = capacidade;
//		itens = new T[capacidade];
//		this->tamanhoAtual = 0;
//// inicilização do array de itens, capacidade e tamanho
//	}
//	~Lista() {
//		delete[] itens;
//	}
//
//	void adiciona(const T &item) {
//	    if (tamanhoAtual >= capacidade) {
//	        throw "Lista cheia";
//	    } else {
//	        itens[tamanhoAtual++] = item;
//	    }
//	}
//
//
//	T pega(int idx) {
//		if (idx <= 0 || idx > tamanhoAtual) {
//			throw std::out_of_range("Item inválido");
//		} else {
//			return itens[idx - 1];
//		}
//	}
//
//	void insere(int idx, const T &item) {
//		if (idx > tamanhoAtual + 1 || idx <= 0) {
//			throw std::out_of_range("Item inválido");
//		} else if (tamanhoAtual == capacidade) {
//			throw std::overflow_error("Lista cheia");
//		} else {
//			for (int i = tamanhoAtual - 1; i >= idx - 1; i--) {
//				itens[i + 1] = itens[i];
//			}
//			itens[idx - 1] = item;
//			tamanhoAtual++;
//		}
//	}
//
//	void remove(int idx) {
//		if (idx <= 0 || idx > capacidade || idx > tamanhoAtual) {
//			throw "Item inválido";
//		} else {
//			for (int i = idx - 1; i < tamanhoAtual - 1; i++) {
//				itens[i] = itens[i + 1];
//			}
//			tamanhoAtual--;
//		}
//	}
//
//	void exibe() {
//		for (int i = 0; i < tamanhoAtual; i++) {
//			std::cout << itens[i] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	int tamanho() {
//		return tamanhoAtual;
//	}
//};
