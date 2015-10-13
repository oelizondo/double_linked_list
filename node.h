template <class T>
class node {
	public:
		node(T data);
		node(T data, node<T> *next, node<T> *prev);
		T getData();
		node<T>* getNext(); //se usa el * del apuntador cuando es un valor de retorno.
		node<T>* getPrev();
        void setData(T data);
        void setNext(node<T> *next);
        void setPrev(node<T> *prev);
	private:
		T data;
		node* next;
		node* prev;
};

template <typename T>
node<T>::node(T data){
	this->data = data;
	this->next = NULL;
	this->prev = prev;
}

template <typename T>
node<T>::node(T data, node<T> *next, node<T> *prev){
	this->data = data;
	this->next = next;
	this->prev = prev;
}

template <typename T>
T node<T>::getData() {
	return this-> data;
}

template <typename T>
void node<T>::setData(T data) {
	this->data = data;
}

template <typename T>
node<T>* node<T>::getNext() {
	return this->next;
}

template <typename T>
node<T>* node<T>::getPrev() {
	return this->prev;
}

template <typename T>
void node<T>::setNext(node<T> *next) {
	this->next = next;
}

template <typename T>
void node<T>::setPrev(node<T> *prev) {
	this->prev = prev;
}

