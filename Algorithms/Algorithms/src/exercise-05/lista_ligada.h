template<class T>
class Lista {
private:
	//estrutura nó
	struct Node {
		//atributo datat
		T data;
		//ponteiro next
		Node* next;
	};

	//ponteiro que aponta para inicio da lista
	Node* inicio;
	int capacidade;
	int tamanhoAtual;

public:
	Lista(int capacidade) {
		this->capacidade = capacidade;
		//*inicio aponta para null
		inicio = nullptr;
		this->tamanhoAtual = 0;
	}

	~Lista() {
		//enquanto *inicio n apontar para null(lista n vazia)
		while (inicio != nullptr) {
			//*proximo aponta para elemento inicial+1
			Node* proximo = inicio->next;
			//elemento inicial deletado
			delete inicio;
			//*inicio agora aponta para *proximo (antigo *inicio+1)
			inicio = proximo;
		}
	}


	void adiciona(const T &item) {
		//verifica se lista está cheia
		if (tamanhoAtual >= capacidade) {
			throw "Lista cheia";
		}
		//lista não cheia
		else
		{
			//*novo instanciado
			Node* novo = new Node;
			//atributo data iguala pra parametro
			novo->data = item;
			//atributo *next de *novo aponta pra null
			novo->next = nullptr;

			//se fila vazia
			if (inicio == nullptr) {
				//*inicio passa a apontar para ponteiro instanciado *novo
				inicio = novo;
			}
			//lista não vazia
			else {
				//*atual aponta para *inicio
				Node* atual = inicio;
				//enquanto *atual n apontar para vazio
				while (atual->next != nullptr) {
					//*atual aponta para elem seguinte apontandoo assim para
					// ultimo elem
					atual = atual->next;
				}
				//atributo *next recebe *novo
				atual->next = novo;
			}
			//incrementa tamanho da lista
			tamanhoAtual++;
		}
	}


	T pega(int idx) {
		//verifica se idx é válido
		if (idx <= 0 || idx > tamanhoAtual) {
			throw "Item inválido";
		}
		else
		{
			//*atual recebe  *inicio
			Node* atual = inicio;
			//percorre lista até alcançar elem solic
			for (int i = 1; i < idx; i++) {
				//atual recebe elem desejado
				atual = atual->next;
			}
			//retorna atributo data do elemen desejado
			return atual->data;
		}
	}

	void insere(int idx, const T &item) {
		//verifica se idx é válido
		if (idx > tamanhoAtual + 1 || idx <= 0) {
			throw "Item inválido";
		} else if (tamanhoAtual == capacidade) {
			throw "Lista cheia";
		} else {
			//instancia *novo
			Node* novo = new Node;
			//atributo data recebe param
			novo->data = item;
			//verifica se é o primeiro item da lista
			if (idx == 1) {
				//atrib *next de *novo aponta pra o *inicio
				novo->next = inicio;
				//*inicio aponta pra *novo inserindo na lista
				inicio = novo;
			} else {
				//instancia *anterior apontando pra *inicio
				Node* anterior = inicio;
				//percorre lista até elem desej
				for (int i = 1; i < idx - 1; i++) {
					//*anterior aponta pra atrib *next de *anterior
					anterior = anterior->next;
				}
				//novo-*next aponta pra anterior-*next
				novo->next = anterior->next;
				anterior->next = novo;
			}
			//incrementa tamanho da lista
			tamanhoAtual++;
		}
	}

	void remove(int idx) {
		if (idx <= 0 || idx > capacidade || idx > tamanhoAtual) {
			throw "Item inválido";
		} else {
			//se for primeiro item, *inicio aponta pra o prox elemento e o
			//primeiro elem é deletado
			if (idx == 1) {
				Node* removido = inicio;
				inicio = inicio->next;
				delete removido;
			} else {
				//anterior aponta pra o inicio da lista
				Node* anterior = inicio;
				//percorre a lista até a pos desejada
				for (int i = 1; i < idx - 1; i++) {
					anterior = anterior->next;
				}
				//*removido aponta para o elem desejado(idx)
				Node* removido = anterior->next;
				//*next de *anterior aponta agora para o elem desejado*next
				//isso equivale a idx+1 pulando o elemen que quer remover
				anterior->next = removido->next;
				//efetitvamente deleta idx
				delete removido;
			}
			//decrementna tamanho da lista
			tamanhoAtual--;
		}
	}

	void exibe() {
		//ponteiro aponta pra o inicio da lista
		Node* atual = inicio;
		//imprime lista toda
		while (atual != nullptr) {
			std::cout << atual->data << " ";
			atual = atual->next;
		}
		std::cout << std::endl;
	}

	int tamanho() {
		return tamanhoAtual;
	}
};
