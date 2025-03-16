// Komputer.cpp (modifikasi)
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "PowerSupply.cpp"
#include "Gpu.cpp"
#include "Motherboard.cpp"
#include "Case.cpp"

using namespace std;

class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    PowerSupply powerSupply;
    Gpu gpu;
    Motherboard motherboard;
    Case casing;
public:
    Komputer() {}

    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, PowerSupply powerSupply, Gpu gpu, Motherboard motherboard, Case casing)
    {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
        this->powerSupply = powerSupply;
        this->gpu = gpu;
        this->motherboard = motherboard;
        this->casing = casing;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }

    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }

    void setHarddrive(Harddrive harddrive)
    {
        this->harddrive = harddrive;
    }

    void setPowerSupply(PowerSupply powerSupply)
    {
        this->powerSupply = powerSupply;
    }

    void setGpu(Gpu gpu)
    {
        this->gpu = gpu;
    }

    void setMotherboard(Motherboard motherboard)
    {
        this->motherboard = motherboard;
    }

    void setCasing(Case casing)
    {
        this->casing = casing;
    }

    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }

    string getNama()
    {
        return this->nama;
    }

    Cpu getCpu()
    {
        return this->cpu;
    }

    vector<Ram> getRamList()
    {
        return this->ramList;
    }

    Harddrive getHarddrive()
    {
        return this->harddrive;
    }

    PowerSupply getPowerSupply()
    {
        return this->powerSupply;
    }

    Gpu getGpu()
    {
        return this->gpu;
    }

    Motherboard getMotherboard()
    {
        return this->motherboard;
    }

    Case getCasing()
    {
        return this->casing;
    }

    ~Komputer() {}
};
