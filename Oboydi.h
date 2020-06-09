#pragma once
#include"map.h"
#include "muve_finish.h"

class Finish_obrab:private Map,private Finish_muve{
private:
	int obrab_position_x;
	float obrab_position_y;
	int x, y;
public:
	Finish_obrab(Map& MAP, Finish_muve& MUVE) :Map(MAP), Finish_muve(MUVE) 
	{
		obrab_position_x = obrab_position_y = 0;
		Finish_obrab::x = 0;
		Finish_obrab::y = 0;
	}
	int maps_sprite(char ALFA) {

	}
	void obrabotca(float TIME,RenderWindow &window) { 
		obrab_position_x = position_x;
		obrab_position_y = position_y;
		
		
		muve(TIME);
		
	    Finish_obrab::x = fiz_model_x / Map::xx;
		Finish_obrab::y = fiz_model_y / Map::yy;
		if (maps[y][x] == 's' || maps[y][x] == '0') {
			position_x = obrab_position_x;
			position_y = obrab_position_y;
		}
		Finish_obrab::x = fiz_model_xx / Map::xx;
		Finish_obrab::y = fiz_model_y / Map::yy;
		if (maps[y][x] == 's' || maps[y][x] == '0') {
			position_x = obrab_position_x;
			position_y = obrab_position_y;
		}

		Finish_obrab::x = fiz_model_x / Map::xx;
		Finish_obrab::y = fiz_model_yy / Map::yy;
		if (maps[y][x] == 's' || maps[y][x] == '0') {
			position_x = obrab_position_x;
			position_y = obrab_position_y;
		}

		Finish_obrab::x = fiz_model_xx / Map::xx;
		Finish_obrab::y = fiz_model_yy / Map::yy;
		if (maps[y][x] == 's' || maps[y][x] == '0') {
			position_x = obrab_position_x;
			position_y = obrab_position_y;
		}


		setmap(window);
		
		drave(window);

	}
	float get_position_x() {
		return position_x;

	}
	float get_position_y() {
		return position_y;

	}


	
};
