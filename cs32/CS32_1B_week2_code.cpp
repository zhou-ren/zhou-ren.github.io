//
//  main.cpp
//  CS32_1B_week2_code
//
//  Created by Zhou Ren on 1/15/15.
//  Copyright (c) 2015 Zhou Ren. All rights reserved.
//  Credit goes to Kung-Hua Chang for sharing the practice problems.
//



/*
#include <iostream> 
#include <string> 
using namespace std;

class A {
public:
    string str;
};

class B {
public:
    B() {
        a.str = "hello";
        cout<< "hello";
    }
    void output() {
        cout << a.str << endl;
    }
private:
    A a;
};

int main() {
    B b;
    b.output();
    return 0;
}
*/


/*
#include <iostream> 
using namespace std;
class Double {
public:
    Double(): value(0)
    {
        cout << "1";
    }
    
    Double(double num): value(num)
    {
        cout << "4";
    }
    
    double getValue()
    {
        return value;
    }
    
    ~Double()
    {
        cout << "9";
    }
    
private:
    double value;
};

int main() {
    Double a, b = 2, c = b;
    a = b;
    cout << a.getValue() << b.getValue() << c.getValue();
    return 0;
}
*/


/*
#include <iostream> 
using namespace std;
class ABC {
    // Hmmm ??
public:
    ABC() {
        cout << "1";
    }
    ~ABC() {
        cout << "2";
    }
};

int main() {
    ABC *p = new ABC[3];
    delete [] p; // Hmmm ??
    return 0;
}
*/


/*
#include <iostream> 
using namespace std;

class A {
public:
    A() { cout << "C"; }
    ~A() { cout << "2"; }
};

class B { public:
    B() { cout << "S"; }
    ~B() { cout << "3"; }

private:
    A a;
};

int main() {
    
    B b;
    A a;
    return 0;
}
*/


/*
#include <iostream> 
using namespace std;
class Test {
public:
    Test()
    {
        cout << "T1" << endl;
    }
    
    Test(int n )
    {
        cout << n << endl;
    } // Hmmm?
};

int main() {
    Test a[2];
    Test b(5);
    Test *c = new Test[3]; delete [] c;
    return 0;
}
*/


/*
// 7 any problem?  What can we do to make the program work?
#include <iostream> 
#include <string> 
using namespace std;

class student {
public:
    student(const string &name, const double &score) // Hmmm....
    {
        this->name = name;
        this->score = score;
    }
    
    void output() {
        cout << "Student's name is: " << name << endl;
        cout << "Score is : " << score << endl;
    }
private:
    string name;
    double score;
};

int main() {
    student s("David",32);
    s.output();
    return 0;
    
}
*/


/*
 // any problem?
#include <iostream> 
#include <cstring> 
using namespace std;
class student {
public:
    student(const char *name, const double &score)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->score = score;
    }
    
    student(const student & old){
        score = old.score;
        this->name = new char[strlen(old.name)+1];
        strcpy(this->name, old.name);
    }
    void output() {
        cout << "Student's name is: " << name << endl;
        cout << "Score is : " << score << endl;
    }
    
    ~student() {
        delete [] name;
    }

private:
    char *name;
    double score;
};

int main() {
    student A("ABC",100);
    student B = A; B.output();
    student *C = &A;
    C->output();
    return 0;
}
*/


/*
 //any problem?
#include <iostream> 
#include <cstring> 
using namespace std;

class student {
public:
    student(const char *name, const double &score) {
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->score = score;
    }
    
    student(const student &st) {
        this->name = new char[strlen(st.name)+1];
        strcpy(this->name,st.name);
        this->score = st.score;
    }
    
    student& operator=(const student & old){
        if (this != &old) {
            delete [] this->name;
            
            this->name = new char[strlen(old.name)+1];
            strcpy(this->name, old.name);
            this->score = score;
            
        }
        return *this;
    }
    
    void output() {
        cout << "Student's name is: " << name << endl;
        cout << "Score is : " << score << endl; }
    
    ~student() {
        delete [] name;
    }

private:
    char *name;
    double score;
};

int main() {
    student A("ABC",100);
    student B = A;
    B.output();
    student *C = &A;
    C->output();
    B = A;
    B.output();
    return 0;
}
// Hmmmm......
*/


