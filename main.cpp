#include <iostream>
#include <string>
using namespace std;

struct node {
    int info;
    node* next;
};

node* head = NULL;
node* tail = NULL;
node* awal = NULL;
node* akhir = NULL;
node* depan = NULL;
node* belakang = NULL;
node* atas = NULL;
node* bawah = NULL;
node* kiri = NULL;
node* kanan = NULL;
node* maju = NULL;
node* mundur = NULL;

void tambahdepan(int x, node* &headpro, node* &tailpro) {
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        baru->next = headpro;
        headpro = baru;
    }
}

void tambahbelakang(int x, node* &headpro, node* &tailpro) {
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        tailpro->next = baru;
        tailpro = baru;
    }
}

void tambahtengahBH(int x, node* &headpro, node* &tailpro)
{
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        if (headpro == tailpro) {
            tailpro->next = baru;
            tailpro = baru;
        } else {
            baru->next = headpro->next;
            headpro->next = baru;
        }
    }
}

void tambahtengahDH(int x, node* &headpro, node* &tailpro) {
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        if (headpro == tailpro) {
            baru->next = headpro;
            headpro = baru;
        } else {
            baru->next = headpro->next;
            headpro->next = baru;
        }
    }
}

void tambahtengahBT(int x, node* &headpro, node* &tailpro) {
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        if (headpro == tailpro) {
            tailpro->next = baru;
            tailpro = baru;
        } else {
            node* bantuan = new node;
            bantuan = headpro;
            while (bantuan->next != tailpro) {
                bantuan = bantuan->next;
            }
            baru->next = bantuan->next;
            bantuan->next = baru;
        }
    }
}

void tambahtengahDT(int x, node* &headpro, node* &tailpro) {
    node* baru = new node;
    baru->next = NULL;
    baru->info = x;
    if (headpro == NULL) {
        headpro = baru;
        tailpro = baru;
    } else {
        if (headpro == tailpro) {
            baru->next = headpro;
            headpro = baru;
        } else {
            node* bantuan = new node;
            bantuan = headpro;
            while (bantuan->next != tailpro) {
                bantuan = bantuan->next;
            }
            baru->next = bantuan->next;
            bantuan->next = baru;
        }
    }
}

// void tambahtengahpure(int x, node* &headpro, node* &tailpro) {
//     node* baru = new node;
//     baru->next = NULL;
//     baru->info = x;
//     if (headpro == NULL) {
//         headpro = baru;
//         tailpro = baru;
//     } else {
//         if (headpro == tailpro) {
//             baru->next = headpro;
//             headpro = baru;
//         } else {
//             node* bantuankiri = new node;
//             node* bantuankanan = new node;
//             bantuankiri = headpro;

//         }
//     }
// }

void hapusdepan(node* &headpro, node* &tailpro) {
    node* hapus = new node;
    if (headpro == NULL) {
        cout << "Kosong" << endl;
    } else {
        if (headpro == tailpro) {
            hapus = headpro;
            headpro = NULL;
            tailpro = NULL;
            delete(hapus);
        } else {
            hapus = headpro;
            headpro = headpro->next;
            delete(hapus);
            hapus->next = NULL;
        }
    }
}

void hapusbelakang(node* &headpro, node* &tailpro) {
    node* hapus = new node;
    if (headpro == NULL) {
        cout << "Kosong" << endl;
    } else {
        if (headpro == tailpro) {
            hapus = headpro;
            headpro = NULL;
            tailpro = NULL;
            delete(hapus);
        } else {
            node* bantuan = new node;
            bantuan = headpro;
            while (bantuan->next != tailpro) {
                bantuan = bantuan->next;
            }
            hapus = bantuan->next;
            tailpro = bantuan;
            delete(hapus);
            tailpro->next = NULL;
        }
    }
}

void hapustengahD(node* &headpro, node* &tailpro) {
    node* hapus = new node;
    if (headpro == NULL) {
        cout << "Kosong" << endl;
    } else {
        if (headpro->next == tailpro) {
            hapus = headpro;
            headpro = headpro->next;
            delete(hapus);
            hapus->next = NULL;
        } else {
            if (headpro == tailpro) {
                hapus = headpro;
                headpro = NULL;
                tailpro = NULL;
                delete(hapus);
            } else {
                hapus = headpro->next;
                headpro->next = hapus->next;
                delete(hapus);
                hapus->next = NULL;
            }
        }
    }
}

void hapustengahB(node* &headpro, node* &tailpro) {
    node* hapus = new node;
    if (headpro == NULL) {
        cout << "Kosong" << endl;
    } else {
        if (headpro->next == tailpro) {
            hapus = headpro->next;
            tailpro = headpro;
            delete(hapus);
            headpro->next = NULL;
        } else {
            if (headpro == tailpro) {
                hapus = headpro;
                headpro = NULL;
                tailpro = NULL;
                delete(hapus);
            } else {
                node* bantuan = new node;
                bantuan = headpro;
                while (bantuan->next != tailpro) {
                    bantuan = bantuan->next;
                }
                hapus = bantuan;
                node* bantuan2 = new node;
                bantuan2 = headpro;
                while (bantuan2->next != bantuan) {
                    bantuan2 = bantuan2->next;
                }
                bantuan2->next = bantuan->next;
                delete(hapus);
            }
        }
    }
}

void tampil(node* headpro) {
    if (headpro == NULL) {
        cout << "KOSONG" << endl;
    } else {
        node* bantuan = new node;
        bantuan = headpro;
        while (bantuan != NULL) {
            cout << "[" << bantuan->info << "]" << " -> ";
            bantuan = bantuan->next;
        }
        cout << "NULL" << endl;
    }
}


int main() {
    tambahdepan(10, head, tail);
    tambahdepan(20, head, tail);
    tambahdepan(30, head, tail);
    tambahdepan(40, head, tail);
    tambahdepan(50, head, tail);

    tambahbelakang(10, awal, akhir);
    tambahbelakang(20, awal, akhir);
    tambahbelakang(30, awal, akhir);
    tambahbelakang(40, awal, akhir);
    tambahbelakang(50, awal, akhir);

    tambahtengahBH(10, depan, belakang);
    tambahtengahBH(20, depan, belakang);
    tambahtengahBH(30, depan, belakang);
    tambahtengahBH(40, depan, belakang);
    tambahtengahBH(50, depan, belakang);

    tambahtengahDH(10, atas, bawah);
    tambahtengahDH(20, atas, bawah);
    tambahtengahDH(30, atas, bawah);
    tambahtengahDH(40, atas, bawah);
    tambahtengahDH(50, atas, bawah);

    tambahtengahBT(10, kiri, kanan);
    tambahtengahBT(20, kiri, kanan);
    tambahtengahBT(30, kiri, kanan);
    tambahtengahBT(40, kiri, kanan);
    tambahtengahBT(50, kiri, kanan);

    tambahtengahDT(10, maju, mundur);
    tambahtengahDT(20, maju, mundur);
    tambahtengahDT(30, maju, mundur);
    tambahtengahDT(40, maju, mundur);
    tambahtengahDT(50, maju, mundur);

    cout << "Tambah Depan Singular Linked List [Head] : " << head->info << endl;
    tampil(head);
    cout << "Tambah Belakang Singular Linked List [Head] : " << awal->info << endl;
    tampil(awal);
    cout << "Tambah Tengah Belakang Dari Head Singular Linked List [Head] : " << depan->info << endl;
    tampil(depan);
    cout << "Tambah Tengah Depan Dari Head Singular Linked List [Head] : " << atas->info << endl;
    tampil(atas);
    cout << "Tambah Tengah Belakang Dari Tail Singular Linked List [Head] : " << kiri->info << endl;
    tampil(kiri);
    cout << "Tambah Tengah Depan Dari Tail Singular Linked List [Head] : " << maju->info << endl;
    tampil(maju);
    
    cout << endl;
    cout << endl;

    hapusdepan(maju, mundur);
    hapusdepan(maju, mundur);

    hapusbelakang(kiri, kanan);
    hapusbelakang(kiri, kanan);

    hapustengahD(atas, bawah);

    hapustengahB(depan, belakang);

    cout << "Hapus Depan Singular Linked List [Head] : " << maju->info << endl;
    tampil(maju);
    cout << "Hapus Belakang Singular Linked List [Head] : " << kiri->info << endl;
    tampil(kiri);
    cout << "Hapus Tengah Dari Head Singular Linked List [Head] : " << atas->info << endl;
    tampil(atas);
    cout << "Hapus Tengah Dari Belakang Singular Linked List [Head] : " << depan->info << endl;
    tampil(depan);
}

// test