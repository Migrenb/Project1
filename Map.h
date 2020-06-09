#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;
#include "coordinati.h"
class Map {
private:
	string filename;
	Image map_image;
	Texture map_texture;
	Sprite map_sprite;

	Coordinates begin_map;
	Coordinates size_sprite_map;

	int height_map;
	int weidth_map;

	vector<string> draw_map;

public:
	
	Map(vector<string>DRAW_MAP, Coordinates BEGIN_MAP, Coordinates SIZE_SPRITE_MAP,string FILENAME) {
		height_map = DRAW_MAP.size();
		weidth_map = (DRAW_MAP.at(0)).size();
		for (int i = 0; i < height_map; ++i) {
			draw_map.push_back(DRAW_MAP[i]);

		}
	
		filename = FILENAME;
		map_image.loadFromFile("images/"+ filename);
		map_texture.loadFromImage(map_image);
		map_sprite.setTexture(map_texture);
		begin_map = BEGIN_MAP;
		size_sprite_map = SIZE_SPRITE_MAP;

	}

	Map(Map& alfa) {
		filename = alfa.filename;
		map_image.loadFromFile("images/" + filename);
		map_texture.loadFromImage(map_image);
		map_sprite.setTexture(map_texture);
		begin_map = alfa.begin_map;
		size_sprite_map = alfa.size_sprite_map;
		height_map = alfa.height_map;
		weidth_map = alfa.weidth_map;
		for (int i = 0; i < height_map; ++i) {
			draw_map.push_back(alfa.draw_map[i]);

		}

	}
	void set_begin_map(Coordinates BEGIM_MAP) {//начало отрисовки карты

	}

	void Set_map(RenderWindow& WINDOW) {
		for (int i = 0; i < height_map; ++i) {
			for (int f = 0; f < weidth_map; ++f) {
				int alfa = draw_map[i][f]-'0';
				
				map_sprite.setTextureRect(IntRect((alfa * size_sprite_map.get_x()), 0, size_sprite_map.get_x(), size_sprite_map.get_y()));
				map_sprite.setPosition((size_sprite_map.get_x())*f, (size_sprite_map.get_y()) * i);
				WINDOW.draw(map_sprite);
			}
		}

	}

};