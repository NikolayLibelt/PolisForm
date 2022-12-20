#pragma once
#include <iostream>
#include <string>
using namespace std;

//����� Record ��������� ��������� �������� ������ "�������� "������" - � ��������".

class Record {
private:
	string name;
	float val;
public:
	Record(string _name = "", float _val = 0.0) {
		name = _name;
		val = _val;
	}
	string Getname() {
		return name;
	}
	float Getval() {
		return val;
	}
	void SetVal(float _val) {
		val = _val;
	}
};