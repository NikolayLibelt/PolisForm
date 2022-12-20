#pragma once

// Класс Stack организовывает структуру данных стек на шаблоне

template <typename T>
class Stack {
private:
	T* mem;
	int size, last;
public:
	Stack(int _size = 10) {
		size = _size;
		last = 0;
		mem = new T[size];
		for (int i = 0; i < size; i++) {
			mem[i] = T();
		}

	}
	Stack(const Stack&tmp) {
		size = tmp.size;
		last = tmp.last;
		mem = new T[size];
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
	}
	~Stack() {
		delete[]mem;
	}
	Stack& operator =(Stack<T> tmp) {
		if (size != tmp.size) {
			if (size != 0) {
				delete[]mem;
			}
			size = tmp.size;
			mem = new T[size];

		}
		last = tmp.last;
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	void push(T val) {
		if (last < size) {
			mem[last++] = val;
		}
	}
	T top() {
		if (last > 0) {
			return mem[last-1];
		}
		else {
			T res(0);
			return res;
		}
	}
	T pop() {
		if (last > 0) {
			return mem[--last];
		}
		else {
			T res(0);
			return res;
		}
	}
	int is_full() {
		if (last == size) {
			return 1; // полный
		}
		else{
			return 0; // не полный
		}
	}
	int is_empty() {
		if (last == 0) {
			return 1; //пусто
		}
		else {
			return 0; //не пусто
		}
	}
	int Getlast() {
		return last;
	}
};