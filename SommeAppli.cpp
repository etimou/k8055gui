#include"SommeAppli.h"

IMPLEMENT_APP(SommeAppli)

bool SommeAppli::OnInit()
{
window=new SommeWin();
window->Show(TRUE);
SetTopWindow(window);
return true;
}
