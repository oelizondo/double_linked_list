template <class T>
class dqueue {
	public:
		dqueue();
		void pushLeft(T data);
		void popLeft();
		T left();
		void pushRight(T data);
		void popRight();
		T right();
		bool isEmpty();
	private:
		node<T> *right;
		node<T> *left;
		int iC;
};

template <typename T>
dqueue<T>::dqueue() {
	right = NULL;
	left = NULL;
	iC = 0; 
}

template <typename T>
void dqueue<T>::pushLeft( T data ) {
	node<T> *temp = head;

	if (head == NULL && head == NULL) {
		left = new node<T>(data, NULL, NULL);
		right = left;
	}
	else {
		temp = new node<T>(data, left, NULL);
		left -> setPrev(aux);
		left = temp;
	}
	iC++;
}

template <typename T>
T dqueue<T>::popLeft() {
	node<T> *temp = left;

	if (left != NULL) {
		left -> getNext() -> setPrev(NULL);
		left = left -> getNext();
	}
	iC--;
}

template <typename T>
T dqueue<T>::left() {

	if (left != NULL) {
		node<T> *temp = left;
		temp = temp -> getPrev();
		data = temp -> getDato();
		delete temp;
		return data;
	}
	else {
		return left -> getDato();
	}
}

template <typename T>
void dqueue<T>::pushRight( T data ) {
	node<T> *temp = head;

	if (right == NULL && left == NULL) {
		right = new node<T>(data, NULL, NULL);
		left = right;
	}
	else {
		temp = new node<T>(data, right, NULL);
		right -> setPrev(temp);
		right = temp;
	}
	iC++;
}

template <typename T>
void dqueue<T>::popRight() {
	node<T> *temp = right;
	if ( right != NULL) {
		temp = temp -> getNext() -> setNext(NULL);
		right = right -> getNext();
	}
	iC--;
}

template <typename T>
T dqueue<T>::right() {

	if (right != NULL) {
		node<T> *temp = right;
		temp = temp -> getNext();
		data = temp -> getDato();
		delete temp;
		return data;
	}
	else {
		return left -> getDato();
	}
}

template <typename T>
bool qeueue<T>::isEmpty() {
	return (left == NULL && right == NULL);
}