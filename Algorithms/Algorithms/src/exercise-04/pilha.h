template <class T>
class Pilha {
private:
	int capacidade;
	T *itens;
	int topoDaPilha;
// Atributos para array de items, capacidade e topo da pilha
public:
Pilha(int capacidade) {
	this ->capacidade = capacidade;
	itens = new T[capacidade];
	topoDaPilha = -1;
// instancia array de items, inicializa capacidade e topo
}
~Pilha() {
	delete[] itens;
// destroy array de items

}
void empilha(T item) {
	  if (topoDaPilha >= capacidade - 1) {
		     throw std::overflow_error("Estouro da pilha!");
	        }
	        topoDaPilha++;
	        itens[topoDaPilha] = item;
// empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
}
T desempilha() {
// remove um item do topo da pilha; lança “Pilha vazia” se vazia

	        if (topoDaPilha < 0) {
	        	 throw std::underflow_error("Pilha vazia!");
	        }
	        int valor = itens[topoDaPilha];
	        topoDaPilha--;
	        return valor;
	    }

int tamanho() {
 // retorna o número de elementos na pilha.
	  return topoDaPilha +1;
}
};
