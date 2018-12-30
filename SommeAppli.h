#ifndef SOMMEAPPLI_H
#define SOMMEAPPLI_H

#include<wx/wx.h>
#include"SommeWin.h"

class SommeAppli : public wxApp
{
public:
        bool OnInit();

protected:
    SommeWin * window;
};

DECLARE_APP(SommeAppli)

#endif
