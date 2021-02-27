/*
 * main_uebung_3.hpp
 * Copyright (C) 3030  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MAIN_UEBUNG_3_HPP
#define MAIN_UEBUNG_3_HPP
#include "main.hpp"

class UEBUNG_3: public MAIN {

    public:
        UEBUNG_3(){};
        virtual void run() override;

    private:
        void uebung_3();
        void fun_1();
        void fun_2();

};

#endif /* !MAIN_UEBUNG_3_HPP */
