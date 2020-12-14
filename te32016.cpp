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

					//visuel
					cout << "[";
					for (int val : t) {
							cout << val << ",";
					}
					cout << "]" << endl;
				}
				{
					cout << "question 2" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = N; i > 0; --i)
						t[i - 1] = ++t[N - i];

					//visuel
					cout << "[";
					for (int val : t) {
						cout << val << ",";
					}
					cout << "]" << endl;
				}
				{
					cout << "question 3" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					for (size_t i = 1; i < N; ++i)
						t[i] = t[i] + t[i - 1];

					//visuel
					cout << "[";
					for (int val : t) {
						cout << val << ",";
					}
					cout << "]" << endl;
				}
				{
					cout << "question 4" << endl;
					const size_t N = 5;
					int t[] = {1,3,5,7,9};
					int tbis[N] = {4,3,2,1,0};
					for (size_t i = 0; i < N; ++i)
						t[i] = t[tbis[i]];

					//visuel
					cout << "[";
					for (int val : t) {
						cout << val << ",";
					}
					cout << "]" << endl;
				}
				{
					cout << "question 5" << endl;
					const size_t N = 4;
					int m[2][N] = {1,3,5,7,9,11,13,15};
					int t[N];
					for (size_t i = 0; i < N; ++i)
						t[i] = m[0][i] + m[1][N - i - 1];

					//visuel
					cout << "[";
					for (int val : t) {
						cout << val << ",";
					}
					cout << "]" << endl;
				}
				{
					cout << "question 6" << endl;
					const size_t N = 3;
					int m[N][N] = {{1,2,3}, {4,5}, {6}};
					int s = 0;
					for (size_t i = 0; i < N; ++i)
						s += m[i][i] + m[i][N - i - 1];

					cout << s << endl;
				}
				{
					cout << "question 7" << endl;
					vector<int> v = {1,3,5,7,9};
					v.erase(v.begin() + 2, v.end() - 2);

					//réponse visuelle
					showVectorAnswer(v);
				}
				{
					cout << "question 8" << endl;
					vector<int> v = {1,3,5,7,9};
					vector<int> v2 = {2,4,6,8,10};
					v.insert(v.end(), v2.rbegin()+1, v2.rend()-1);

					//réponse visuelle
					showVectorAnswer(v);
				}
				{
					cout << "question 9" << endl;
					vector<int> v = {1,3,5,7,9};
					v.resize(v.size() + 1, v.front() + 1);
					v.push_back(v.back() - 1);
					showVectorAnswer(v);
				}
				{
					cout << "question 10" << endl;
					vector<int> v = {1,3,5,7,9};
					for (auto i = v.begin(); i < v.end(); ++i)
						*i = *(i + 1);
					v.pop_back();
					showVectorAnswer(v);
				}
			}
		}
	}
	cout << "--------------------------------" << endl;
}

void showVectorAnswer(vector<int> v){
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