/*
 * main_uebung_5.cpp
 * Copyright (C) 5050  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#include "main_uebung_5.hpp"
#include <string>
#include <iostream>


void UEBUNG_5::run(){
    uebung_5();
}

void UEBUNG_5::uebung_5(){

    using std::cout;
    using std::cin;
    using std::endl;

    cout<<"Please enter a Celsius Value : "<<endl;
    cin>>m_cel;
    from_cel_to_fah(m_cel);
    cout<<endl<<m_cel<<" degrees Celsius is "<<m_fah<<" degrees Fahrenheit"<<endl;

}


void  UEBUNG_5::from_cel_to_fah(const float& a_cel){
    m_fah = 1.8 * m_cel + 32.0;
};



// END
