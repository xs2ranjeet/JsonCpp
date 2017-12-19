#include <iostream>
#include <string>
#include <vector>
#include <deque>

class Json{
public:
	Json(){}

	Json(const std::string jsnstr){
		
	}
};


int main(int argc, char const *argv[])
{
	std::string jsonstr = "{\"name\":\"ranjeet\",\"age\":34}";

	Json jsn(jsonstr);
	std::cout<<jsn<<"\n";
	std::cout<<jsonstr<<"\n";
	std::cout<<jsn["name"]<<" : "<<jsn["age"]<<"\n";
	return 0;
}