#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
#include "Obgect_alfa.h"
#include "Coordinati.h"
class Object:public Object_alfa {
private:

	Coordinates fiz_xy;//квадрат физ модели
	Coordinates fiz_xxyy;//Размер физ модели

	int izmenenie;//нужно ли обрезать спрайт
	
	int go_in_this_moment;//поцизия шага
	int direction_in_this_momvent;//позиция направления
	
	
public:
	//конструкторы

	
	Object(const Object_alfa&alfa):Object_alfa(alfa) {

		go_in_this_moment = direction_in_this_momvent = 0;//вырезаем первый спрайт
		izmenenie = 1;// при первом первой рисовкой нужно нарисовать спрайт

		fiz_xy.set(get_size_x() / 3, get_size_y() - (get_size_y() / 3));//начало физ модели
		
		fiz_xxyy.set(get_size_x() / 3, get_size_y() / 3);//Размер физ модели
		
	}
	
	Object(const Object&alfa):Object_alfa(alfa) {
		go_in_this_moment = alfa.go_in_this_moment;
		direction_in_this_momvent = alfa.direction_in_this_momvent;

		izmenenie = 1;
		

		fiz_xy=alfa.fiz_xy;
		fiz_xxyy=alfa.fiz_xxyy;

	}


	//направление и позиция по направлению
	void Set_direction_and_go(int DIRECTION, int go) {
		if (direction_in_this_momvent == DIRECTION &&go_in_this_moment == go) {
			izmenenie = 0;
		}
		direction_in_this_momvent = DIRECTION;
		go_in_this_moment = go;
		++izmenenie;
		
	}

	//позиция в движении
	void Set_go_in_this_moment(int GO_IN_THIS_MOMENT) {
		if (go_in_this_moment != GO_IN_THIS_MOMENT)
		{

		    ++izmenenie;
		    go_in_this_moment = GO_IN_THIS_MOMENT; 
		
		}
		

	}

	//направление 
	void Set_direction_in_this_moment(int SET_DIRECTON) {
		if (direction_in_this_momvent != SET_DIRECTON) 
		{
			++izmenenie; 
			direction_in_this_momvent = SET_DIRECTON;
		}
	}

	//геттеры
	//возвращаем направление
	int Get_direction_in_this_momvent() {
		return direction_in_this_momvent;
	}

	//возвращаем  позицию спрайта движения
	int Get_go_in_this_momvent() {
		return go_in_this_moment;
	}


	//вырезаем определенный спрайт 
	void Set_position_in_texture() {
		if (izmenenie != 0) {
			
			Object_alfa::Set_position_in_texture(go_in_this_moment, direction_in_this_momvent);

		}
		izmenenie = 0;
	}
    

	void Drave (RenderWindow& window) {
		if (izmenenie !=0) {
			Set_position_in_texture();
		}
		Object_alfa::Drave(window);
	}

};

