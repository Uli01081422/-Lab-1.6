#include "Complex.h"
#include <iostream>
#include <string>
#include <sstream>


void Complex::Pair::Init(int X, int Y)
{
	SetFirst(X);
	SetSecond(Y);

}

void Complex::Pair::Display(Pair& k1, Pair& k2)
{
	cout << endl;
	cout << " a = " << k1.first << endl;
	cout << " b = " << k2.first << endl;
	cout << " c = " << k1.second << endl;
	cout << " d = " << k2.second << endl << endl;

	cout << endl << " (a,b) + (c,d) = (a + c , b + d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") + (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " + " << k1.second << " , " << k2.first << " + " << k2.second << ")" << endl << endl;
	cout << "( " << ToString(Suma1(k1.first, k1.second)) << " , " << ToString(Suma2(k2)) << " )" << endl;

	cout << endl << " (a,b) * (c,d) = (a * c , b * d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") * (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " * " << k1.second << " , " << k2.first << " * " << k2.second << ")" << endl << endl;
	cout << "( " << ToString(Multiply1(k1, k2)) << " , " << ToString(Multiply2(k1, k2)) << " )" << endl << endl;


}

void Complex::Pair::Read(Pair& k1, Pair& k2)
{
	cout << " a = ? "; cin >> k1.first;
	cout << " b = ? "; cin >> k2.first;
	Init(k1.first, k2.first);

	cout << " c = ? "; cin >> k1.second;
	cout << " d = ? "; cin >> k2.second;
	Init(k1.second, k2.second);


}

string Complex::Pair::ToString(int value) const
{
	stringstream sstr;
	sstr << value;
	return sstr.str();

}

int Complex::Pair::Suma1(int a, int b)
{
	return a + b;
}

int Complex::Pair::Suma2(Pair& k2)
{
	return k2.first + k2.second;
}

int Complex::Pair::Multiply1(Pair& k1, Pair& k2)
{
	return k1.GetA() * k1.GetB();
}

int Complex::Pair::Multiply2(Pair& k1, Pair& k2)
{
	return k2.GetA() * k2.GetB();
}


void Complex::Read(Pair& k1, Pair& k2)
{
	Pair l;
	l.Read(k1, k2);
	Init(l);

}

void Complex::Display(Pair& k1, Pair& k2)
{
	cout << " (a,b) * (c,d) = (a c * b d , a d + b c)" << "= ";
	cout << "( " << pair.ToString(Multiply1(k1, k2)) << " , " << pair.ToString(Multiply2(k1, k2)) << " )" << endl;

	cout << " (a,b) - (c,d) = (a - c, b - d)" << "=";
	cout << "( " << Diff1(k1) << " , " << Diff2(k2) << " )" << endl;


}



void Complex::Init(Pair pair)
{
	SetPair(pair);
}

int Complex::Diff1(Pair& k1)
{
	return k1.GetA() - k1.GetB();
}

int Complex::Diff2(Pair& k2)
{
	return k2.GetA() - k2.GetB();
}

int Complex::Multiply1(Pair& k1, Pair& k2)
{
	return k1.GetA() + k1.GetB() * k2.GetA() + k2.GetB();
}

int Complex::Multiply2(Pair& k1, Pair& k2)
{
	return k1.GetA() + k2.GetB() + k2.GetA() + k1.GetB();
}
