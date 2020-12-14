//
// Created by Nicolas Henry on 14.12.20.
//
#include <iostream>
#include <vector>
#include "te32016.h"

using namespace std;

void te32016() {
	{
		//TE 3
		cout << "TE : 3" << endl;
		{
			{
				//Ex 1
				cout << "Exercice : 1" << endl;
				{
					cout << "question : 1" << endl;
					//int t[][4];
					cout << 	"Definition of variable with array type needs an "
								 "explicit size or an initializer" << endl;
				}
				{
					cout << "question : 2" << endl;
					int t[][4] = {};
					cout << 	"Accepté" << endl;
				}
				{
					cout << "question : 3" << endl;
					int t[][4] = {1,2,3,4,5};
					cout << 	"Accepté" << endl;
				}
				{
					cout << "question : 4" << endl;
					//int t[1][] = {1,2,3,4,5};
					cout << 	"Array has incomplete element type 'int []'" << endl;
				}
				{
					cout << "question : 5" << endl;
					//int t[1][4] = {1,2,3,4,5};
					cout << 	"Excess elements in array initializer" << endl;
				}
				{
					cout << "question : 6" << endl;
					int t[2][3];
					//t = {{1,2,3}, {4,5}};
					cout << 	"Array type 'int [2][3]' is not assignable" << endl;
				}
				{
					cout << "question : 7" << endl;
					vector<char> v;
					v = {'A', 'B', 'C'};
					cout << 	"Accepté" << endl;
				}
				{
					cout << "question : 8" << endl;
					vector<char> v(3, 'A');
					cout << 	"Accepté" << endl;
				}
				{
					cout << "question : 9" << endl;
					char t[] = {'A', 'B', 'C'};
					//vector<char> v(t.begin(), t.end());
					cout << 	"Member reference base type 'char [3]' is not a structure or union" << endl;
				}
				{
					cout << "question : 10" << endl;
					//vector<char> v(3) = {'A', 'B', 'C'};
					cout << 	"Expected ';' at end of declaration" << endl;
				}
				{
					cout << "question : 11" << endl;
					using V = vector<char>;
					char t[4] = {'A', 'B', 'C', 'D'};
					vector<V> v(3, V(t + 1, t + 3));
					cout << 	"Accepté" << endl;
				}
				{
					cout << "question : 12" << endl;
					vector<char> v();
					//v.resize(5);
					cout << 	"Il faut définir une taille au vector de base" << endl;
				}
			}
			{
				//Ex 2
				cout << "Exercice 2" << endl;
				{
					cout << "question 1" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 2" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 3" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 4" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 5" << endl;
					const size_t N = 4;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 6" << endl;
					const size_t N = 3;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 7" << endl;
					vector<int> v = {1,3,5,7,9};
					v.erase(v.begin() + 2, v.end() - 2);

					//réponse visuelle
					cout << "[";
					for (auto i = v.begin (); i != v.end (); ++i) {
						if (*i == v.back()) {
							cout << *i;
						} else {
							cout << *i << ",";
						}
					}
					cout << "]" << endl;
				}
				{
					cout << "question 8" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 9" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
				{
					cout << "question 10" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[N - i - 1] -1;
				}
			}
		}
	}
	cout << "--------------------------------" << endl;
}