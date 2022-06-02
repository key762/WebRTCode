#ifndef __HUMAN_H_ // 测试__HUMAN_H_是否被宏定义过
#define __HUMAN_H_ // 如果__HUMAN_H_没有被宏定义过,定义__HUMAN_H_

#include <iostream>

namespace avdance {

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

} // namespace

#endif // 上边代码是如果__HUMAN_H_没有被宏定义过才编译的代码段,下边的则相反
