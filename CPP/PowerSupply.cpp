// PowerSupply.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class PowerSupply : public Komponen
{
private:
    int watt;
    string efisiensi;
public:
    PowerSupply() {}

    PowerSupply(int watt, string efisiensi, string merk, string nama) : Komponen(merk, nama)
    {
        this->watt = watt;
        this->efisiensi = efisiensi;
    }

    void setWatt(int watt)
    {
        this->watt = watt;
    }

    void setEfisiensi(string efisiensi)
    {
        this->efisiensi = efisiensi;
    }

    int getWatt()
    {
        return this->watt;
    }

    string getEfisiensi()
    {
        return this->efisiensi;
    }

    ~PowerSupply() {}
};
