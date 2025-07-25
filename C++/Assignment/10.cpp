#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
template <typename T>
class Vector {
    vector<T> elements;
public:
    Vector(const vector<T>& vec){
        elements=vec;
    }
    T findSmallest() const {
        if (elements.empty()){
            return T();
        } else {
            return *min_element(elements.begin(), elements.end());
        }
    }
    bool searchElement(const T& element) const {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }
    double findAverage() const {
        if (elements.empty()) {
            return 0.0;
        } else {
            T sum = accumulate(elements.begin(), elements.end(), T());
            return static_cast<double>(sum) / elements.size();
        }
    }
};
int main() {
    Vector<int> intVector({5, 2, 8, 1, 7});
    cout << "Smallest Element: " << intVector.findSmallest() << endl;
    int searchElement = 8;
    if (intVector.searchElement(searchElement)) {
        cout<<"Search for Element " <<searchElement<< ": Found" << endl;
    } else {
        cout<<"Search for Element " << searchElement << ": Not Found"<<endl;
    }
    cout <<"Average of Elements: " << intVector.findAverage() << endl;
    Vector<double> doubleVector({3.5, 2.0, 1.5, 4.0, 5.5});
    cout << "Smallest Element: " << doubleVector.findSmallest()<<endl;
    double search= 4.0;
    if (doubleVector.searchElement(search)) {
        cout << "Search for Element " << search<< ": Found"<<endl;
    } else {
        cout << "Search for Element " << search << ": Not Found"<<endl;
    }
    cout << "Average of Elements: " << doubleVector.findAverage()<<endl;
    return 0;
}