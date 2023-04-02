template <class T>
class Arrangement {
private:
int tamanho; // tamanho do arranjo
T * items; //items do arranjo
public:
Arrangement(int tam) {
// instanciar o array de items com new (pratica 1) e setar tamanho;
}
virtual ~Arrangement() {
// destruir o array de items (prática 1);
}
virtual T get(int idx) {
// retornar um item do array a partir do indice;
}
virtual void set(int idx, const T & item) {
// set o item do array apontado pelo indice usando =
}
virtual void exibir();
};
template<class T>
void Arrangement<T>::exibir() {
	// exibir cada item numa linha da forma "<idx>: <item>"
	}

