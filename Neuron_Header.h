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

    double Summ_signals();

    double Activ_func();

    double mistake_func();

    void add_up_link(Link&);

    void add_down_link(Link&);
};

#endif
