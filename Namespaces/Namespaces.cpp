#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 5;
}

int main()
{
    using namespace first;

    cout <<second::x << '\n';
    cout <<x << '\n';
    return 0;
}
