#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Gpu : public Komponen
{
private:
    int memoryGB;
    string tipeGpu;
public:
    Gpu() {}

    Gpu(int memoryGB, string tipeGpu, string merk, string nama) : Komponen(merk, nama)
    {
        this->memoryGB = memoryGB;
        this->tipeGpu = tipeGpu;
    }

    void setMemoryGB(int memoryGB)
    {
        this->memoryGB = memoryGB;
    }

    void setTipeGpu(string tipeGpu)
    {
        this->tipeGpu = tipeGpu;
    }

    int getMemoryGB()
    {
        return this->memoryGB;
    }

    string getTipeGpu()
    {
        return this->tipeGpu;
    }

    ~Gpu() {}
};
