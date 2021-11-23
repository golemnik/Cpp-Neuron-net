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

Neuron::Neuron() {
    Up_links.resize(0); // amount of neurons in previos lay connected to this one -> Conn_neurons
    Down_links.resize(0);
}

// - - - - - -

double Neuron::Summ_input_signals_from_UpLinks() {
    for (size_t i = 0; i < Up_links.size(); i++) {
        input_signal = input_signal + Up_links[i]->get_signal_to_end();
    }
    return input_signal;
}

double Neuron::Set_input_signal(double input) {
    return input_signal = input;
}

double Neuron::Activ_func() {
    return output_signal = Active_func_vard(input_signal);
}

double Neuron::Get_output_signal() {
    return output_signal;
}

// - - - - - -

double Neuron::Active_func_vard(double input) {
    return 1.0 / (1.0 + exp(-input));
}

// - - - - - - 

double Neuron::Mistake_func() {
    output_mistake = Active_func_vard(input_mistake)*(1 - Active_func_vard(input_mistake));
    return output_mistake;
}

double Neuron::Set_unput_mistake(double input) {
    return input_mistake = input;
}

double Neuron::Get_output_mistake() {
    return output_mistake;
}

// - - - - - -

double Neuron::Summ_signals_to_beg(double signal) {
    for (size_t i = 0; i < Down_links.size(); i++) {
        signal = signal + Down_links[i]->get_signal_to_end();
    }
    return signal;
}



void Neuron::add_up_link(Link& up_link) {
    Up_links.push_back(&up_link);
}

void Neuron::add_down_link(Link& down_link) {
    Down_links.push_back(&down_link);
}