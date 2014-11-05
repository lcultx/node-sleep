#include <iostream>
using namespace std;
#include <unistd.h>

int myUSleep(unsigned us)
{
    usleep(us);//us微妙
    return 0;
}

int main() {
    cout << "Hello, World!" << endl;
    myUSleep(1000 * 1000);
    cout << "Hello, World!" << endl;
    return 0;
}
