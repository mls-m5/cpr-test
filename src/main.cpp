

#include "cpr/cpr.h"
#include <iostream>

int main(int argc, char **argv) {
    auto r = Get(cpr::Url{"http://google.com"});

    std::cout << r.text;
}
