#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Person{
	public:
	
		Person(){}//ures konstruktor, new szoval letre is jon
		
		Person(string f,string l,  int a) : f{f}, l{l}, a{a}{	
			//0,150
			if(a < 0 || a >=150){
				throw runtime_error("Invalida age");
				}
			
			//nem tartalmaz alabbi karaktert
			string n = f + l;
			for (char c : n) {
				switch(c) {
				case ';':
				case ':':
				case '"':
				case '[':
				case ']':
				case '*':
				case '&':
				case '^':
				case '%':
				case '$':
				case '#':
				case '@':
				case '!':
				case '\'':
					throw runtime_error("Invalid name");
					break;
				default:
					break;	
				}	
				
			}}//teljes konstruktor
		//string name() const{return n;} // nem modosul az adat
		string first()const{return f;}
		string last()const{return l;}
		int age()const{return a;}
		
	private:	//kell getter es setter
		//string name;
		string f;
		string l;
		int a;
		
	};
//globális operátor
ostream& operator<< (ostream& os, const Person& p){
	//return os << p.n << " " << p.a;
	return os << p.first() << " " << p.last() << " " << p.age();
}

istream& operator >>(istream& is, Person& p){
	string f;
	string l;
	int a;
	is >> f >> l >> a;
	
	p = Person(f, l, a);
	return is;

}
int main(){
	Person p = Person("Goofy", "Jaj", 63);
	//Person ember1;
	//ember1.name = "Goofy";
	//ember1.age = 63;
	
	cout << p.first() << " " << p.last() << " " << p.age() << endl;
	//ember1.n();
	//ember1.a();

	//üres person
	Person p1;
	cin >> p1;
	cout << p1 << endl;
	
	
	vector<Person> vec;
	for(Person p; cin >>p;){
		vec.push_back(p);
	}//feltöltés
	for(Person p: vec){
		cout << p << endl;
	}
	
	
	



}	
