// Case.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Case : public Komponen
{
private:
    string ukuran;  // ATX, Micro-ATX, Mini-ITX, dll
    string tipe;    // Tipe casing (Full Tower, Mid Tower, Mini Tower, dll)
public:
    Case() {}

    Case(string ukuran, string tipe, string merk, string nama) : Komponen(merk, nama)
    {
        this->ukuran = ukuran;
        this->tipe = tipe;
    }

    void setUkuran(string ukuran)
    {
        this->ukuran = ukuran;
    }

    void setTipe(string tipe)
    {
        this->tipe = tipe;
    }

    string getUkuran()
    {
        return this->ukuran;
    }

    string getTipe()
    {
        return this->tipe;
    }

    ~Case() {}
};
