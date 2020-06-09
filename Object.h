#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
#include "Obgect_alfa.h"
#include "Coordinati.h"
class Object:public Object_alfa {
private:

	Coordinates fiz_xy;//������� ��� ������
	Coordinates fiz_xxyy;//������ ��� ������

	int izmenenie;//����� �� �������� ������
	
	int go_in_this_moment;//������� ����
	int direction_in_this_momvent;//������� �����������
	
	
public:
	//������������

	
	Object(const Object_alfa&alfa):Object_alfa(alfa) {

		go_in_this_moment = direction_in_this_momvent = 0;//�������� ������ ������
		izmenenie = 1;// ��� ������ ������ �������� ����� ���������� ������

		fiz_xy.set(get_size_x() / 3, get_size_y() - (get_size_y() / 3));//������ ��� ������
		
		fiz_xxyy.set(get_size_x() / 3, get_size_y() / 3);//������ ��� ������
		
	}
	
	Object(const Object&alfa):Object_alfa(alfa) {
		go_in_this_moment = alfa.go_in_this_moment;
		direction_in_this_momvent = alfa.direction_in_this_momvent;

		izmenenie = 1;
		

		fiz_xy=alfa.fiz_xy;
		fiz_xxyy=alfa.fiz_xxyy;

	}


	//����������� � ������� �� �����������
	void Set_direction_and_go(int DIRECTION, int go) {
		if (direction_in_this_momvent == DIRECTION &&go_in_this_moment == go) {
			izmenenie = 0;
		}
		direction_in_this_momvent = DIRECTION;
		go_in_this_moment = go;
		++izmenenie;
		
	}

	//������� � ��������
	void Set_go_in_this_moment(int GO_IN_THIS_MOMENT) {
		if (go_in_this_moment != GO_IN_THIS_MOMENT)
		{

		    ++izmenenie;
		    go_in_this_moment = GO_IN_THIS_MOMENT; 
		
		}
		

	}

	//����������� 
	void Set_direction_in_this_moment(int SET_DIRECTON) {
		if (direction_in_this_momvent != SET_DIRECTON) 
		{
			++izmenenie; 
			direction_in_this_momvent = SET_DIRECTON;
		}
	}

	//�������
	//���������� �����������
	int Get_direction_in_this_momvent() {
		return direction_in_this_momvent;
	}

	//����������  ������� ������� ��������
	int Get_go_in_this_momvent() {
		return go_in_this_moment;
	}


	//�������� ������������ ������ 
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

