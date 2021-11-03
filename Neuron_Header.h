#ifndef _Neuron_Header_
#define _Neuron_Header_

class Link;

class Neuron {
private:
    vector <Link&> Up_links; //connected links
    vector <Link&> Down_links; //connected links
public:
    Neuron(int, int);

    double Summ_signals();

    double Activ_func();

    double mistake_func();

    void add_up_link(Link);

    void add_down_link(Link);
};

#endif
