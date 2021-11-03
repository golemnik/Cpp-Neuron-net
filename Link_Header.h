#ifndef _Link_Header_
#define _Link_Header_

class Neuron;

class Link
{
private:
    double weight; // signal = weight * input

    Neuron& ptr_input_Neuron; // ссылка на отправлающий нейрон
    Neuron& ptr_output_Neuron; // ссылка на принимающий нейрон

public:
    Link(Neuron&, Neuron&);

    void set_weight(double);

    double get_signal_to_end();

    double get_signal_to_beg();
};

#endif