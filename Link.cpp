#include <iostream>
#include <vector>
#include <math.h>

#include "Link_Header.h"
#include "Neuron_Header.h"

using namespace std;

Link::Link(Neuron& input_Neuron, Neuron& output_Neuron) :
    ptr_input_Neuron(input_Neuron),
    ptr_output_Neuron(output_Neuron)
{
    ptr_input_Neuron.add_down_link(*this);
    ptr_output_Neuron.add_up_link(*this);
    weight = 0;
}

void Link::set_weight(double new_weight) {
    weight = new_weight;
}

double Link::get_signal_to_end() {
    return ptr_input_Neuron.Activ_func() * weight;
}

double Link::get_signal_to_beg() {
    return ptr_output_Neuron.Activ_func() * weight;
}
