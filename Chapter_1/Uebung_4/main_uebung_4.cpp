/*
 * main_uebung_4.cpp
 * Copyright (C) 4040  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#include "main_uebung_4.hpp"
#include <string>
#include <iostream>


void UEBUNG_4::run(){
    uebung_4();
}

void UEBUNG_4::uebung_4(){

    using std::cin;
    using std::cout;
    using std::endl;

    cout<<"Please Enter Your Age : "<<endl;
    cin>>m_age;
    m_month = m_age * 12;
    cout<<m_month<<endl;


}



// END
