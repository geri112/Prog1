#include "./GUI/Graph.h"
#include "./GUI/Simple_window.h"

#include <string>
#include <iostream>

using namespace Graph_lib;	

int main(){
	try{
	
		Point t1{300, 50};
		Simple_window win{t1, 1000, 800, "My window"};
		win.wait_for_button();
		Lines grid;
		int x_size = 800;
		int y_size = 800;
		for(int i = 100; i <=x_size; i+=100){
			grid.add(Point(i,0), Point(i, y_size));
			grid.add(Point(0,i), Point(x_size, i));
		}
		
		win.attach(grid);
		win.wait_for_button();
		
		
		
		
/*		Rectangle r1 { Point{0, 0}, 100, 100};
			r1.set_fill_color(Color::red);
		win.attach(r1);
		win.wait_for_button();*/
		
		//Vector ref<Graph_lib::Rectangle> vr;
		for(int i = 0; i < 8; i++){
		
		}
	
	// img.set_mask(Point(100,100), 200,200)		/ move(int x, int y)
	}catch(exception& e){
		cerr << "exception: " << e.what() << endl;
		return 1;
	}catch(...) {
		cerr << "exception\n";
		return 2;
	}

}
