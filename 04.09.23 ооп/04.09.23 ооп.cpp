// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//дз 
//перечитати презентацію до 12го слайду
//написати 5 класів (5 полей, 5 методів) (котик то один клас) :
// 1 людина 
// 2 кімната
// 3 телефон мобільний
// 4 на вибір
// 5 на вибір

class Cat { //робимо котика
public:
	//властивості (поля класу,змінні классу)
	double tail_length = 0.5;//м
	int ears_count = 2;
	string fur_color = "white";
	string nick = "Snizhok";
	string eyes_color = "blue";

	//...

	//поведінка (методи класу, функції класу)
	void makeNoise() {
		cout << "MEOW!\n";
	}
	void walk() {
		cout << "Cat walks!\n";
	}
	void eat(string meal) {
		cout << "Cat eats " << meal << endl;
	}
};

class Human {
public:
	//властивості (поля класу,змінні классу)
	double height = 1.80;
	double weight = 72.3;
	string eyes_color = "brown";
	string name = "Megan";
	string last_name = "Smith";

	//поведінка (методи класу, функції класу)

	void speaking() {
		cout << name <<" "<< last_name <<" is talking!\n";
	}
	void eating(){
		cout << name << " " << last_name << " is eating!\n";
	}
	void dancing(){
		cout << name << " " << last_name << " is dancing!\n";
	}
		void washing(){
			cout << name << " " << last_name << " is in a shower!\n";
	}
		void resting() {
			cout << name << " " << last_name << " is resting!\n";
		}
};

class Room {
public:
	//властивості (поля класу,змінні классу)
	double width = 3.5;
	double height = 2.3;
	double lenghth = 4.6;
	string wall_color = "blue";
	int window_amount = 2;

	//поведінка (методи класу, функції класу)
	void roomPainting() {
		cout << "room is being painted!\n";
	}
	void roomUsing() {
		cout << "room is being used!\n";
	}
	void talking() {
		cout << "room is not talking!\n";
	}
	void roomCleaning() {
		cout << "room is being cleaned!\n";
	}
	void roomDecorating() {
		cout << "room is being decorated!";
	}
};

class MobilePhone {
public:
	//властивості (поля класу,змінні классу)
	string mobileModel = "Iphone";
	double mobileLenght = 10.5;
	double mobileWidth = 4.5;
	string mobileColor = "white";
	double mobilePrice = 20000;

	//поведінка (методи класу, функції класу)
	void ringing() {
		cout << "mobile is ringing\n";
	}
	void charge() {
		cout << "mobile is charging\n";
	}
	void music() {
		cout << "mobile is playing music\n";
	}
	void lags() {
		cout << "mobile is lagging\n";
	}
	void video() {
		cout << "mobile is playing a video\n";
	}
};

class Hat {
public:
	//властивості (поля класу,змінні классу)
	string color = "red";
	string size = "M";
	double lenght = 15.5;
	double height = 10.4;
	string material = "cotton";

	//поведінка (методи класу, функції класу)
	void protection() {
		cout << "hat is protecting from the sun\n";
	}
	void cold() {
		cout << "hat is protecting from cold\n";
	}
	void water() {
		cout << "hat is protecting from water\n";
	}
	void sew() {
		cout << "hat is being sewed\n";
	}
	void washing() {
		cout << "hat is being washed\n";
	}

};

class Kid {
public:
	//властивості (поля класу,змінні классу)
	string name = "Carl";
	string hairColor = "black";
	string eyesColor = "blue";
	double height = 1.45;
	int age = 10;

	//поведінка (методи класу, функції класу)
	void fun() {
		cout << name << " is having fun\n";
	}
	void game() {
		cout << name << " is playing a game\n";
	}
	void cry() {
		cout << name << " is crying\n";
	}
	void run() {
		cout << name << " is running\n";
	}
	void learn() {
		cout << name << " is learning\n";
	}
};



int main()
{

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
