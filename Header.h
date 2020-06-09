#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include <vector>
using namespace std;

struct fiz_object {


	bool i;
	vector < pair<int, bool> >fiz_model;


	fiz_object() {
		i = 1;
		fiz_model;
	}

	/*fiz_object( const vector < pair<int, bool> >& FIZ_MODEL) {
		pair <int, bool> alfa;
 		int size = FIZ_MODEL.size();
		for (int i = 0; i < size;++i) {
			alfa = FIZ_MODEL[i];
			fiz_model.push_back(alfa);

		}
	}*/

	fiz_object(const vector < pair<int, bool> >& FIZ_MODEL,int WEIDTH) {
		
		int size = FIZ_MODEL.size();
		for (int i = 0; i < WEIDTH; ++i) {
			if (size == i) {
				for (int f = size; f < WEIDTH; ++f) {
						
				}
			}
			

			
			fiz_model.push_back(FIZ_MODEL[i]);

		}
		i = 0;
	}

	fiz_object(const fiz_object&alfa) {
		
		int size = alfa.fiz_model.size();
		for (int i = 0; i < size; ++i) {

			fiz_model.push_back(alfa.fiz_model[i]);

		}
		i = 0;
	}

	void set(const vector < pair<int, bool> >& FIZ_MODEL) {

		if (i==1){
			
			int size = FIZ_MODEL.size();

			for (int i = 0; i < size; ++i) {

			    fiz_model.push_back(FIZ_MODEL[i]);

		    }

		i = 0;

		}
		
	}
	bool


};

