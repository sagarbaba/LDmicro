#ifndef _COMPONENT_FUNCTIONS
#define _COMPONENT_FUNCTIONS

//Few Prerequisites
extern HFONT      MyNiceFont;
extern HFONT      MyFixedFont;
extern HWND       OkButton;
extern HWND       CancelButton;
extern HINSTANCE* ComponentInstance;

extern BOOL DlgDone;
extern BOOL DlgCancel;
extern HWND ComponentDialog;

// Common Functions

void FontNice(HWND h);
void FontFixed(HWND h);
HWND* CreateDialogWindow(LPCTSTR title, int x, int y, int width, int height, int style);
void ShowDialogWindow(void);
BOOL ProcessDialogWindow(void);

/*Initialization Functions*/
int InitSwitch(void* ComponentAddress);
int InitRelay(void* ComponentAddress);

/*Event Handlers*/
void HandleSwitchEvent(void* ComponentAddress, int Event, BOOL SimulationStarted,
    void* ImageLocation, UINT ImageId, HWND* h);
void HandleRelayEvent(void* ComponentAddress, int Event, BOOL SimulationStarted,
    void* ImageLocation, UINT ImageId, HWND* h);

/*Request Handlers*/
double SwitchVoltChanged(void* ComponentAddress, BOOL SimulationStarted, int index,
    double Volt, int Source, void* ImageLocation);
double RelayVoltChanged(void* ComponentAddress, BOOL SimulationStarted, int index,
    double Volt, int Source, void* ImageLocation);

/*Program Reference Functions*/
void SetSwitchIds(int*, void*);
void SetRelayIds(int*, void*);

// Relay Functions

#endif
