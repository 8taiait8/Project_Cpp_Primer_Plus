/*
 * main.cpp
 * Copyright (C) 2020  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */


#include <iostream>
#include <string>
#include "main.hpp"
// #include "main_uebung_1.hpp"
#include "main_uebung_2.hpp"

int main(int argc, char* argv[]){

    using std::endl;
    using std::cout;

    cout <<"------------"<< endl;
    cout <<"Begin main()"<< endl;
    cout <<"------------"<< endl;

    // MAIN* main_fun = new UEBUNG_1;
    MAIN* main_fun = new UEBUNG_2;



    main_fun->run();
    delete main_fun;

    cout <<"------------"<<endl;
    cout <<"End   main()"<< endl;
    cout <<"------------"<<endl;

    return 0;
}




// END
