#ifndef DAIKTUSTRUKTUROS_H
#define DAIKTUSTRUKTUROS_H

using namespace std;

struct sarvai {       
    string pav = "-";
    int gynyba = 0;
    const string tipas = "sarvai";
} sarvai[100];
struct kardas {       
    string pav = "-";
    int puolimas = 0;
    const string tipas = "kardas";
} kardas[100];
struct skydas {       
    string pav = "-";
    int sansas = 0;
    const string tipas = "skydas";
} skydas[100];
struct potion {       
    string pav = "GYVYBES POTION";
    int kiekis = 0;
    int hp = 25;
    const string tipas = "gyvybe";
} potion;

#endif