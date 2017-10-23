// Tutorial1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void Question1() {
	int a;
	cout << "Age: ";
	cin >> a;
	if (a < 18) {
		cout << "Too young";
	}
	else if (a > 30) {
		cout << "Too old";
	}
	else {
		cout << "Correct age";
	}
	cin >> a;
	

}
void Question2() {
	string name,bar;
	cout << "Name: ";
	cin >> name;
	cout << "\n" <<"Hi "<< name <<"\n"<<"===";
	for (int x = 0; x != name.size(); x++) {
		cout << "=";



	}
	cin >> bar;

}

void Question3() {
	srand(time(nullptr));
	int n = 100;
	int guesses = 0;
	int secret = rand() % n + 1;
		cout << "Guess a number between 1 and " << n << ": ";
	int guess;
	cin >> guess;
	while (guess != secret) {
		guesses++;
		cout << "Wrong! Guess again: ";
		if (guess > secret) {
			cout << "\n" << "Guess lower"<<"\n";
		}
		else {
			cout << "\n" << "Guess higher"<< "\n";
		}
		cin >> guess;
	}
	cout << "Correct in " << guesses<<" guesses!\n";
	cin >> guess;
}

int main()
{
	//Question1();
	//Question2();
	Question3();
	return 0;
}



