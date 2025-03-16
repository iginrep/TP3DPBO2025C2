class Motherboard:
    def __init__(self, socket_type="", chipset="", merk="", nama=""):
        self.socket_type = socket_type
        self.chipset = chipset
        self.merk = merk
        self.nama = nama

    def set_socket_type(self, socket_type):
        self.socket_type = socket_type

    def set_chipset(self, chipset):
        self.chipset = chipset

    def get_socket_type(self):
        return self.socket_type

    def get_chipset(self):
        return self.chipset

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama
