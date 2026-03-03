// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <string>
using namespace std;



int main()
{
	system("chcp 65001");
	// isso muda o código de página do console para UTF-8, permitindo a exibição correta de caracteres acentuados e símbolos especiais.
	cout << "Estrutura de Dados - Fatec (2025/1)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";


	cout << "Atividade 1\n";
	cout << "===============\n";
	cout << endl << endl;
	int x = 0;
	cout << "int max = " << INT_MAX << "\n";
	cout << "int min = " << INT_MIN << "\n";
	cout << "short max = " << SHRT_MAX << "\n";
	x = INT_MAX + 1;
	cout << "x = " << x;
	//ao fazer um INT_MAX + 1, ocorre um estouro de valor (overflow) e o resultado é um valor negativo, pois o tipo int não tem capacidade para armazenar o valor resultante da soma.

	cout << "Atividade 2\n";
	cout << "===============\n";
	double C ;
	double Fahrenheit;
	double Kelvin;
	cout << "Digite a temperatura em Celsius: ";
	cin >> C;
	Fahrenheit = (C * 1.8) + 32;
	Kelvin = C + 273.15;
	cout << "Temperatura em Celsius: " << C << "°C\n";
	cout << "Temperatura em Fahrenheit: " << Fahrenheit << "°F\n";
	cout << "Temperatura em Kelvin: " << Kelvin << "K\n";

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	segundos = minutos * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;
	cout << "Sua idade em segundos e: " << segundos << endl;

	


	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows


}

