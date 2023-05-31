#include <iostream>
using namespace std;
// Opens 15 Persona 5 - Last Surprise tabs in the foreground in the users default browser.
#include <windows.h>
using namespace std;

int main()
{
  int resp;
  cout << "Let us start the game?[yes = 1, no = 0]" << endl;
  cin >> resp;

  if(resp == 1)
  {
      cout << "The Contract has been sealed" << endl;
  }
  else if(resp == 0)
  {
      cout << "I must ask that you leave..." << endl;
  }
  else
  {
      cout << "Unfortunately I cannot allow you to partake of this game" << endl;
  }
  
  
  for(int i=0; i<15; i++)
  {
    ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=5-pYuiWoE-Q&t=1s", NULL, NULL, SW_SHOWNORMAL);
  }
  
  system ("pause");

  return 0;
}
 