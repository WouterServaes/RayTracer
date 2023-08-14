
#include "Window/include/MainWindow.h"

#include <gtkmm-4.0/gtkmm.h>

using namespace Glib;
using namespace Gtk;

int main (int argc, char *argv[]) {
  
   auto application = Application::create();
  MainWindow  window;
  return application->make_window_and_run<MainWindow>(argc, argv);
}

