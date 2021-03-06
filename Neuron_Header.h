#ifndef _Neuron_Header_
#define _Neuron_Header_

#include <vector>

class Link;

class Neuron {
private:
    std::vector <Link*> Up_links; //connected links
    std::vector <Link*> Down_links; //connected links

    double input_signal;
    double signal;
    double output_signal;

    double input_mistake;
    double mistake;
    double output_mistake;

    double Active_func_vard(double input);

public:
    Neuron(int, int);

    Neuron();

    // phase 1 (from beg to end)

    double Get_signal();

    void Set_signal(double new_signal);

    double Set_input_signal(double input);

    double Activ_func();

    double Get_output_signal();
    
    void Summ_signals_from_UpLinks();
    
    void add_up_link(Link&);

    // - - - -

    double Get_mistake();

    void Set_mistake(double new_mistake);

    double Set_input_mistake(double input);

    double Get_output_mistake();

    double Mistake_func();

    void Summ_signals_from_DownLinks();
    
    void add_down_link(Link&);

    // - - - - -

    
};

#endif
