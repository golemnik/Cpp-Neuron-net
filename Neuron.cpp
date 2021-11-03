#include <iostream>
#include <vector>
#include <math.h>

#include "Neuron_Header.h"
#include "Link_Header.h"

using namespace std;


Neuron::Neuron(int Conn_neurons_up, int Conn_neurons_down) {
    Up_links.resize(Conn_neurons_up); // amount of neurons in previos lay connected to this one -> Conn_neurons
    Down_links.resize(Conn_neurons_down);
}

double Neuron::Summ_signals() {
    double signal = 0;
    for (int i = 0; i < Up_links.size(); i++) {
        signal = signal + Up_links[i].get_signal_to_end();
    }
    return signal;
}

double Neuron::Activ_func() {
    double func = Summ_signals();
    func = 1.0 / (1.0 + exp(-func));
    return func;
}

double Neuron::mistake_func() {
    double mistake = 0;
    return mistake;
}

void Neuron::add_up_link(Link up_link) {
    Up_links.push_back(up_link);
}

void Neuron::add_down_link(Link down_link) {
    Down_links.push_back(down_link);
}