#ifndef SOMMEWIN_H
#define SOMMEWIN_H

#include<wx/wx.h>

enum
{
BUTTONCOMPUTE_ID
};

class SommeWin : public wxFrame
{
public:
    SommeWin();

protected:
    wxPanel * panel;
    wxButton *buCompute;
    wxStaticText *textX,*textY,*textS;
    wxTextCtrl *editX,*editY,*editS;

    wxStaticBox *static0;
    wxCheckBox *chck0;

    void compute(wxCommandEvent &event);

    DECLARE_EVENT_TABLE()
};

#endif
