#include"SommeWin.h"
#include<wx/colour.h>

SommeWin::SommeWin()
    : wxFrame(NULL,-1,_("Distance"))
{
panel= new wxPanel(this);

textX= new wxStaticText(panel,-1,_("Valeur de X : "),wxPoint(10,20),wxSize(100,20));
textY= new wxStaticText(panel,-1,_("Valeur de Y : "),wxPoint(10,50),wxSize(100,20));
textS= new wxStaticText(panel,-1,_("X+Y vaut : "),wxPoint(10,80),wxSize(100,20));

editX=new wxTextCtrl(panel,-1,_(""),wxPoint(240,20),wxSize(100,20));
editY=new wxTextCtrl(panel,-1,_(""),wxPoint(120,50),wxSize(100,20));
editS=new wxTextCtrl(panel,-1,_(""),wxPoint(120,80),wxSize(100,20));
editS->SetEditable(false);
editS->SetBackgroundColour(wxColour(200,200,200));
buCompute=new wxButton(panel,BUTTONCOMPUTE_ID,_("CALCULER"),wxPoint(240,50));

chck0=new wxCheckBox(static0,-1,_("A0"), wxPoint(360,20));
static0=new wxStaticBox(panel,-1,_("Inputs"), wxPoint(400,20),wxSize(100,100));

}

void SommeWin::compute(wxCommandEvent &event)
{
double x,y,s;
bool okX,okY;
wxString sS;
wxString sX=editX->GetValue();
okX=sX.ToDouble(&x);
wxString sY=editY->GetValue();
okY=sY.ToDouble(&y);

if(okX && okY)
    {
    s=x+y;
    sS.sprintf(_("%lf"),s);
    editS->SetValue(sS);
    }
    else
    {
    editS->SetValue(_(""));
    wxMessageBox(_("Données erronnées"),_("ERREUR"));
    }
}

BEGIN_EVENT_TABLE(SommeWin,wxFrame)
    EVT_BUTTON(BUTTONCOMPUTE_ID,SommeWin::compute)
END_EVENT_TABLE()

