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
	void SetHeight(double height) {
		if (height < 0 || height>300) {
			cout << "Wrong input!\n";
		}
		else {
			this->height = height;
		}
	}

	double GetHeight() const {
		return this->height;
	}

	void SetEyes_color(string eyes_color) {
		this->eyes_color = eyes_color;
	}

	string GetEyes_color() const {
		return this->eyes_color;
	}

	void SetName(string name) {
		this->name = name;
	}

	string GetName() const {
		return this->name;
	}

	void SetLastName(string last_name) {
		this->last_name = last_name;
	}

	string GetLastName() const {
		return this->last_name;
	}

	void SetEnergy(int energy) {
		if (energy < 0 || energy>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->energy = energy;
		}
	}

	int GetEnergy() const {
		return this->energy;
	}

	void SetSoreThroat(bool soreThroat) {
		this->soreThroat = soreThroat;
	}

	bool GetSoreThroat() const {
		return this->soreThroat;
	}

	void SetCleanliness(int cleanliness) {
		if (cleanliness < 0 || cleanliness>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->cleanliness = cleanliness;
		}
	}

	int GetCleanliness() const {
		return this->cleanliness;
	}

	void SetMood(int mood) {
		if (mood < 0 || mood>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->mood = mood;
		}
	}

	int GetMood() const {
		return this->mood;
	}

	void SetHunger(int hunger) {
		if (hunger < 0 || hunger>100) {
			cout << "Wrong input!\n";
		}
		else {
			this->hunger = hunger;
		}
	}

	int SetHunger() const {
		return this->hunger;
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
 void setWidth(double width){
   if(width>0)
   this->width=width;
   else
    cout<<"Wrong input!";
 }

double getWidth() const {
  return this->width;
}
void setHeight(double height) {
  if(height>0)
    this->height=height;
  else
    cout<<"Wrong input!";
}
double getHeight() const {
  return this->height;
}
void setLength(double lenghth) {
  if(lenghth>0)
    this->lenghth=lenghth;
  else
    cout<<"Wrong input!";
}

double getLength() const {
  return this->lenghth;
}

void setWallColor(string wall_color) {
  this->wall_color=wall_color;
}

string getWallColor()const {
  return this->wall_color;
}

void setWindow_amount(int window_amount) {
  if(window_amount>0)
    this->window_amount=window_amount;
  else
    cout<<"Wrong input!";
}

int getWindow_amount() const {
  return this->window_amount;
}

void setWallPainted (bool wallPainted) {
		this->wallPainted = wallPainted;
	}

	bool getWallPainted() const {
		return this->wallPainted;
	}

void setRoomAiring(int roomAiring) {
  if(roomAiring>=0||roomAiring<=100)
    this->roomAiring=roomAiring;
  else
    cout<<"Wrong input!";
}

int getRoomAiring() const {
  return this->roomAiring;
}

void setRoomClean(int roomCleanliness) {
  if(roomCleanliness>=0||roomCleanliness<=100)
    this->roomCleanliness=roomCleanliness;
  else
    cout<<"Wrong input!";
}

int getRoomClean() const {
  return this->roomCleanliness;
}

void setRoomDecor (bool roomDecor) {
		this->roomDecor = roomDecor;
	}

	bool getRoomDecor() const {
		return this->roomDecor;
	}

void setCanTalk (bool canTalk) {
		this->canTalk = canTalk;
	}

	bool getCanTalk() const {
		return this->canTalk;
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
void setMobileModel(string mobileModel) {
  this->mobileModel=mobileModel;
}

string getMobileModel()const {
  return this->mobileModel;
}

void setMobileLenght(double mobileLenght) {
  if(mobileLenght>0)
    this->mobileLenght=mobileLenght;
  else
    cout<<"Wrong input!";
}

double getMobileLenght() const {
  return this->mobileLenght;
}
void setMobileWidth(double mobileLenght) {
  if(mobileLenght>0)
    this->mobileWidth=mobileLenght;
  else
    cout<<"Wrong input!";
}

double getMobileWidth() const {
  return this->mobileWidth;
}

void setMobileColor(string mobileColor) {
  this->mobileColor=mobileColor;
}

string getMobileColor()const {
  return this->mobileColor;
}

void setMobilePrice(double mobilePrice) {
  if(mobilePrice>0)
    this->mobilePrice=mobilePrice;
  else
    cout<<"Wrong input!";
}

double getMobilePrice() const {
  return this->mobilePrice;
}

void setChargeLevel(int chargeLevel) {
  if(chargeLevel>=0||chargeLevel<=100)
    this->chargeLevel=chargeLevel;
  else
    cout<<"Wrong input!";
}

int getChargeLevel() const {
  return this->chargeLevel;
}

void setIsNew (bool isNew) {
		this->isNew = isNew;
	}

	bool getIsNew() const {
		return this->isNew;
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
void setName(string name) {
  this->name=name;
}

string getName()const {
  return this->name;
}
void setHairColor(string hairColor) {
  this->hairColor=hairColor;
}

string getHairColor()const {
  return this->hairColor;
}
void setEyesColor(string eyesColor) {
  this->eyesColor=eyesColor;
}
string getEyesColor()const {
  return this->eyesColor;
}
void setAge(int age) {
  if(age>=0||age<=100)
    this->age=age;
  else
    cout<<"Wrong input!";
}

int getAge() const {
  return this->age;
}
void setGoodMood(int goodMood) {
  if(goodMood>=0||goodMood<=100)
    this->goodMood=goodMood;
  else
    cout<<"Wrong input!";
}

int getChargeLevel() const {
  return this->goodMood;
}
void setEnergyLvl(int energyLvl) {
  if(energyLvl>=0||energyLvl<=100)
    this->energyLvl=energyLvl;
  else
    cout<<"Wrong input!";
}

int getEnergyLvl() const {
  return this->energyLvl;
}
void setHaveHat(int haveHat) {
  if(haveHat>=0||haveHat<=100)
    this->haveHat=haveHat;
  else
    cout<<"Wrong input!";
}

int getHaveHat() const {
  return this->haveHat;
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

void setColor(string color) {
  this->color=color;
}
string getColor()const {
  return this->color;
}

void setLenght(double lenght) {
  if(lenght>0)
    this->lenght=lenght;
  else
    cout<<"Wrong input!";
}

double getLenght() const {
  return this->lenght;
}

void setMaterial(string material) {
  this->material=material;
}
string getMaterial()const {
  return this->material;
}

void setIswinterHat (bool winterHat) {
		this->winterHat = winterHat;
	}

	bool getIswinterHat() const {
		return this->winterHat;
	}
void setIssummerHat (bool summerHat) {
		this->summerHat = summerHat;
	}

	bool getIssummerHat() const {
		return this->summerHat;
	}
void setIswaterHat (bool waterHat) {
		this->waterHat = waterHat;
	}

	bool getIswaterHat() const {
		return this->waterHat;
	}
void setIssewed (bool sewed) {
		this->sewed = sewed;
	}

	bool getIssewed() const {
		return this->sewed;
	}
void setDirtness(int dirtness) {
  if(dirtness>=0||dirtness<=100)
    this->dirtness=dirtness;
  else
    cout<<"Wrong input!";
}

int getDirtness() const {
  return this->dirtness;
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
