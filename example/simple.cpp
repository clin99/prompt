#include "prompt.hpp"

int main(){
  prompt::Prompt shell("ot> "); 

  shell.autocomplete("read_celllib");
  shell.autocomplete("asia");
  shell.autocomplete("american");

  std::string line;

  //while(shell.readline(line)){
  //  std::cout << "line = " << line << std::endl;
  //}
  //return 0;


  for(;;){
    shell.readline(line);
    std::cout << "line = " << line << std::endl;
    shell.add_history(line);
    // Hit enter to exit
    if(line.empty()){
      break;
    }
  }
  shell.save_history("simple_history");
}
