#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <algorithm>

//increase
template<typename C>
void increase(C& c, int n){
	for(auto& i : c){
	i = i+n;  
	}
}
template<typename i1, typename i2>
i2 copy2tomb(i1 f1, i1 e1, i2 f2){
	for(i1 p = f1; p != e1; ++p){
		*f2 = *p;
		f2++;
		}
		return f2;	
		}
			
			
//kiir
template<typename C>
void kiir(C& c){
	for(auto& a: c){
	std::cout << a << " ";
	}
	std::cout << std::endl;
}
//findIt
template<typename i1, typename T>
constexpr findIt(i1 f1, i1 e1, const T& value){
	for(i1 p = f1; p != e1; ++p){
	if(*p == value){
		return *p;
		}
	}
	return *e1;
	}

int main(){

try{

const int size = 10;
//array
std::array<int, size> ai = {0,1,2,3,4,5,6,7,8,9};

//vector
std::vector<int> vi = {0,1,2,3,4,5,6,7,8,9};

vi.shrink_to_fit();
//10 elem,  20 memoricahely
//shrink - > 10 elem, 10 hely

//list
std::list<int> li = {0,1,2,3,4,5,6,7,8,9};

//kiirasok
std::cout << "declarated: " << std::endl;
kiir(ai);
kiir(vi);
kiir(li);
//masolatok
std::array<int, ai.size()> ai2 = ai;
std::vector<int> vi2 = vi;
std::list<int> li2 = li;
//masolatkiir
std::cout << "copied: " << std::endl;
kiir(ai2);
kiir(vi2);
kiir(li2);


//array+2 vector+3, lista+5
increase(ai2, 2);
increase(vi2, 3);
increase(li2, 5);
std::cout << "increased: " << std::endl;
kiir(ai2);
kiir(vi2);
kiir(li2);

copy2tomb(ai2.begin(), ai2.end(), vi2.begin());
copy2tomb(li2.begin(), li2.end(), ai2.begin());
//copy2kiir
std::cout << "itercopied: " << std::endl;
kiir(vi2);
kiir(ai2);

//find
std::cout << "finding: " << std::endl;
findIt(ai2.begin(), ai2.end(), 3);
findIt(ai2.begin(), ai2.end(), 27);

}catch(std::exception& e){
	std::cerr << "ecxeption: " << e.what() << std::endl;
	return 1;
	}
	catch(...){
	std::cerr << "exception: " << std::endl;
	return 2;
	}
}




