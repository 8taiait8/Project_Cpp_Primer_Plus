/*
 * main_uebung_5.hpp
 * Copyright (C) 5050  <@DESKTOP-C0TNLLI>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MAIN_UEBUNG_5_HPP
#define MAIN_UEBUNG_5_HPP

#include "main.hpp"

class UEBUNG_5: public MAIN {

    public:
        UEBUNG_5(){};
        virtual void run() override;

    private:
        void uebung_5();
        void from_cel_to_fah(const float& a_cel);

        float m_cel;
        float m_fah;
};

#endif /* !MAIN_UEBUNG_5_HPP */
