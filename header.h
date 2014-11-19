#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <conio2.h>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;

int bekerekegykarakter();
void beolvas(vector<string> &menu);
string hozzafuzianyilat(int i, string seged);
void kiir(int merre, vector<string> menu);
void lepkedamenuben(int ch, int &i,vector<string> &menu);
int dekodol(string str);

#endif // HEADER_H_INCLUDED
