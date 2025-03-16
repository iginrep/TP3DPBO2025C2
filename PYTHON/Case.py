class Case:
    def __init__(self, ukuran, tipe, merk, nama):
        self.ukuran = ukuran
        self.tipe = tipe
        self.merk = merk
        self.nama = nama

    def set_ukuran(self, ukuran):
        self.ukuran = ukuran

    def set_tipe(self, tipe):
        self.tipe = tipe

    def get_ukuran(self):
        return self.ukuran

    def get_tipe(self):
        return self.tipe

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama
