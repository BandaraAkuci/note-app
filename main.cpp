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

    tampil(head);
    tampil(awal);
    tampil(depan);
    tampil(atas);
}

// test