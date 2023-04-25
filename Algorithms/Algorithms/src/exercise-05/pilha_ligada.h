
#include <iostream>
#include <stdexcept>

template <class T>
class Pilha{

private:
	//nó
	struct Node{
		T item;
		Node*prox;
	};
	int capacidade;
	Node*topoDaPilha;

public:
	Pilha(int capacidade){
		this->capacidade = capacidade;
		//ponteiro nulo
		topoDaPilha=nullptr;
	}
	~Pilha() {
	        while (topoDaPilha != nullptr) {
	        	//temp aponta para topo da pilha
	            Node* temp = topoDaPilha;
	            //muda direção de topoDaPilha
	            topoDaPilha = topoDaPilha->prox;
	            //deleta o ponteiro com a posição do topo;
	            delete temp;
	        }
	}

	 void empilha(T item) {
	        if (tamanho() >= capacidade) {
	            throw "Estouro da pilha!" ;
	        }
	        Node* novoNode = new Node;
	        novoNode->item = item;
	        novoNode->prox = topoDaPilha;
	        topoDaPilha = novoNode;
	    }

	    T desempilha() {
	        if (topoDaPilha == nullptr) {
	            throw  "Pilha vazia!";
	        }
	        Node* temp = topoDaPilha;
	        topoDaPilha = topoDaPilha->prox;
	        T valor = temp->item;
	        delete temp;
	        return valor;
	    }

	    int tamanho() {
	        int count = 0;
	        Node* temp = topoDaPilha;
	        while (temp != nullptr) {
	            count++;
	            temp = temp->prox;
	        }
	        return count;
	    }
	};


