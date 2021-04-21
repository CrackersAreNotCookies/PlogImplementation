#include "getInteger.h"
#include <iostream>
#include <plog/Log.h>

int main()
{
    plog::init(plog::debug, "Logfile.txt");
    LOGD << "main() called";

    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';

    return 0;
}
