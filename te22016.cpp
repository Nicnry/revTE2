//
// Created by Nicolas Henry on 14.12.20.
//
#include <iostream>
#include "te22016.h"

using namespace std;

int q4215a, q4215b = 2;

int q3215f(int a, int b);
int& q3215g(int a, int& b);
void q3215h(int& a, int& b);
void q4215f(int i, int& j);
void q5215f(char c){cout << "fonction 1" << endl;}
void q5215f(short s){cout << "fonction 2" << endl;}
void q5215f(int& n){cout << "fonction 3" << endl;}
void q5215f(long l){cout << "fonction 4" << endl;}
void q5215f(double d){cout << "fonction 5" << endl;}
void q5215f(short s1, short s2){cout << "fonction 6" << endl;}
void q5215f(float& x, int n){cout << "fonction 7" << endl;}
void q5215f(const float& x, int n){cout << "fonction 8" << endl;}

void te22016() {
	cout << "TE : 2016-2017" << endl;
	{
		//TE 2
		cout << "TE : 2" << endl;
		{
			{
				//Ex 1
				cout << "Exercice : 1" << endl;
				{
					cout << "question : 1" << endl;
					int i = 1;
					do {
						cout << ++i << " ";
					} while(i++ < 6);
					cout << endl;
				}
				{
					cout << "question : 2" << endl;
					int i = 2;
					//for(; i <= 5; i *=2) {
					//	cout << i-- << " ";
					//}
					cout << "2 2 2 2 2 2 (infini)";
					cout << endl;
				}
				{
					cout << "question : 3" << endl;
					for (int i = 5; i > 1; --i) {
						int j = 1;
						while (j++ % i) {
							cout << "*";
						}
						cout << endl;
					}
					cout << endl;
				}
			}
			{
				//Ex 3
				cout << "Exercice : 3" << endl;
				{
					int a = 3, b = 9;
					int c = q3215f(a, q3215f(a, q3215f(a,b)));
					cout << "c = " << c << endl;
				}
				{
					int a = 3, b = 7;
					a = q3215g(a, b)++;
					cout << "a = " << a << " b = " << b << endl;
				}
				{
					int a = 10, b = 2;
					q3215h(a, b);
					cout << "a = " << a << " b = " << b << endl;
				}
				cout << endl;
			}
			{
				//Ex 4
				cout << "Exercice : 4" << endl;
				{
					int q4215a = 3;
					int& q4215b = q4215a;
					q4215f(q4215a++, q4215b);
					q4215f(q4215a--, q4215b);
					cout << "a = " << q4215a << " b = " << q4215b << endl;
				}
				cout << endl;
			}
			{
				//Ex 5
				cout << "Exercice : 5" << endl;
				{
					bool b = true;
					char c = 'A';
					short s = 1;
					int n = 1;
					float x = 1.f;
					q5215f(c++);
					//q5215f(s + 1);
					cout << "ambigu" << endl;
					q5215f(x);
					q5215f(x, n);
					//q5215f(x + 1, s);
					cout << "ambigu" << endl;
					q5215f(b, c);
				}
				cout << endl;
			}
		}
	}
	cout << "--------------------------------" << endl;
}

int q3215f(int a, int b){
	return a + b / 2;
}
int& q3215g(int a, int& b){
	b = ++a;
	return b;
}
void q3215h(int& a, int& b){
	a = a / b;
	b = b - a;
	a = b + a;
}

void q4215f(int i, int& j) {
	static int k = 2 * q4215b + 1;
	cout << "i = " << i << " j = " << j << " k = " << k++ << endl;
	j *= q4215a + q4215b;
}