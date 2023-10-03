#include <iostream>

using namespace std;

class ThrowInDestructorObject {
public:
    ThrowInDestructorObject() {
        //throw 10;
    }
    ~ThrowInDestructorObject() {
        throw 5;
    }
    void throwing() {
        throw 100;
    }
};

void includeInMiddle () {
#include <includable.h>
    cout << "Includable vars! " << x << " " << t;
}

void arrayReverseAccess () {
    int x[10];
    0[x] = 0xAAAAAA;
    cout << "Array reverse access! " << 0[x] << endl;
}

int main() {
    try {
        for (int i = 0; i < 2000000000; ++i) {
            for (int j = 0; j < 100000; ++j);
            if (i < 10000) {
                cout << i << endl;
            }
        }
        ThrowInDestructorObject o;
        o.throwing();
    } catch (int e) {
        cout << "exception catched!!!";
    }

    return 0;
}
