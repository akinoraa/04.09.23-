// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//дз 1
//перечитати презентацію до 12го слайду
//написати 5 класів (5 полей, 5 методів) (котик то один клас) :
// 1 людина 
// 2 кімната
// 3 телефон мобільний
// 4 на вибір
// 5 на вибір

struct DateTime {
	short day;
	int month;
	int year;
	int hours;
	int mins;
	int secs;
	string weekday = "Wednesday";
};

class Cat { //робимо котика
public:
	//властивості (поля класу,змінні классу)
	double tail_length = 0.5;//м
	int ears_count = 2;
	string fur_color = "white";
	string nick = "Snizhok";
	string eyes_color = "blue";
	int energyLevel;//1-100
	int nPows;
	int hungerLevel;//1-100
	bool muteness;

	//...

	//поведінка (методи класу, функції класу)
	void makeNoise() {
		if (muteness) {
			cout << "Cat can't make sound!\n";
			return;
		}
		cout << "MEOW!\n";
		energyLevel -= 10;
	}
	void walk() {
		if (nPows <= 2) {
			cout << "Cat doesn't have enough legs to walk!\n";
				return;
		}
		else if(energyLevel<20){
			cout << "Cat is tired!\n";
			return;
		}
			cout << "Cat walks!\n";
			energyLevel -= 20;
	}
	void eat() {
		if (hungerLevel > 80) {
			cout << "Cat is full!\n";
			return;
		}
		cout << "Cat eats " << endl;
		hungerLevel += 30;
	}
void printCat() {
	cout << "Cat changes: \n";
	cout << "Energy: " <<energyLevel << endl;
	cout << "Hunger: " <<hungerLevel << endl;
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
	int energy;
	bool soreThroat;
	int cleanliness;
	int mood;
	int hunger;// 0 - full; 100 - hungry;

	//поведінка (методи класу, функції класу)

	void speaking() {
		if (soreThroat) {
			cout << name << " has a sore throat! " << name << " can't speak!\n";
			return;
		}
		cout << name << " " << last_name << " is talking!\n";
		energy -= 10;
	}
	void eating() {
		if (hunger > 80) {
			cout << name <<" is full!\n";
			return;
		}
		cout << name << " " << last_name << " is eating!\n";
		hunger +=30;
	}
	void dancing() {
		if (energy < 30) {
			cout << name << " is tired!\n";
				return;
		}
		cout << name << " " << last_name << " is dancing!\n";
		energy -= 30;
		mood += 30;
		cleanliness -= 20;
	}
	void washing() {
		if (cleanliness>50) {
			cout << name << " is clean!\n";
      return;
		}
		cout << name << " " << last_name << " is in a shower!\n";
		cleanliness +=50;
		mood += 10;
	}
	void resting() {
		if (energy > 80) {
			cout << name << " is not tired!\n";
			return;
		}
		cout << name << " " << last_name << " is resting!\n";
		energy += 30;
		mood += 20;
	}
	void callSomeone() {
		if (mood < 30) {
			cout << name << " is in a bad mood! Doesn't want to call anybody!\n";
			return;
		}
		cout << "'Hi! " << name << " " << last_name << " is here!'\n";
		energy -= 10;
	}
	void work() {
		if (energy < 50) {
			cout << name << " can't work! Too tired!\n";
			return;
		}
		cout << name << " " << last_name << " is working here!\n";
		energy -= 40;
		mood -= 10;
		hunger -= 30;
	}

void printHuman() {
	cout << "Human changes: \n";
	cout <<"Energy: "<< energy << endl;
	cout <<"Hunger: " << hunger << endl;
	cout <<"Mood: " << mood << endl;
	cout <<"cleanliness: " << cleanliness << endl;
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
	bool wallPainted;
	int roomAiring;
	int roomCleanliness;
	bool roomDecor;
  int canTalk;

	//поведінка (методи класу, функції класу)
	void roomPainting(Human who) {
		if (wallPainted) {
			cout << "Room walls are already painted!\n";
			return;
		}
		cout << "room is being painted!\n";
		who.work();
		wallPainted = true;
		roomAiring -= 70;
	}
	void roomUsing(Human& who) {
		if (roomAiring <= 30) {
			cout << "Room can't be used! It needs to be aired!\n";
			return;
		}
		cout << "room is being used!\n";
		who.dancing();
		roomCleanliness -= 20;
		roomAiring -= 20;
	}
	void talking() {
		if (canTalk == 0) {
			cout << "room is not talking!\n";
			roomAiring -= 10;
			return;
		}
		cout << "It's magical room! It can talk!\n";
		roomAiring -= 10;
	}
	void roomCleaning() {
		if (roomCleanliness >60) {
			cout << "Room is clean!\n";
			return;
		}
		cout << "room is being cleaned!\n";
		roomCleanliness += 40;
		roomAiring += 20;
	}
	void roomDecorating() {
		if (roomDecor) {
			cout << "Room is already decorated!\n";
			return;
		}
		cout << "room is being decorated!";
		roomCleanliness -= 40;
	}

void printRoom() {
	cout << "Room changes: \n";
	cout << "Room airing: " << roomAiring << endl;
	cout << "roomCleanliness: " << roomCleanliness << endl;
	if (wallPainted) {
		cout << "walls are painted!\n";
	}
	else {
		cout << "walls are not painted!";
	}
	if (roomDecor) {
		cout << "Room is decored!\n";
	}
	else {
		cout << "Room is not decored!";
	}
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
	int chargeLevel;
	bool isNew;

	//поведінка (методи класу, функції класу)
	void ringing(Human& who) {
		if (chargeLevel == 0) {
			cout << "Phone is dead!\n";
			return;
		}
		cout << "mobile is ringing!:\n";
		who.callSomeone();
		chargeLevel -= 10;
	}
	void charge() {
		if (chargeLevel > 60) {
			cout << "Phone is charged!\n";
			return;
		}
		cout << "mobile is charging\n";
		chargeLevel += 40;
	}
	void music() {
		if (chargeLevel == 0) {
			cout << "Phone is dead!\n";
			return;
		}
		cout << "mobile is playing music\n";
		chargeLevel -= 30;
	}
	void lags() {
		if (isNew) {
			cout << "Mobile is okay!\n";
			return;
		}
		cout << "mobile is lagging\n";
		chargeLevel -= 10;
	}
	void video() {
		if (chargeLevel == 0) {
			cout << "Phone is dead!\n";
			return;
		}
		cout << "mobile is playing a video\n";
		chargeLevel -= 30;
	}

void printPhone() {
	cout << "Phone changes: \n";
	cout << "Phone charging lvl: " << chargeLevel << endl;
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
	int goodMood;
	int energyLvl;
	int haveHat;

	//поведінка (методи класу, функції класу)
	void fun() {
		if (energyLvl < 30) {
			cout << name << " is too tired to have fun!\n";
			return;
		}
		cout << name << " is having fun\n";
		goodMood += 30;
		energyLvl -= 30;
	}
	void game(Cat who) {
		if (energyLvl < 30) {
			cout << name << " is too tired to play!\n";
			return;
		}
		cout << name << " is playing with a cat!\n";
		who.makeNoise();
		goodMood += 40;
		energyLvl -= 20;
	}
	void cry() {
		if (goodMood > 30) {
			cout << name << " is okay!\n";
			return;
		}
		cout << name << " is crying\n";
		goodMood -= 10;
		energyLvl -= 30;
	}
	void run() {
		if (energyLvl < 30) {
			cout << name << " is too tired to run!\n";
			return;
		}
		cout << name << " is running\n";
		goodMood += 10;
		energyLvl -= 40;
	}
	void learn() {
		if (energyLvl < 30) {
			cout << name << " is too tired to learn!\n";
			return;
		}
		cout << name << " is learning\n";
		goodMood -= 10;
		energyLvl -= 30;
	}
	void wear() {
		if (!haveHat) {
			cout << name << " doesn't have a hat to wear!\n";
			return;
		}
		cout << "'I'm wearing a hat to be protected!'\n";
		goodMood += 10;
	}

void printKid() {
	cout << "Kid changes: \n";
	cout << "good mood lvl: " << goodMood << endl;
	cout << "Energy level: " << energyLvl << endl;
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
	bool winterHat;
	bool summerHat;
	bool waterHat;
	int dirtness;
	bool sewed;

	//поведінка (методи класу, функції класу)
	void protection(Kid& who) {
		if (!summerHat) {
			cout << "This hat cant protect from the sun!\n";
			return;
		}
		cout << "hat is protecting from the sun\n";
		who.wear();
		dirtness -= 10;
	}
	void cold() {
		if (!winterHat) {
			cout << "This hat cant protect from coldness!\n";
			return;
		}
		cout << "hat is protecting from cold\n";
		dirtness -= 10;
	}
	void water() {
		if (!waterHat) {
			cout << "This hat cant protect from water!\n";
			return;
		}
		cout << "hat is protecting from water\n";
		dirtness -= 10;
	}
	void sew() {
		if (sewed) {
			cout << "Hat has already been sewed!\n";
			return;
		}
		cout << "hat is being sewed\n";
		sewed =true;
	}
	void washing() {
		if (dirtness > 50) {
			cout << "Hat is clean!\n";
			return;
		}
		cout << "hat is being washed\n";
		dirtness += 50;
	}

void printHat() {
	cout << "Hat changes: \n";
	cout << "Hat dirtness: " << dirtness << endl;
}
};


int main()
{
	Human h, h1, h2, human;
	MobilePhone ph;
	Hat hat;
	Kid k;
	Room r;
	Cat c;

	h1.name = "Max";
	h2.name = "Mark";

	// cout << "1) ";
	// ph.ringing(h);

	// cout << "\n2) ";
	// hat.protection(k);

	// cout << "\n3) ";
	// r.roomUsing(h1);

	// cout << "\n4) ";
	// k.game(c);

	// cout << "\n5) ";
	// r.roomPainting(h);

	//homework 12.09

	c.energyLevel = 100;
	c.nPows = 4;
	c.hungerLevel = 100;
	c.muteness = false;

  c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
	c.printCat();

	c.energyLevel = 10;
	c.nPows = 1;
	c.hungerLevel = 10;
	c.muteness = true;

  c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
  c.printCat();

	human.energy = 100;
	human.soreThroat = false;
	human.cleanliness = 10;
	human.mood = 100;
	human.hunger = 100;

  human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
  human.work();
	human.printHuman();

	human.energy = 10;
	human.soreThroat = true;
	human.cleanliness = 100;
	human.mood = 10;
	human.hunger = 10;

  human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

	r.wallPainted = false;
	r.roomAiring = 100;
	r.roomCleanliness = 10;
	r.roomDecor = false;
	r.canTalk = 0;

  r.printRoom();
	r.roomPainting(h1);
	r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	r.wallPainted = true;
	r.roomAiring = 10;
	r.roomCleanliness = 100;
	r.roomDecor = true;
	r.canTalk = 1;

  r.printRoom();
	r.roomPainting(h1);
	r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	ph.chargeLevel = 100;
	ph.isNew = false;

  ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	ph.chargeLevel = 10;
	ph.isNew = true;

  ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	k.goodMood = 100;
	k.energyLvl = 100;

  k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

	k.goodMood = 10;
	k.energyLvl = 10;

  k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

	hat.winterHat = true;
	hat.summerHat = true;
	hat.waterHat = true;
	hat.sewed = false;
	hat.dirtness = 100;

  hat.printHat();
	hat.protection(k);
	hat.cold();
	hat.water();
	hat.sew();
	hat.washing();
	hat.printHat();

	hat.winterHat = false;
	hat.summerHat = false;
	hat.waterHat = false;
	hat.sewed = true;
	hat.dirtness = 10;

  hat.printHat();
	hat.protection(k);
	hat.cold();
	hat.water();
	hat.sew();
	hat.washing();
	hat.printHat();


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
