// Motherboard.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Motherboard : public Komponen
{
private:
    string socketType;  // Jenis soket CPU (misalnya: LGA1151, AM4)
    string chipset;     // Chipset yang digunakan oleh motherboard
public:
    Motherboard() {}

    Motherboard(string socketType, string chipset, string merk, string nama) : Komponen(merk, nama)
    {
        this->socketType = socketType;
        this->chipset = chipset;
    }

    void setSocketType(string socketType)
    {
        this->socketType = socketType;
    }

    void setChipset(string chipset)
    {
        this->chipset = chipset;
    }

    string getSocketType()
    {
        return this->socketType;
    }

    string getChipset()
    {
        return this->chipset;
    }

    ~Motherboard() {}
};
