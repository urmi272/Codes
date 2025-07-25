#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;

        // friend class declaration
        friend class ClassB;

    public:
        // constructor to initialize numA
        ClassA()
        {
          numA=12;
        }
};

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB
        ClassB()
        {
          numB=1;
        }
    // member function to add numA
    // from ClassA and numB from ClassB
    int add() {
        ClassA objectA;
        return objectA.numA + numB; //calling numA from classA in the classsB
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}
