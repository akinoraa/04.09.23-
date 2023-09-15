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
		else if (energyLevel < 20) {
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
		cout << "Energy: " << energyLevel << endl;
		cout << "Hunger: " << hungerLevel << endl;
	}
};

class Human {
private:
	//властивості (поля класу,змінні классу)
	double height;
	string eyes_color;
	string name;
	string last_name;
	int energy;
	bool soreThroat;
	int cleanliness;
	int mood;
	int hunger;// 0 - full; 100 - hungry;

public:
	void SetHeight(double a) {
		if (a < 0 || a>300) {
			cout << "Wrong input!\n";
		}
		else {
			height = a;
		}
	}

	double GetHeight() const {
		return height;
	}

	void SetEyes_color(string a) {
		eyes_color = a;
	}

	string GetEyes_color() const {
		return eyes_color;
	}

	void SetName(string a) {
		name = a;
	}

	string GetName() const {
		return name;
	}

	void SetLastName(string a) {
		last_name = a;
	}

	string GetLastName() const {
		return last_name;
	}

	void SetEnergy(int a) {
		if (a < 0 || a>100) {
			cout << "Wrong input!\n";
		}
		else {
			energy = a;
		}
	}

	int GetEnergy() const {
		return energy;
	}

	void SetSoreThroat(bool a) {
		soreThroat = a;
	}

	bool GetSoreThroat() const {
		return soreThroat;
	}

	void SetCleanliness(int a) {
		if (a < 0 || a>100) {
			cout << "Wrong input!\n";
		}
		else {
			cleanliness = a;
		}
	}

	int GetCleanliness() const {
		return cleanliness;
	}

	void SetMood(int a) {
		if (a < 0 || a>100) {
			cout << "Wrong input!\n";
		}
		else {
			mood = a;
		}
	}

	int GetMood() const {
		return mood;
	}

	void SetHunger(int a) {
		if (a < 0 || a>100) {
			cout << "Wrong input!\n";
		}
		else {
			hunger = a;
		}
	}

	int SetHunger() const {
		return hunger;
	}
	

	//поведінка (методи класу, функції класу)

public:
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
			cout << name << " is full!\n";
			return;
		}
		cout << name << " " << last_name << " is eating!\n";
		hunger += 30;
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
		if (cleanliness > 50) {
			cout << name << " is clean!\n";
			return;
		}
		cout << name << " " << last_name << " is in a shower!\n";
		cleanliness += 50;
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
		cout << "Energy: " << energy << endl;
		cout << "Hunger: " << hunger << endl;
		cout << "Mood: " << mood << endl;
		cout << "cleanliness: " << cleanliness << endl;
	}
};

class Room {
private:
	//властивості (поля класу,змінні классу)
	double width;
	double height;
	double lenghth;
	string wall_color;
	int window_amount;
	bool wallPainted;
	int roomAiring;
	int roomCleanliness;
	bool roomDecor;
	bool canTalk;

public:
 void setWidth(double a){
   if(a>0)
   width=a;
   else
    cout<<"Wrong input!";
 }

double getWidth() const {
  return width;
}
void setHeight(double a) {
  if(a>0)
    height=a;
  else
    cout<<"Wrong input!";
}
double getHeight() const {
  return lenghth;
}
void setLength(double a) {
  if(a>0)
    lenghth=a;
  else
    cout<<"Wrong input!";
}

double getLength() const {
  return lenghth;
}

void setWallColor(string a) {
  wall_color=a;
}

string getWallColor()const {
  return wall_color;
}

void setWindow_amount(int a) {
  if(a>0)
    window_amount=a;
  else
    cout<<"Wrong input!";
}

int getWindow_amount() const {
  return window_amount;
}

void setWallPainted (bool a) {
		wallPainted = a;
	}

	bool getWallPainted() const {
		return wallPainted;
	}

void setRoomAiring(int a) {
  if(a>=0||a<=100)
    roomAiring=a;
  else
    cout<<"Wrong input!";
}

int getRoomAiring() const {
  return roomAiring;
}

void setRoomClean(int a) {
  if(a>=0||a<=100)
    roomCleanliness=a;
  else
    cout<<"Wrong input!";
}

int getRoomClean() const {
  return roomCleanliness;
}

void setRoomDecor (bool a) {
		roomDecor = a;
	}

	bool getRoomDecor() const {
		return roomDecor;
	}

void setCanTalk (bool a) {
		canTalk = a;
	}

	bool getCanTalk() const {
		return canTalk;
	}

	//поведінка (методи класу, функції класу)
public:
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
		if (roomCleanliness > 60) {
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
private:
	//властивості (поля класу,змінні классу)
	string mobileModel;
	double mobileLenght;
	double mobileWidth;
	string mobileColor;
	double mobilePrice;
	int chargeLevel;
	bool isNew;

public:
void setMobileModel(string a) {
  mobileModel=a;
}

string getMobileModel()const {
  return mobileModel;
}

void setMobileLenght(double a) {
  if(a>0)
    mobileLenght=a;
  else
    cout<<"Wrong input!";
}

double getMobileLenght() const {
  return mobileLenght;
}
void setMobileWidth(double a) {
  if(a>0)
    mobileWidth=a;
  else
    cout<<"Wrong input!";
}

double getMobileWidth() const {
  return mobileWidth;
}

void setMobileColor(string a) {
  mobileColor=a;
}

string getMobileColor()const {
  return mobileColor;
}

void setMobilePrice(double a) {
  if(a>0)
    mobilePrice=a;
  else
    cout<<"Wrong input!";
}

double getMobilePrice() const {
  return mobilePrice;
}

void setChargeLevel(int a) {
  if(a>=0||a<=100)
    chargeLevel=a;
  else
    cout<<"Wrong input!";
}

int getChargeLevel() const {
  return chargeLevel;
}

void setIsNew (bool a) {
		isNew = a;
	}

	bool getIsNew() const {
		return isNew;
	}

	//поведінка (методи класу, функції класу)
public:
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
private:
	//властивості (поля класу,змінні классу)
	string name;
	string hairColor;
	string eyesColor;
	int age;
	int goodMood;
	int energyLvl;
	int haveHat;

public:
void setName(string a) {
  name=a;
}

string getName()const {
  return name;
}
void setHairColor(string a) {
  hairColor=a;
}

string getHairColor()const {
  return hairColor;
}
void setEyesColor(string a) {
  eyesColor=a;
}
string getEyesColor()const {
  return eyesColor;
}
void setAge(int a) {
  if(a>=0||a<=100)
    age=a;
  else
    cout<<"Wrong input!";
}

int getAge() const {
  return age;
}
void setGoodMood(int a) {
  if(a>=0||a<=100)
    goodMood=a;
  else
    cout<<"Wrong input!";
}

int getChargeLevel() const {
  return goodMood;
}
void setEnergyLvl(int a) {
  if(a>=0||a<=100)
    energyLvl=a;
  else
    cout<<"Wrong input!";
}

int getEnergyLvl() const {
  return energyLvl;
}
void setHaveHat(int a) {
  if(a>=0||a<=100)
    haveHat=a;
  else
    cout<<"Wrong input!";
}

int getHaveHat() const {
  return haveHat;
}

	//поведінка (методи класу, функції класу)
public:
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
private:
	//властивості (поля класу,змінні классу)
	string color;
	double lenght;
	string material;
	bool winterHat;
	bool summerHat;
	bool waterHat;
	int dirtness;
	bool sewed;

public:

void setColor(string a) {
  color=a;
}
string getColor()const {
  return color;
}

void setLenght(double a) {
  if(a>0)
    lenght=a;
  else
    cout<<"Wrong input!";
}

double getLenght() const {
  return lenght;
}

void setMaterial(string a) {
  material=a;
}
string getMaterial()const {
  return material;
}

void setIswinterHat (bool a) {
		winterHat = a;
	}

	bool getIswinterHat() const {
		return winterHat;
	}
void setIssummerHat (bool a) {
		summerHat = a;
	}

	bool getIssummerHat() const {
		return summerHat;
	}
void setIswaterHat (bool a) {
		waterHat = a;
	}

	bool getIswaterHat() const {
		return waterHat;
	}
void setIssewed (bool a) {
		sewed = a;
	}

	bool getIssewed() const {
		return sewed;
	}
void setDirtness(int a) {
  if(a>=0||a<=100)
    dirtness=a;
  else
    cout<<"Wrong input!";
}

int getDirtness() const {
  return dirtness;
}
	//поведінка (методи класу, функції класу)
public:
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
		sewed = true;
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
  int a;
  double ad;
  string as;

	// h1.name = "Max";
	// h2.name = "Mark";

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

  ad=180;
	human.SetHeight(ad);

  as="brown";
  human.SetEyes_color(as);

  as="Max";
  human.SetName(as);

  as="Smith";
  human.SetLastName(as);

  a=100;
  human.SetEnergy(a);

  a=1;
	human.SetSoreThroat(a);
  
  a=100;
	human.SetCleanliness(a);

  a = 10;
	human.SetHunger(a);

  a=100;
  human.SetMood(a);
  
	human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

  a=10;
  human.SetEnergy(a);

  a=0;
	human.SetSoreThroat(a);
  
  a=100;
	human.SetCleanliness(a);

  a = 10;
	human.SetHunger(a);

  a=10;
  human.SetMood(a);

	human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

  ad=3.5;
  r.setWidth(ad);
  ad=2.3;
  r.setHeight(ad);
  ad=4.6;
  r.setLength(ad);
  as="blue";
  r.setWallColor(as);
  a=2;
  r.setWindow_amount(a);
  a=0;
	r.setWallPainted(a);
  a=100;
	r.setRoomAiring(a);
  a=10;
	r.setRoomClean(a);
  a=0;
	r.setRoomDecor(a);
	r.setCanTalk(a);

	r.printRoom();
	r.roomPainting(h1);
	r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	a=1;
	r.setWallPainted(a);
  a=10;
	r.setRoomAiring(a);
  a=100;
	r.setRoomClean(a);
  a=1;
	r.setRoomDecor(a);
	r.setCanTalk(a);

	r.printRoom();
	r.roomPainting(h1);
	r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

  as="Iphone";
  ph.setMobileModel(as);
  ad=10.5;
  ph.setMobileLenght(ad);
  ad=4.5;
  ph.setMobileWidth(ad);
  as = "white";
  ph.setMobileColor(as);
  ad = 20000;
  ph.setMobilePrice(ad);
  a=100;
	ph.setChargeLevel(a);
  a=0;
	ph.setIsNew(a);

	ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	a=10;
	ph.setChargeLevel(a);
  a=1;
	ph.setIsNew(a);

	ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

  as = "Carl";
  k.setName(as);
  as = "black";
  k.setHairColor(as);
  as = "blue";
  k.setEyesColor(as);
  a=10;
  k.setAge(a);
  a=100;
  k.setGoodMood(a);
  k.setEnergyLvl(a);
  a=1;
  k.setHaveHat(a);

	k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

  k.setGoodMood(a);
  k.setEnergyLvl(a);
  a=0;
  k.setHaveHat(a);

	k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

  /*string color = "red";
	double lenght = 15.5;
	string material = "cotton";
	bool winterHat;
	bool summerHat;
	bool waterHat;
	int dirtness;
	bool sewed;*/

  as = "red";
  hat.setColor(as);
  ad=15.5;
  hat.setLenght(ad);
  as = "cotton";
  hat.setMaterial(as);
  a=1;
  hat.setIswinterHat(a);
  hat.setIssummerHat(a);
  hat.setIswaterHat(a);
  a=0;
  hat.setIssewed(a);
  a=100;
  hat.setDirtness(a);

	hat.printHat();
	hat.protection(k);
	hat.cold();
	hat.water();
	hat.sew();
	hat.washing();
	hat.printHat();

	a=0;
  hat.setIswinterHat(a);
  hat.setIssummerHat(a);
  hat.setIswaterHat(a);
  a=1;
  hat.setIssewed(a);
  a=10;
  hat.setDirtness(a);

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
