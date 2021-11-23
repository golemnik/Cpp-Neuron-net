#ifndef _Neuron_Header_
#define _Neuron_Header_

#include <vector>

class Link;

class Neuron {
private:
    std::vector <Link*> Up_links; //connected links
    std::vector <Link*> Down_links; //connected links
public:
    Neuron(int, int);

    Neuron();

    double Summ_signals_to_end(double);

    double Activ_func(double);

    double Summ_signals_to_beg(double);

    double mistake_func(double);

    void add_up_link(Link&);

    void add_down_link(Link&);
};

#endif
