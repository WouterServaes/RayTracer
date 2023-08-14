
#include <QWindow.h>

int main (int argc, char *argv[]) {
  
  //  auto application = Application::create();
  // MainWindow  window;
  // return application->make_window_and_run<MainWindow>(argc, argv);

  auto window = QWindow();
  window.create();
  while (true) {
  
  };

  return 0;
}

