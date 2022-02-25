#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>

/*
g++ -w -Wall -std=c++11 GUI/Graph.cpp GUI/Window.cpp GUI/GUI.cpp GUI Simple_window.cpp drill12.cpp `fltk-config --ldflags --use-images` -o a2.out
*/

using namespace Graph_lib;

int main(){
	try{
	
	Point t1 {100, 100};
	Simple_window win {t1, 600, 400, "My window"};
	win.wait_for_button();
	
	Axis xa {Axis:: x, Point{20, 300}, 280, 10, "x axis"};
	//összefűzés
	win.attach(xa);
	
	win.set_label("X axis");
	win.wait_for_button();
	
	Axis ya{Axis::y,Point{20,300}, 280, 10, "y axis"};
	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);
	win.attach(ya);
	win.set_label("Y axis");
	win.wait_for_button();
	
	//függvény
	Function sine {sin, 0, 100, Point{20, 150}, 1000, 50, 50};
	win.attach(sine);
	win.set_label("sine function");
	win.wait_for_button();
	
	Polygon poly;
	poly.add(Point{300, 200});
	poly.add(Point{350, 100});
	poly.add(Point{400, 200});
	
	poly.set_color(Color::cyan);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	
	win.set_label("Polygon");
	win.wait_for_button();
	
	//téglalap
	Rectangle r {Point{200,200}, 100, 50}; //balfelsősarok
	win.attach(r);
	win.set_label("Teglalap");
	win.wait_for_button();
	
	Closed_polyline poly_rect;
	
	poly_rect.add(Point{100, 50});
	poly_rect.add(Point{200, 50});
	poly_rect.add(Point{200, 100});
	poly_rect.add(Point{100, 100});
	poly_rect.add(Point{50, 75});
	
	win.attach(poly_rect);
	
	win.set_label("Rectangle");
	win.wait_for_button();
	
	r.set_fill_color(Color::green);
	poly.set_style(Line_style::dash);
	poly.set_fill_color(Color::yellow);
	
	poly_rect.set_style(Line_style::dash);
	poly_rect.set_fill_color(Color::green);
	
	win.set_label("Fill");
	win.wait_for_button();

	Text text {Point{150, 150}, "Hello, grapichal world!"};
	
	win.attach(text);
	win.set_label("Text");
	win.wait_for_button();
	
	text.set_font_size(20);
	text.set_font(Font::times_bold);
	
	win.attach(text);
	win.set_label("TextChanges");
	win.wait_for_button();
	
	Image ii{Point {100,50},"papo.jpg"};
	win.attach(ii);
	win.set_label("ÁHÁHÁHÁHÁHÁHÁÁÁHÁHÁHÁHÁÁHÁHÁHÁHÁHÁHÁHÁHÁHHÁHÁ");
	win.wait_for_button();
	
	ii.move(100,200);
	win.set_label("HEHEJ");
	win.wait_for_button();
	
	Circle c{Point{100,200},50};
	Ellipse e {Point{100, 200},75,25};
	e.set_color(Color::green);
	Mark m {Point{100,200},'x'};
	
	win.attach(c);
	win.attach(e);
	win.attach(m);
	
	win.set_label("kor/elipszis");
	win.wait_for_button();
	
	//szöveg
	
	//hf: 58resz, 20as meret, font allitas, kép kihelyezés, kép elmozgatása kodok kiprobalasa(következő feladatok :DDD )
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	} catch(exception& e) {
		cerr << "exception: " << e.what() << endl;
		return 1;
	} catch (...) {
		cerr << "error\n";
		return 2;
	}
}
