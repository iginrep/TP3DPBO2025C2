class Cpu:
    def __init__(self, jumlah_core=0, kecepatan_ghz=0.0, merk="", nama=""):
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
        self.merk = merk
        self.nama = nama

    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz

    def get_jumlah_core(self):
        return self.jumlah_core

    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama
