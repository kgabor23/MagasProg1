#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>

/*
g++ -w -Wall -std=c++11 GUI/Graph.cpp GUI/Window.cpp GUI/GUI.cpp GUI/Simple_window.cpp teszt.cpp `fltk-config --ldflags --use-images` -o a2.out
*/



using namespace Graph_lib;

int main(){
  try {
	Point w1(300, 50);
	Simple_window win(w1, 800, 1000, "drill13");
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
		
		
		
		Image ii{Point {500,100},"badge.jpg"};
		ii.set_mask(Point{100,100},200,200);
		win.attach(ii);
		
		Image ii2{Point {0,300},"badge.jpg"};
		ii2.set_mask(Point{100,100},200,200);
		win.attach(ii2);
		
		Image ii3{Point {200,0},"badge.jpg"};
		ii3.set_mask(Point{100,100},200,200);
		win.attach(ii3);
		
		win.set_label("kép");
		win.wait_for_button();
		
		//loop
		vector<Point> jajaj;
		for(int i=0; i<800; i+=100){
		  for(int j=0; j<800; j+=100){
		    jajaj.push_back(Point(i,j));
		  }
		}

		for(Point p : jajaj){
			Image papo{Point{p},"papo.jpg"};
			papo.set_mask(Point{300,300},100,100);
			win.attach(papo);
			win.wait_for_button();
			}
		
		/*loop
		
		win.set_label("papo");
		   for(int j=0; j<=300; j+=100){
		   	int i = 0;
		   	if(j>800){
		   	   j=0;
		   	   i+=100;}
			Image papo{Point{i,j},"papo.jpg"};
			papo.set_mask(Point{300,300},100,100);
			win.attach(papo);
			win.wait_for_button();
			
		}
		
		
		
		for(int i=0; i<=800; i+=100){
		    for(int j=0; j<=800; i+=100){
		       Image papo{Point{i,j},"papo.jpg"};
		       papo.set_mask(Point{300,300},100,100);
		       win.attach(papo);
		       win.wait_for_button();
		    }
		 }  */
			 
	
	
	}//try vege
	
	catch (exception& e){
		cerr << "exception: " <<e.what() <<endl;
		return 1;
	}
	catch (...){
		cerr << "error\n";
		return 2;
	}
	
}

