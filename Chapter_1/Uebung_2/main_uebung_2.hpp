/*
 * main_uebung_2.hpp
 * Copyright (C) 2020  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MAIN_UEBUNG_2_HPP
#define MAIN_UEBUNG_2_HPP
#include "main.hpp"

class UEBUNG_2: public MAIN {

    public:
        UEBUNG_2(){};
        virtual void run() override;

    private:
        void uebung_2();


        int m_long;
        int m_ma;
};

#endif /* !MAIN_UEBUNG_2_HPP */
