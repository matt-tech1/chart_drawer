#include "msvc/wx/setup.h"

class HelloWorldApp : public wxApp
{
public:
	virtual bool OnInit()
	{
		wxFrame* frame = new wxFrame((wxFrame*)NULL, -1, _T("Hello wxWidgets World"));
		frame->CreateStatusBar();
		frame->SetStatusText(_T("Hello World"));
		frame->Show(true);
		SetTopWindow(frame);
		return true;
	}
};

DECLARE_APP(HelloWorldApp)

int main() {
	return 0;
}