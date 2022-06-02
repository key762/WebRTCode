#include <iostream>

class Human {
   public:
	Human(){
	    std::cout << "construct human..." << std::endl;
	    age = 0;
	    sex = 0;
	};
	~Human(){
	    std::cout << "destruct human..." << std::endl;
	}
   public:
	void setAge(int a);
	int  getAge();
	void setSex(int s);
	int  getSex();
   private:
	int age; // 年龄
	int sex; // 0:男 1:女

};
