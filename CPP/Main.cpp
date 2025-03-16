#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "PowerSupply.cpp"
#include "Gpu.cpp"
#include "Motherboard.cpp"
#include "Case.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie();

    // Membuat objek untuk CPU, RAM, Harddrive, Power Supply, GPU, Motherboard, dan Casing
    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    PowerSupply powerSupply(750, "80 Plus Gold", "Corsair", "RM750x");
    Gpu gpu(8, "NVIDIA RTX 3060", "NVIDIA", "GeForce");
    Motherboard motherboard("LGA1151", "Z490", "MSI", "MPG Z490 GAMING EDGE WIFI");
    Case casing("Mid Tower", "Corsair", "Corsair", "4000D Airflow");

    Komputer komputer("PC Gaming", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive, powerSupply, gpu, motherboard, casing);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));

    // Menampilkan informasi komputer
    cout << "Informasi Komputer igin:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Cpu       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
    
    for (Ram& ram : komputer.getRamList())
    {
        cout << "Ram       : ";
        cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
    }

    cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk() << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) " << endl;
    cout << "PowerSupply: " << komputer.getPowerSupply().getMerk() << ' ' << komputer.getPowerSupply().getNama() << " (" << komputer.getPowerSupply().getWatt() << "W, " << komputer.getPowerSupply().getEfisiensi() << ")" << endl;
    cout << "Gpu       : " << komputer.getGpu().getMerk() << ' ' << komputer.getGpu().getNama() << " (" << komputer.getGpu().getMemoryGB() << " GB, " << komputer.getGpu().getTipeGpu() << ")" << endl;
    cout << "Motherboard: " << komputer.getMotherboard().getMerk() << ' ' << komputer.getMotherboard().getNama() << " (" << komputer.getMotherboard().getSocketType() << ", " << komputer.getMotherboard().getChipset() << ")" << endl;
    cout << "Casing    : " << komputer.getCasing().getMerk() << ' ' << komputer.getCasing().getNama() << " (" << komputer.getCasing().getUkuran() << ", " << komputer.getCasing().getTipe() << ")" << endl;

    return 0;
}
