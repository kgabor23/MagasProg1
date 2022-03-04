#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>

/*
g++ -w -Wall -std=c++11 GUI/Graph.cpp GUI/Window.cpp GUI/GUI.cpp GUI/Simple_window.cpp teszt.cpp `fltk-config --ldflags --use-images` -o a2.out
*/

using namespace Graph_lib;


int main(){
	try{
		Point t1(300, 50);
		Simple_window win(t1, 1000, 800, "My window");
		win.wait_for_button();
		
		Lines grid;
		int x_size = 800;
		int y_size = 800;
		for(int i= 100; i<=x_size; i+=100){
			grid.add(Point(i,0), Point (i, y_size));
			grid.add(Point(0,i), Point (x_size, i));
			}
		win.attach(grid);
		win.wait_for_button();
		
		Rectangle r1 {Point{0,0}, 100, 100};
		r1.set_fill_color(Color::red);
		win.attach(r1);
		
		Rectangle r2 {Point{100,100}, 100, 100};
		r2.set_fill_color(Color::red);
		win.attach(r2);
		
		Rectangle r3 {Point{200,200}, 100, 100};
		r3.set_fill_color(Color::red);
		win.attach(r3);
		
		Rectangle r4 {Point{300,300}, 100, 100};
		r4.set_fill_color(Color::red);
		win.attach(r4);
		
		Rectangle r5 {Point{400,400}, 100, 100};
		r5.set_fill_color(Color::red);
		win.attach(r5);
		
		Rectangle r6 {Point{500,500}, 100, 100};
		r6.set_fill_color(Color::red);
		win.attach(r6);
		
		Rectangle r7 {Point{600,600}, 100, 100};
		r7.set_fill_color(Color::red);
		win.attach(r7);
		
		Rectangle r8 {Point{700,700}, 100, 100};
		r8.set_fill_color(Color::red);
		win.attach(r8);
		
		
	
		win.set_label("Rectangle");
		win.wait_for_button();
	
		

	} catch(exception& e) {
		cerr << "exception: " <<e.what() <<endl;
		return 1;
	} catch (...) {
		cerr << "error\n";
		return 2;
	}

}
