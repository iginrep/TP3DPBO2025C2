from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from PowerSupply import PowerSupply
from Gpu import Gpu
from Motherboard import Motherboard
from Case import Case
from Komputer import Komputer

def main():
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
    power_supply = PowerSupply(750, "80 Plus Gold", "Corsair", "RM750x")
    gpu = Gpu(8, "NVIDIA RTX 3060", "NVIDIA", "GeForce")
    motherboard = Motherboard("LGA1151", "Z490", "MSI", "MPG Z490 GAMING EDGE WIFI")
    casing = Case("Mid Tower", "Corsair", "Corsair", "4000D Airflow")

    komputer = Komputer("PC Gaming", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], harddrive, power_supply, gpu, motherboard, casing)
    komputer.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))

    print("Informasi Komputer igin:")
    print(f"Nama      : {komputer.get_nama()}")
    print(f"Cpu       : {komputer.get_cpu().get_merk()} {komputer.get_cpu().get_nama()} ({komputer.get_cpu().get_jumlah_core()} Core) ~{komputer.get_cpu().get_kecepatan_ghz()}GHz")
    
    for ram in komputer.get_ram_list():
        print(f"Ram       : {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_gb()} GB) {ram.get_ddr()}")
    
    print(f"Harddrive : {komputer.get_harddrive().get_tipe_drive()} {komputer.get_harddrive().get_merk()} {komputer.get_harddrive().get_nama()} ({komputer.get_harddrive().get_kapasitas_gb()} GB)")
    print(f"PowerSupply: {komputer.get_power_supply().get_merk()} {komputer.get_power_supply().get_nama()} ({komputer.get_power_supply().get_watt()}W, {komputer.get_power_supply().get_efisiensi()})")
    print(f"Gpu       : {komputer.get_gpu().get_merk()} {komputer.get_gpu().get_nama()} ({komputer.get_gpu().get_memory_gb()} GB, {komputer.get_gpu().get_tipe_gpu()})")
    print(f"Motherboard: {komputer.get_motherboard().get_merk()} {komputer.get_motherboard().get_nama()} ({komputer.get_motherboard().get_socket_type()}, {komputer.get_motherboard().get_chipset()})")
    print(f"Casing    : {komputer.get_casing().get_merk()} {komputer.get_casing().get_nama()} ({komputer.get_casing().get_ukuran()}, {komputer.get_casing().get_tipe()})")

if __name__ == "__main__":
    main()
