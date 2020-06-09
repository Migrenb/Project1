#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
#include "Maps.h"
#include "muve.h"
#include "Object.h"
#include "Obgect_alfa.h"
#include "camera.h"

int main() {

	RenderWindow window(VideoMode(640, 480), "alfa");
	Event event;
	
	Object_alfa Lev_object("hero.png", 96, 96,0,0, 3);
	Object Lev_muve_object(Lev_object);
	Coordinates Speed;
	Speed = 300;
	Muve Lev_muve(Speed, Lev_muve_object);
	Clock clock;
	float time;
	vector<string>map_map={
			"2222222222222222222222222222222222222222",
			"2100000003000000000000000000000000000002",
			"2010000040000000010000000000000000000002",
			"2100004000003000000000000000000000000002",
			"2000000000000000000100000000000000000002",
			"2000030000003000000000000000000000000002",
			"2000010000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2000000000030000000000000000000000000002",
			"2000000000000000000000000100000000000002",
			"2000001000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2000000000000000000000000000000000000002",
			"2222222222222222222222222222222222222222",
	};
	

	
	Object_alfa map("map.png", 32, 32, 0, 0, 5,1);
	

	Map finish_map(map, map_map, 0,0, 17,40 );
	Camera camera(640,480,0,0,finish_map.get_lev_verh(), finish_map.get_prav_niz());
    while(window.isOpen()) {
		time = clock.getElapsedTime().asSeconds();
		clock.restart();
        //проверяем на открытость окна
		{while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		}
		Lev_muve.finish_muve(time);
		
 		window.clear();
		finish_map.Set_map(window);
		Lev_muve.muve_position();
		camera.set_position(Lev_muve.get_position().get_x(), Lev_muve.get_position().get_y());
		camera.set_camera(window);
		Lev_muve.Drave(window);
		
		window.display();
	}








	return 0;
}

