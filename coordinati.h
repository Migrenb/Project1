#pragma once
#include <iostream>
using namespace std;
class Coordinates {
	
	float x;
	float y;
public:

	
	//конструкторы
	Coordinates() {
		x = y = 0;
	}

	Coordinates(float X, float Y) {
		x = X;
		y = Y;
	}
	
	Coordinates(const Coordinates& alfa) {
		x = alfa.x;
		y = alfa.y;
	}
	
	~Coordinates() {}

	//сеттеры
	void set(float X, float Y) {
		x = X;
		y = Y;
	}
	void set_x(float X) {
		x = X;
	}
	void set_y(float Y) {
		y = Y;
	}

	//Геттеры
	float get_x() {
		return x;
	}

	float get_y() {
		return y;
	}


	
	//приравнивание
	void operator= (Coordinates& alfa) {
		x = alfa.x;
		y = alfa.y;
	}

	void operator= (const Coordinates& alfa) {
		x = alfa.x;
		y = alfa.y;
	}

	void operator=(int alfa) {
		x = alfa;
		y = alfa;
	}

	//сравнение
	bool operator==(const Coordinates& alfa){
		if (x == alfa.x && y == alfa.y) {
			return true;
		}
		else return false;
	}
	bool operator!=(const Coordinates& alfa) {
		if (x == alfa.x && y == alfa.y) {
			return false ;
		}
		else return true;
	}

	bool operator==(int alfa) {
		if (x == alfa && y == alfa) {
			return true;
		}
		else return false;
	}

	bool operator!=(int alfa) {
		if (x == alfa && y == alfa) {
			return false;
		}
		else return true;
	}

	friend ostream& operator<<(ostream& ios,  Coordinates& alfa)  {
		ios << "x " << alfa.x << " y " << alfa.y;
		return ios;
	}

};
