#include <iostream>
#include <string>
using namespace std;

struct node {
    int info;
    node* next;
};

node* head = NULL;
node* tail = NULL;

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


void tampildepan(node* headpro) {
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

    tampildepan(head);
}