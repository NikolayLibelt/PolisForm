#pragma once
#include <iostream>
#include "Polis.h"
#include <cmath>
using namespace std;

class ArithmetikEx {
private:
	string str;
	polis a;
	Stack<float> st;
public:
	ArithmetikEx(string _str="") {
		str = _str;
		a = polis(str);
		st = Stack<float>(20);
	}
	ArithmetikEx(const ArithmetikEx& tmp) {
		str = tmp.str;
		a = tmp.a;
		st = tmp.st;
	}
	ArithmetikEx& operator=(ArithmetikEx tmp) {
		str = tmp.str;
		a = tmp.a;
		st = tmp.st;
		return *this;
	}
	~ArithmetikEx() {}
	float calculateEx() {
		float left;
		float right;
		int k;
		for (int i = 0; i < a.GetCount(); i++) {
			k = a.Getvariables().searchNumber(a[i]);
			if (k > -1) {
				st.push(a.Getvariables()[k].Getval());
			}
			else {
				right = st.pop();
				left = st.pop();
				if (a[i] == "+") {
					st.push(left + right);
				}
				if (a[i] == "-") {
					st.push(left - right);
				}
				if (a[i] == "*") {
					st.push(left * right);
				}
				if (a[i] == "/") {
					st.push(left / right);
				}
				if (a[i] == "^") {
					st.push(pow(left,right));
				}
			}
		}
		return st.pop();
	}
	void SetVar(string key, float k) {
		int n = a.Getvariables().searchNumber(key);
		if(n>-1){
			a.SetVar(n,k);
		}
	}
	void SetVar(int n, float k) {
		if (n > -1) {
			a.SetVar(n, k);
		}
	}
	Table GetTablevarials() {
		return a.Getvariables();
	}
	polis GetA() {
		return a;
	}
};