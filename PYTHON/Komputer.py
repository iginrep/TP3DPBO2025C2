from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from PowerSupply import PowerSupply
from Gpu import Gpu
from Motherboard import Motherboard
from Case import Case

class Komputer:
    def __init__(self, nama, cpu, ram_list, harddrive, power_supply, gpu, motherboard, casing):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list
        self.harddrive = harddrive
        self.power_supply = power_supply
        self.gpu = gpu
        self.motherboard = motherboard
        self.casing = casing

    def set_nama(self, nama):
        self.nama = nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_ram(self, ram_list):
        self.ram_list = ram_list

    def set_harddrive(self, harddrive):
        self.harddrive = harddrive

    def set_power_supply(self, power_supply):
        self.power_supply = power_supply

    def set_gpu(self, gpu):
        self.gpu = gpu

    def set_motherboard(self, motherboard):
        self.motherboard = motherboard

    def set_casing(self, casing):
        self.casing = casing

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def get_nama(self):
        return self.nama

    def get_cpu(self):
        return self.cpu

    def get_ram_list(self):
        return self.ram_list

    def get_harddrive(self):
        return self.harddrive

    def get_power_supply(self):
        return self.power_supply

    def get_gpu(self):
        return self.gpu

    def get_motherboard(self):
        return self.motherboard

    def get_casing(self):
        return self.casing
