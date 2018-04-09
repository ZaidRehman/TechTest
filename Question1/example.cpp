#include <iostream>
using namespace std;

class TheClass
{
    public: //required to use class attribute in outside functions
    int willIChange = 0;
};

struct TheStruct
{
    int willIChange = 0;
};

void ClassTakerByValue(TheClass c)
{
    //cout << "In ClassTaker \n";
    c.willIChange = 1; // error if willIChange is not public
}
void ClassTakerByReference(TheClass &c)
{
    //cout << "In ClassTaker \n";
    c.willIChange = 2; // error if willIChange is not public
}
void StructTakerByValue(TheStruct s)
{
    //cout << "In StructTaker \n";
    s.willIChange = 1;
}
void StructTakerByReference(TheStruct &s)
{
    //cout << "In StructTaker \n";
    s.willIChange = 2;
}



int main(){
    
    
    TheClass testClass;
    TheStruct testStruct;
    
    ClassTakerByValue(testClass);
    StructTakerByValue(testStruct);

    cout << "By Value \n";
    cout << "Class field " << testClass.willIChange <<endl;   // error if willIChange is not public
    cout << "Struct field " << testStruct.willIChange <<endl;  
    
    
    ClassTakerByReference(testClass);
    StructTakerByReference(testStruct);

    cout << "By Reference \n";
    cout << "Class field " << testClass.willIChange <<endl;   // error if willIChange is not public
    cout << "Struct field " << testStruct.willIChange <<endl;  

}
