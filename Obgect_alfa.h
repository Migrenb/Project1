#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include "coordinati.h"
class Object_alfa {
private:

    string file_name;//имя файла
	Image object_image;//image обьекта
	Texture object_texture;//texture обьекта
	Sprite object_sprite;//sprite обьекта 

	int hight_sprite;//кол-во спрайтов в спрайтсете
	int width_sprite;//колличество направлений

	Coordinates position_in_window;//позиция на экране

	vector < vector <Coordinates> > posiciya_in_texture;//начало резки спрайта;

	Coordinates size;//длина и высота спрайта на спрайтсете

public:

	void Set_position(float POSITION_X = 0, float POSITION_Y = 0) {
		Coordinates alfa(POSITION_X, POSITION_Y);
		if (alfa != position_in_window) {

			position_in_window = alfa;
			object_sprite.setPosition(position_in_window.get_x(), position_in_window.get_y());

		}

	}

	//конструкторы 
	
	Object_alfa(string FILENAME,Coordinates SIZE,
		Coordinates POSITION_ON_WINDOW,int WITH_MAP=1,int HIGHT_SPRITE=4) 
	{
		
		file_name = FILENAME;
		object_image.loadFromFile("image/"+file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window= POSITION_ON_WINDOW;//позиция на экране

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size = SIZE;
		
		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f <width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
        Set_position();


	}

	Object_alfa(const char FILENAME[] , Coordinates SIZE,
		Coordinates POSITION_ON_WINDOW, int WITH_MAP=1,int HIGHT_SPRITE=4 ) 
	{
		file_name = FILENAME;
		object_image.loadFromFile("image/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window = POSITION_ON_WINDOW;
		
		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size = SIZE;

		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();

	}

	Object_alfa(string FILENAME,float SIZE_X,float SIZE_Y, 
		Coordinates POSITION_ON_WINDOW, int WITH_MAP=1, int HIGHT_SPRITE=4)
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window = POSITION_ON_WINDOW;
		
		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size.set_x ( SIZE_X);
		size.set_y ( SIZE_Y);

		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();
	}

	Object_alfa(const char FILENAME[],float SIZE_X, float SIZE_Y, 
		Coordinates POSITION_ON_WINDOW,int WITH_MAP =1, int HIGHT_SPRITE=4) 
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);
		
		position_in_window = POSITION_ON_WINDOW;

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size.set_x(SIZE_X);
		size.set_y( SIZE_Y);

		

		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}

		Set_position();
	}

	Object_alfa(string FILENAME, Coordinates SIZE,
		float POSITION_X, float POSITION_Y,int WITH_MAP=1,int HIGHT_SPRITE=4 )
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window.set_x(POSITION_X);
		position_in_window.set_y(POSITION_Y);

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size = SIZE;
		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();


	}

	Object_alfa(const char FILENAME[],Coordinates SIZE, float POSITION_X, 
		float POSITION_Y,int WITH_MAP=1, int HIGHT_SPRITE=4)
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window.set_x(POSITION_X);
		position_in_window.set_y(POSITION_Y);

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size = SIZE;
		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();

	}

	Object_alfa(string FILENAME, float SIZE_X, float SIZE_Y, 
		float POSITION_X, float POSITION_Y, int WITH_MAP=1, int HIGHT_SPRITE=4)
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		position_in_window.set_x(POSITION_X);
		position_in_window.set_y(POSITION_Y);

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size.set_x ( SIZE_X);
		size.set_y ( SIZE_Y);

		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();
	}

	Object_alfa(const char FILENAME[],float SIZE_X, float SIZE_Y, 
		float POSITION_X,float POSITION_Y, int WITH_MAP=1, int HIGHT_SPRITE=4)
	{
		file_name = FILENAME;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		hight_sprite = HIGHT_SPRITE;
		width_sprite = WITH_MAP;

		size.set_x ( SIZE_X);
		size.set_y ( SIZE_Y);

		position_in_window.set_x(POSITION_X);
		position_in_window.set_y(POSITION_Y);

		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();
	}


	Object_alfa(const Object_alfa& alfa) {
		file_name = alfa.file_name;
		object_image.loadFromFile("images/" + file_name);
		object_texture.loadFromImage(object_image);
		object_sprite.setTexture(object_texture);

		hight_sprite = alfa.hight_sprite;
	    width_sprite = alfa.width_sprite;

		position_in_window = alfa.position_in_window;

	    size = alfa.size;
		for (int i = 0; i < hight_sprite; ++i) {
			vector<Coordinates> alfa;

			for (int f = 0; f < width_sprite; ++f) {

				Coordinates beta(((size.get_x()) * f), ((size.get_y()) * i));

				alfa.push_back(beta);

			}
			posiciya_in_texture.push_back(alfa);
		}
		Set_position();
	}
	//геттеры различные

	Coordinates get_position() {
		return position_in_window;
	}

	float get_size_x() {
		return size.get_x();
	}

	float get_size_y() {
		return size.get_y();
	}

	int Get_width_sprite() {
		return  width_sprite;
	}

	int Get_hight_sprite() {
		return hight_sprite;
	}

	//сеттеры различных хуйней
	
	void Set_position_in_texture(int position_on_x=0,int position_on_y=0) {
		float x = ((posiciya_in_texture.at(position_on_y)).at(position_on_x)).get_x();
		float y = ((posiciya_in_texture.at(position_on_y)).at(position_on_x)).get_y();

		float xx = size.get_x();
		float yy = size.get_y();


		object_sprite.setTextureRect(IntRect(x, y, xx, yy));
	}

	void Set_position(Coordinates& alfa) {
		if (alfa != position_in_window) {

			position_in_window = alfa;
			object_sprite.setPosition(position_in_window.get_x(), position_in_window.get_y());

		}

	}

	

	void Drave(RenderWindow& window) {
		window.draw(object_sprite);	
	}



};