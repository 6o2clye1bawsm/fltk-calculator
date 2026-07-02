#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Output.H>
#include <FL/fl_callback_macros.H>

int main(int argc, char **argv) {
  Fl_Window *window = new Fl_Window(160, 240);
  
  Fl_Output *output = new Fl_Output(0,200,160,40,"");
  
  Fl_Button *buttonM = new Fl_Button(0, 0, 40, 40, "*");
  Fl_Button *buttonD = new Fl_Button(40, 0, 40, 40, "/");
  Fl_Button *buttonA = new Fl_Button(80, 0, 40, 40, "+");
  Fl_Button *buttonS = new Fl_Button(120, 0, 40, 40, "-");

  Fl_Button *buttonDecimal = new Fl_Button (80, 160, 40, 40, ".");
  Fl_Button *button0 = new Fl_Button(0, 160, 80, 40, "0");
  FL_METHOD_CALLBACK_0(button0, { output->value("0") } );
  Fl_Button *button1 = new Fl_Button(0, 120, 40, 40, "1");
  Fl_Button *button2 = new Fl_Button(40, 120, 40, 40, "2");
  Fl_Button *button3 = new Fl_Button(80, 120, 40, 40, "3");
  Fl_Button *button4 = new Fl_Button(0, 80, 40, 40, "4");
  Fl_Button *button5 = new Fl_Button(40, 80, 40, 40, "5");
  Fl_Button *button6 = new Fl_Button(80, 80, 40, 40, "6");
  Fl_Button *button7 = new Fl_Button(0, 40, 40, 40, "7");
  Fl_Button *button8 = new Fl_Button(40, 40, 40, 40, "8");
  Fl_Button *button9 = new Fl_Button(80, 40, 40, 40, "9");
   
  Fl_Button *buttonDel = new Fl_Button(120,40,40,80,"S");
  Fl_Return_Button *buttonReturn = new Fl_Return_Button(120,120,40,80,"");
  
  
  output->value("Output test");

  window->end();
  window->show(argc, argv);
  return Fl::run();
}
