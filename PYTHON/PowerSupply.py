class PowerSupply:
    def __init__(self, watt=0, efisiensi="", merk="", nama=""):
        self.watt = watt
        self.efisiensi = efisiensi
        self.merk = merk
        self.nama = nama

    def set_watt(self, watt):
        self.watt = watt

    def set_efisiensi(self, efisiensi):
        self.efisiensi = efisiensi

    def get_watt(self):
        return self.watt

    def get_efisiensi(self):
        return self.efisiensi

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama
