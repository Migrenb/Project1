#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include "Object.h"
#include "coordinati.h"
#include <iostream>
using namespace std;
class Muve:public Object {
	float time;
	Coordinates speed;
	int direction;
	Coordinates new_position;//на сколько изменится позиция
	Coordinates position;
public:

	Muve(Coordinates& SPEED,Object& alfa):Object(alfa) {
		speed = SPEED;
		direction = 0;
		new_position= get_position();
		time = 0;
		position = get_position();
	}

	Muve(Coordinates& SPEED, const Object& alfa) :Object(alfa) {
		speed = SPEED;
		direction = 0;
		new_position = get_position();
		time = 0;
		position = get_position();
	}

	Muve(const Muve& alfa) :Object(alfa) {
		speed = alfa.speed;
		direction = alfa.direction;
		new_position = alfa.new_position;
		time = 0;
		position = get_position();
	}

	void go_finish(float TIME) {
		time += TIME;

		int f = Get_width_sprite();
		if (time >= 0.15 * f) time = 0;
		for (int i = 0; i < f; ++i) {

			if (time < 0.15 + (0.15 * i)) {
				Set_go_in_this_moment(i);
				break;
			}
		}
	}
 
	void finish_muve(float TIME) {
		
		int key_pressed = 0;

		if (Keyboard::isKeyPressed(Keyboard::Up) && key_pressed == 0) {
			Set_direction_in_this_moment(3);
			
			new_position.set_y(-speed.get_y() * TIME);
			int f = Get_width_sprite();
			go_finish(TIME);
			++key_pressed;
		}

		if (Keyboard::isKeyPressed(Keyboard::Down) && key_pressed == 0) {
			Set_direction_in_this_moment(0);
			
			new_position.set_y(speed.get_y() * TIME);
			int f = Get_width_sprite();
			go_finish(TIME);
			++key_pressed;
		}

		if (Keyboard::isKeyPressed(Keyboard::Left) && key_pressed==0) {

			Set_direction_in_this_moment(1);
			
			new_position.set_x(-speed.get_x() * TIME);
			
			go_finish(TIME);
			++key_pressed;

		}

		if (Keyboard::isKeyPressed(Keyboard::Right) && key_pressed == 0) {
			Set_direction_in_this_moment(2);
			
			new_position.set_x(speed.get_x() * TIME);
			int f = Get_width_sprite();
			go_finish(TIME);
			++key_pressed;
		}
		
	}

	void muve_position() {
		      
			
			
		position = get_position();
				
		position.set_x(position.get_x() + new_position.get_x());
	    position.set_y(position.get_y() + new_position.get_y());
				
	}

	void Drave(RenderWindow& window) {
		
		muve_position();
		Set_position(position);
		new_position = 0;
		Object::Drave(window);

	}

};
