#ifndef INCLUDE_IN_MIDDLE_TEST
#define INCLUDE_IN_MIDDLE_TEST

void fx () {
#include <includable.h>
    cout << "included values " << x << " " << t << endl;
}

#endif // INCLUDE_IN_MIDDLE_TEST

