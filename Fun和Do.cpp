/*描述
程序填空输出指定结果

#include <iostream> 
using namespace std;
class A { 
	private: 
	int nVal; 
	public: 
	void Fun() 
	{ cout << "A::Fun" << endl; }; 
	void Do() 
	{ cout << "A::Do" << endl; } 
}; 
class B:public A { 
	public: 
	virtual void Do() 
	{ cout << "B::Do" << endl;} 
}; 
class C:public B { 
	public: 
	void Do( ) 
	{ cout <<"C::Do"<<endl; } 
	void Fun() 
	{ cout << "C::Fun" << endl; } 
}; 
void Call(
// 在此处补充你的代码
) { 
	p.Fun(); p.Do(); 
} 
int main() { 
	C c; 
	Call( c); 
	return 0;
}
输入
无
输出
A::Fun
C::Do
样例输入
None
样例输出
A::Fun 
C::Do */ 

#include <iostream> 
using namespace std;
class A { 
	private: 
	int nVal; 
	public: 
	void Fun() 
	{ cout << "A::Fun" << endl; }; 
	void Do() 
	{ cout << "A::Do" << endl; } 
}; 
class B:public A { 
	public: 
	virtual void Do() 
	{ cout << "B::Do" << endl;} 
}; 
class C:public B { 
	public: 
	void Do( ) 
	{ cout <<"C::Do"<<endl; } 
	void Fun() 
	{ cout << "C::Fun" << endl; } 
}; 
void Call(B& p
// 在此处补充你的代码
) { 
	p.Fun(); p.Do(); 
} 
int main() { 
	C c; 
	Call( c); 
	return 0;
}
