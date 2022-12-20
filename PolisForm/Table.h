#include "Record.h"
#include <iostream>
using namespace std;
#pragma once

class Table {
private:
	int count, size;
	Record* mem;
public:
	int searchNumber(string key) {
		int l = -1;
		int i = 0;
		while ((l == -1) && (i < count)) {
			if (key == mem[i].Getname()) {
				l = i;
			}
			i++;
		}
		return l;
	}
	Table(int _size = 0) {
		size = _size;
		count = 0;
		mem = new Record[size];
		for (int i = 0; i < size; i++) {
			mem[i] = Record("",0);
		}
	}
	~Table(){
		delete[] mem;
	}
	Table(const Table& tmp) {
		size = tmp.size;
		count = tmp.count;
		mem = new Record[size];
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
	}
	Table & operator=(Table tmp) {
		if (size != tmp.size) {
			if (size != 0) {
				delete[]mem;
			}
			size = tmp.size;
			mem = new Record[size];

		}
		count = tmp.count;
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	float searchInfo(string key) {
		int l = -1;
		int i = 0;
		while ((l == -1) && (i <= count)) {
			if (key == mem[i].Getname()) {
				l = i;
			}
			i++;
		}
		if (l > -1) {
			return mem[l].Getval();
		}
		return -1;
	}
	void add(Record tmp) {
		int l = searchNumber(tmp.Getname());
		if (l > -1) {
			mem[l] = tmp;
		}
		else {
			mem[count++] = tmp;
		}
	}
	void add(string name, float value) {
		add(Record(name, value));
	}
	void Del(string key) {
		int l = searchNumber(key);
		if (l > -1) {
			mem[l] = mem[--count];
		}
	}
	int is_empty() {
		if (count == 0) {
			return 1; //True
		}
		return 0; //False
	}
	int is_full() {
		if (count == size) {
			return 1; //True
		}
		return 0; //False
	}
	int GetCount() {
		return count;
	}
	Record operator[](int k) {
		Record res;
		if ((k <= count)&&(k>-1)) {
			return  mem[k];
		}
		return res;
	}
	void SetVar(int n, float k) {
		mem[n].SetVal(k);
	}
};