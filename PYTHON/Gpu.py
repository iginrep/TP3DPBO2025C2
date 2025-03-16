class Gpu:
    def __init__(self, memory_gb=0, tipe_gpu="", merk="", nama=""):
        self.memory_gb = memory_gb
        self.tipe_gpu = tipe_gpu
        self.merk = merk
        self.nama = nama

    def set_memory_gb(self, memory_gb):
        self.memory_gb = memory_gb

    def set_tipe_gpu(self, tipe_gpu):
        self.tipe_gpu = tipe_gpu

    def get_memory_gb(self):
        return self.memory_gb

    def get_tipe_gpu(self):
        return self.tipe_gpu

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama
