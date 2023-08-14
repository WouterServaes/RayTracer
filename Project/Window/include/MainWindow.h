#pragma once
#include <gtkmm-4.0/gtkmm.h>

class MainWindow: public Gtk::Window
{ 
public:
    MainWindow();
    virtual ~MainWindow();
private:    
Gtk::Button m_button;
};