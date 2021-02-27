/*
 * main_uebung_4.hpp
 * Copyright (C) 4040  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MAIN_UEBUNG_4_HPP
#define MAIN_UEBUNG_4_HPP
#include "main.hpp"

class UEBUNG_4: public MAIN {

    public:
        UEBUNG_4(){};
        virtual void run() override;

    private:
        void uebung_4();

        int m_age;
        int m_month;

};

#endif /* !MAIN_UEBUNG_4_HPP */
