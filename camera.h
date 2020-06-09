#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

#include "coordinati.h"
class Camera {
private:
	
	View camera;

	Coordinates size_view;
	Coordinates position;

	Coordinates granica_lev_verh;
	Coordinates granica_prav_niz;

	
    
public:

	Camera(Coordinates SIZE,Coordinates POSITION,Coordinates GRANICA_LEV_VERH,Coordinates  GRANICA_PRAV_NIZ) {
		camera;

		size_view = SIZE;
		position = POSITION;
		
		camera.reset(FloatRect(0,0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(float SIZE_X,float SIZE_Y, Coordinates POSITION, Coordinates GRANICA_LEV_VERH, Coordinates  GRANICA_PRAV_NIZ) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}
	
	Camera(Coordinates SIZE, float POSITION_X, float POSITION_Y, Coordinates GRANICA_LEV_VERH, Coordinates   GRANICA_PRAV_NIZ) {
		camera;

		size_view = SIZE;
		position.set( POSITION_X,POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(float SIZE_X, float SIZE_Y, float POSITION_X, float POSITION_Y, Coordinates GRANICA_LEV_VERH, Coordinates   GRANICA_PRAV_NIZ) {
		camera;

		size_view.set(SIZE_X,SIZE_Y);
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(Coordinates SIZE, Coordinates POSITION,float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, Coordinates   GRANICA_PRAV_NIZ) {
		camera;

		size_view = SIZE;
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(float SIZE_X, float SIZE_Y, Coordinates POSITION,float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, Coordinates  GRANICA_PRAV_NIZ) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(Coordinates SIZE, float POSITION_X, float POSITION_Y, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, Coordinates   GRANICA_PRAV_NIZ) {
		camera;

		size_view = SIZE;
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(float SIZE_X, float SIZE_Y, float POSITION_X, float POSITION_Y, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, Coordinates   GRANICA_PRAV_NIZ) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz = GRANICA_PRAV_NIZ;
	}

	Camera(Coordinates SIZE, Coordinates POSITION, Coordinates GRANICA_LEV_VERH, float GRANICA_PRAV_NIZ_X,float GRANICA_PRAV_NIZ_Y ) {
		camera;

		size_view = SIZE;
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);

	}

	Camera(float SIZE_X, float SIZE_Y, Coordinates POSITION, Coordinates GRANICA_LEV_VERH, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(Coordinates SIZE, float POSITION_X, float POSITION_Y, Coordinates GRANICA_LEV_VERH, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view = SIZE;
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(float SIZE_X, float SIZE_Y, float POSITION_X, float POSITION_Y, Coordinates GRANICA_LEV_VERH, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh = GRANICA_LEV_VERH;
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(Coordinates SIZE, Coordinates POSITION, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view = SIZE;
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(float SIZE_X, float SIZE_Y, Coordinates POSITION, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position = POSITION;

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(Coordinates SIZE, float POSITION_X, float POSITION_Y, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view = SIZE;
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}

	Camera(float SIZE_X, float SIZE_Y, float POSITION_X, float POSITION_Y, float GRANICA_LEV_VERH_X, float GRANICA_LEV_VERH_Y, float GRANICA_PRAV_NIZ_X, float GRANICA_PRAV_NIZ_Y) {
		camera;

		size_view.set(SIZE_X, SIZE_Y);
		position.set(POSITION_X, POSITION_Y);

		camera.reset(FloatRect(0, 0, size_view.get_x(), size_view.get_y()));
		camera.setCenter(position.get_x(), position.get_y());

		granica_lev_verh.set(GRANICA_LEV_VERH_X, GRANICA_LEV_VERH_Y);
		granica_prav_niz.set(GRANICA_PRAV_NIZ_X, GRANICA_PRAV_NIZ_Y);
	}
    
	void set_lev_verh_ugol(Coordinates&alfa) {
		granica_lev_verh = alfa;
		
	}

	void set_lev_verh_ugol(float X,float Y) {
		granica_lev_verh.set(X, Y);

	}

	void set_prav_niz_ugol(Coordinates& alfa) {
		granica_prav_niz = alfa;
	}
	void set_prav_niz_ugol(float X, float Y) {
		granica_prav_niz .set(X, Y);
	}

	void set_position(Coordinates& alfa) {
		position = alfa;
	}
	void set_position(float X,float Y) {
		position.set(X,Y);
	}

	void set_camera(RenderWindow& WINDOW) {
	
		if ((position.get_x() - (size_view.get_x() / 2)) <= (granica_lev_verh.get_x())) {
			
			position.set_x(granica_lev_verh.get_x()+ (size_view.get_x() / 2) );
		}
		else {
			if ((position.get_x() + (size_view.get_x() / 2)) >= (granica_prav_niz.get_x())) {
				
				position.set_x(granica_prav_niz.get_x() - (size_view.get_x() / 2));
			}
		}
		if ((position.get_y() - (size_view.get_y() / 2)) <= (granica_lev_verh.get_y())) {
			
			position.set_y( granica_lev_verh.get_y() + (size_view.get_y() / 2));
		}
		else {
			if ((position.get_y() + (size_view.get_y ()/ 2)) >= (granica_prav_niz.get_y())) {
				
				position.set_y( granica_prav_niz.get_y() - (size_view.get_y() / 2));
			}
		}
		cout << endl;
		camera.setCenter(position.get_x(), position.get_y());
		WINDOW.setView(camera);
	}

};

