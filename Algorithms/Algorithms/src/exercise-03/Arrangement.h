template<class T>
class Arrangement {
private:
	int tamanho; // tamanho do arranjo
	T *items; //items do arranjo
public:
	Arrangement(int tam) {
		this->tamanho = tam;
		items = new T[tam];
		// instanciar o array de items com new (pratica 1) e setar tamanho;
	}
	virtual ~Arrangement() {
		delete[] items;
		// destruir o array de items (prática 1);
	}
	virtual T get(int idx) {
		if (idx < 0 || idx >= tamanho) {
			throw std::out_of_range("Índice fora do intervalo válido.");
		}
		return items[idx];
		// retornar um item do array a partir do indice;
	}
	virtual void set(int idx, const T &item) {
		if (idx < 0 || idx >= tamanho) {
			throw std::out_of_range("Índice fora do intervalo válido.");
		}
		items[idx] = item;
		// set o item do array apontado pelo indice usando =
	}
	virtual void exibir();
};

class InvalidIndex: public std::out_of_range {
public:
	InvalidIndex(const std::string &message) :
			std::out_of_range(message) {
	}
};

template<class T>
void Arrangement<T>::exibir() {
	for (int i = 0; i < tamanho; i++) {
		std::cout << "[" << i << ": " << items[i] << "] ";
	}
	// exibir cada item numa linha da forma "<idx>: <item>"
}
