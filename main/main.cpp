/*
 * main.cpp
 * Copyright (C) 2020  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */


#include <iostream>
#include <string>
#include "main.hpp"
#include "fun_1.hpp"
#include "fun_2.hpp"
#include "fun_3.hpp"
#include "cube.hpp"
#include "main_distance.hpp"
#include "reader.hpp"

int main(int argc, char* argv[]){

    using std::endl;
    using std::cout;

    cout <<"------------"<< endl;
    cout <<"Begin main()"<< endl;
    cout <<"------------"<< endl;

    // fun_1();
    // fun_2();
    // fun_3();

    // run_cube();
    // run_distance();
    MAIN* main_fun = new READER;
    main_fun->run();
    // reader();

    delete main_fun;

    cout <<"------------"<<endl;
    cout <<"End   main()"<< endl;
    cout <<"------------"<<endl;

    return 0;
}




// END
