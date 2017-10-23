// Tutorial2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <deque>
using namespace std;


void Question2() {
	deque<int> scores;
	int x;
	double a = 0;
	cout << "Enter a series of numbers \n";
	while (cin >> x) {
		scores.push_back(x);
	}
	deque <int> sortedScores = scores;
	sort(sortedScores.begin(), sortedScores.end());
	sortedScores.pop_back();
	sortedScores.pop_front();
	for each(int i in sortedScores) {
		a = a + i;

	}
	cout << "Yo average gibt : " << a/sortedScores.size();
}

void Question3() {
	deque<string> list;
	cout << "Enter text : ";
	string x;
	while (cin >> x) {
		list.push_back(x);

	}
	cout << "Your string has a length of :" << list.size() << " \n";
}

void Question4() {
	deque<string> list;
	cout << "Enter text : ";
	string x,y;
	y = "";
	while (cin >> x) {
		if (x.size() > y.size()) {
			y = x;
		}
	}
	cout << "the longest word is :" << y <<"\n";
}

void Question5() {
	deque<string> list;
	cout << "Enter text : ";
	string x;
	while (cin >> x) {
		list.push_front(x);
		
	}
	int y = 0;
	int g = list.size();
	while (g != y) {
		cout << list.front()<<"\n";
		list.pop_front();
		++y;
	}
	
}
void Question6() {
	int maximum = 0;
	int minimum = 0;
	int current = 0;
	int x = 0;
	int sum = -1;
	cout << "Enter the scores :";
	while (cin >> x) {
		current = current + x;
		++sum;
		if (x > maximum) {
			maximum = x;
		}
		else if (x <minimum) {
			minimum = x;
			
		}

	}
	cout << " The average is : " << (current-(maximum+minimum)) / sum << "\n"; 


}

int main()
{
	Question6();
	//Question3();
	//Question2();
	return 0;
}

