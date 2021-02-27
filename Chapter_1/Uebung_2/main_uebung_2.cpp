/*
 * main_uebung_2.cpp
 * Copyright (C) 2020  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#include "main_uebung_2.hpp"
#include <string>
#include <iostream>


void UEBUNG_2::run(){
    uebung_2();
}

void UEBUNG_2::uebung_2(){

    using std::cout; 
    using std::cin; 
    using std::endl;

    cout<<" Please type a long "<<endl;
    cin>>m_long;
    m_ma = m_long * 220;

    cout <<m_long<<"long = "<<m_ma<<"ma"<< endl;
}



// END
