template <class T>
class Fila{
private:
	  struct Node {
	        T data;
	        Node* next;
	    };
	  Node*start;
	  Node*end;
	  int capacidade;
	  int tamanhoFila;
	    int posicaoInicial;


public:
	  Fila(int cap){
		  this->capacidade = cap;
		  start = nullptr;
		  end=nullptr;
		  tamanhoFila=0;
		  posicaoInicial = 0;
	  }
	  ~Fila(){
		  Node*atual = start;
		  while(atual!=nullptr){
			  Node*proximo=atual->next;
			  delete atual;
			  atual = proximo;
		  }
	  }

	  void enfileirar(const T &data) {
		  //verifica fila cheia
	        if (tamanhoFila == capacidade) {
	            throw "fila cheia";
	        } else {
	        	//instancia ponteiro
	            Node* newNode = new Node;
	            if (newNode == nullptr) {
	                throw "queue overflow";
	            }
	            //atributo data de newNode é igualado a parametro data
	            newNode->data = data;
	            //atribubto *next ded newNode aponta pra null;
	            newNode->next = nullptr;

	            //fila vazia
	            if (start == nullptr) {
	               //ponteiro start e end apontam para o mesmo objeto
	            	start = newNode;
	                end = newNode;

	            }
	            //fila n vazia
	            else {
	            	//end aponta para novo objeto
	                end->next = newNode;
	                end = newNode;
	            }
	            //incrementa tamanho da fila em 1
	            tamanhoFila++;
	        }

	    }

	  T desenfileirar() {
		  //verifica se fila ta vazia
	        if (tamanhoFila == 0) {
	            throw "fila vazia";
	        } else {
	        	//var item com valor de data
	            T item = start->data;
	            //ponteiro temp aponta pra inicio da fila
	            Node* temp = start;
	            //inicio aponta pra o prox elemento
	            start = start->next;
	            //deleta elemento apontado anteriormente por temp
	            delete temp;
	            //decrementa tamanho da fila
	            tamanhoFila--;

	            return item;
	        }
	    }

	    bool cheia() {
	        return tamanhoFila == capacidade;
	    }

	    bool vazia() {
	        return tamanhoFila == 0;
	    }

	    int tamanho() {
	        return tamanhoFila;
	    }

	    int cap() {
	        return capacidade;
	    }
	};




