#include <iostream>
#include <sstream>

using namespace std;

class Pareja {
private:
	int a,b;
public:

	Pareja();
	Pareja(int, int);
	Pareja(const Pareja&);//contructor copia//toma un objeto y crea uno nuevo igual al primero
	virtual ~Pareja();
	string toString()const;

	Pareja& operator + (const Pareja& pareja2);//suma
	Pareja& operator - (const Pareja& pareja2);//resta 
	Pareja& operator * (const Pareja& pareja2);//multi
	Pareja& operator / (const Pareja& pareja2);//divi
	Pareja& operator = (const Pareja& pareja2);//asigna
	bool operator ==(const Pareja& pareja2);//compara


	//sobrecarga de operadores miembro
	friend ostream& operator << (ostream&, const Pareja& pareja2);
	friend istream& operator >> (istream&, Pareja& pareja2);
};



int main() {
	cout << "";
	Pareja pareja1(5,6);
	

	cout<<pareja1.toString();

	cout << "clonando a la 1 en la 2" << endl;
	Pareja pareja2(pareja1);
	cout<<pareja2.toString();
	system("pause");
	return 0;

}

Pareja::Pareja()
{
	a = 0;
	b = 0;
}

Pareja::Pareja(int a_, int b_)
{
	this->a = a_;
	this->b = b_;
}

Pareja::Pareja(const Pareja& pareja)
{
	this->a = pareja.a;
	this->b = pareja.b;
}

Pareja::~Pareja()
{
}

string Pareja::toString() const
{
	stringstream s;
	
	s << "Pareja= (" << a << "," << b << ")" << endl;
		
	return s.str();
}





