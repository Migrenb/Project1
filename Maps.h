#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include "Obgect_alfa.h"
#include <map>
#include <iostream>
using namespace std;
#include <vector>

/*struct fiz_object {
	bool i;
	vector < pair<int, bool> >fiz_model;


	fiz_object() {
		i = 1;
		fiz_model;
	}
	fiz_object(const bool &I, const vector < pair<int, bool> >&FIZ_MODEL) {
		i = I;
		int f = FIZ_MODEL.size();
		for (size_t i = 0; i < length; i++)
		{

		}		
	}
};*/



class Map:public Object_alfa {
private:

	int height_map;
	int weidth_map;

	vector<string> draw_map;
	Coordinates begin_map;
	vector<vector<Coordinates>>setca_coordinat;

public:
	Map(Object_alfa&alfa,vector<string> DRAW_MAP,Coordinates BEGIN_MAP,
		int HEIGHT_MAP,int WEIDTH_MAP):Object_alfa(alfa) 
	{
	
		begin_map = BEGIN_MAP;
		height_map = HEIGHT_MAP;
		weidth_map = WEIDTH_MAP;

		for (int i = 0; i < height_map; ++i) {
			draw_map.push_back(DRAW_MAP[i]);

		}
		Coordinates second;
		vector<Coordinates>first;
		for (int i = 0; i < height_map; ++i) {
			first.clear();
			for (int f = 0; f < weidth_map; ++f) {
				second.set(begin_map.get_x()+get_size_x()*f, begin_map.get_y() + get_size_y() * i);
				first.push_back(second);
			}
			setca_coordinat.push_back(first);

		}
		vector<vector<Coordinates>>setca_coordinat;
	}
	Map(Object_alfa& alfa, vector<string> DRAW_MAP, float Begin_map_x, float Begin_map_y,
		int HEIGHT_MAP, int WEIDTH_MAP) :Object_alfa(alfa)
	{
		
		begin_map.set_x(Begin_map_y);
		begin_map.set_y(Begin_map_y);
		height_map = HEIGHT_MAP;
		weidth_map = WEIDTH_MAP;

		for (int i = 0; i < height_map; ++i) {
			draw_map.push_back(DRAW_MAP[i]);

		}
		Coordinates second;
		vector<Coordinates>first;
		for (int i = 0; i < height_map; ++i) {
			first.clear();
			for (int f = 0; f < weidth_map; ++f) {
				second.set(begin_map.get_x() + get_size_x() * f,begin_map.get_y() + get_size_y() * i);
				first.push_back(second);
			}
			setca_coordinat.push_back(first);

		}
		
	}
	

	Map(Map& alfa):Object_alfa(alfa) {

		begin_map =alfa.begin_map;
		height_map = alfa.height_map;
		weidth_map =alfa.weidth_map;
		
		for (int i = 0; i < height_map; ++i) {
			draw_map.push_back(alfa.draw_map[i]);

		}
		Coordinates second;
		vector<Coordinates>first;
		for (int i = 0; i < height_map; ++i) {
			first.clear();
			for (int f = 0; f < weidth_map; ++f) {
				second.set(begin_map.get_x() + get_size_x() * f, begin_map.get_y() + get_size_y() * i);
				first.push_back(second);
			}
			setca_coordinat.push_back(first);

		}
		
	}
	void set_begin_map(Coordinates BEGIM_MAP) {//начало отрисовки карты
		begin_map = BEGIM_MAP;
		Coordinates second;
		vector<Coordinates>first;
		for (int i = 0; i < height_map; ++i) {
			first.clear();
			for (int f = 0; f < weidth_map; ++f) {
				second.set(begin_map.get_x() + get_size_x() * f, begin_map.get_y() + get_size_y() * i);
				first.push_back(second);
			}
			setca_coordinat.push_back(first);

		}
		
	}

	Coordinates get_prav_niz() {
		Coordinates alfa(weidth_map * get_size_x(), height_map * get_size_y());
		
		return alfa;
	}

	Coordinates get_lev_verh() {
		return begin_map;
	}

	void Set_map(RenderWindow& WINDOW) {
		for (int i = 0; i < height_map; ++i) {
			for (int f = 0; f < weidth_map; ++f) {
				int alfa = draw_map[i][f] - '0';
				
				Set_position_in_texture(alfa, 0);
				Set_position(setca_coordinat[i][f].get_x(), setca_coordinat[i][f].get_y());
				Drave(WINDOW);
				
			}
			
		}

	}

};
