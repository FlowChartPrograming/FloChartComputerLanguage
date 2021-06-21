


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{

    class FlowChartScreen
    {
    const long ShowScreen = 1;
    const long HideScreen = 0;
    const long LeaveScreenAlone = -1;
    // flow10'This belongs in status or option screen*************************???????
    void ButtonCheck_Click( EventArgs e)
    {
        const  string ButtonStartedName = " CheckAll.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.CheckAll();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }



    // ****************************************************************
    // 10 This is used to redraw the FlowChart (Cause it gets messed up, and I have to fix that one of these days)
    void ToolStripButtonRedraw_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Redraw.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.Clear_Screen(this.PictureBox1);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    // ****************************************************************
    // 11 This is used to enlarge the flowchart. (You see a part of the picture)
     void ToolStripButtonZoomIn_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Zoom in.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyZoomIn(e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // ****************************************************************
    // 12 This is used to reduce the flowchart on the screen (You can see more of the picture)
    void ToolStripButtonZoomOut_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Zoom Out.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyZoomOut(e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }


    // ****************************************************************
    // 8 This is used to put a constant (entered in the textbox on the toolstrip)
    // You should/(Must?) place it on a path (end points or turn of a path)
     void ToolStripButtonAddConstant_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Add Constant.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdaddconstant";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

     void FlowChartScreen_Load( EventArgs e)
    {
        const  string ButtonStartedName = "Loading Start Screen";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.Init();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, HideScreen, ShowScreen, HideScreen, HideScreen, HideScreen);
    }



    // ****************************************************************
    // This goto the FlowChartScreen
     void ButtonSymbolForm_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Showing the symbol screen.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdaddsymbol";
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, ShowScreen, HideScreen, LeaveScreenAlone, LeaveScreenAlone, LeaveScreenAlone);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }


    // ****************************************************************
    // 6 This moves what ever is closest to where the mouseUP is
     void ButtonMoveObject_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Move Object.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdmove";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    // ****************************************************************
    // This will delete what ever is closest to the mouse down
    // Advise that you move first to somewhere that is clear, and then delete it.
     void ButtonDeleteobject_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Delete Object.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmddelete";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }



     void HScrollBar1_Scroll( ScrollEventArgs e)
    {
        const  string ButtonStartedName = "FLowChart Screen H Scroll";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.Clear_Screen(this.PictureBox1);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

     void VScrollBar1_Scroll( ScrollEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen V scroll";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.Clear_Screen(this.PictureBox1);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


     void PictureBox1_MouseDown( MouseEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Mouse Down";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "mousedown";
        MyFlowChartNameSpace.F_C.MyMouseDown(e); // Me.PictureBox1, e)
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

     void PictureBox1_MouseUp( MouseEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Mouse Up";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "mouseup";
        MyFlowChartNameSpace.F_C.MyMouseUp(this.PictureBox1, e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

     void PictureBox1_MouseMove( MouseEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Mouse Move";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "mousemove";
        MyFlowChartNameSpace.F_C.MyMouseMove(this.PictureBox1, e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName + ".  Command set to " + MyFlowChartNameSpace.F_C.MyCmdModeString);
    }

     void PictureBox1_MouseWheel( MouseEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Mouse Wheel Moved";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyMouseWheel(e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName + ".  Scale set to " + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.MyFlowChartScale.ToString);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    // ****************************************************************
    // 3 This goes to the FileInputOutput screen
     void ToolStripButtonOpen_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying File Input/Output and status'.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, HideScreen, HideScreen, ShowScreen, LeaveScreenAlone, LeaveScreenAlone);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
    // ****************************************************************
    // 2This goes to the optionScreen
     void ToolStripButtonOptions_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying Options.";

        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, HideScreen, ShowScreen, LeaveScreenAlone, LeaveScreenAlone, LeaveScreenAlone);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
    // ****************************************************************
    // 4 This set the mode to add a path when clicking the first end of the line, holding to the last end of the line
     void ToolStripButtonAddPath_Click( EventArgs e)
    {
        const  string ButtonStartedName = " AddPath.";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdaddpath";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }



     void ToolStripDropDownSelectSymbolX_Click( EventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Select Symbol X Click";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = this.ToolStripDropDownSelectSymbol.Text;
        SymbolScreen.ToolStripDropDownSelectSymbol.Text = MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName;
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

     void FlowChartScreen_Resize( EventArgs e)
    {
        // FIXED ?this caused recursion and needs to be repaired
        const  string ButtonStartedName = "FlowChart Screen Redraw from Resize";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        ResizeMe();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

     void ResizeMe()
    {
        long X;
        X = MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;

        this.VScrollBar1.Left = X;
        this.HScrollBar1.Left = this.VScrollBar1.Width + X;
        this.PictureBox1.Left = this.HScrollBar1.Left;

        this.HScrollBar1.Top = this.ToolStripFlowChart.Height + X;
        this.VScrollBar1.Top = this.HScrollBar1.Top + this.HScrollBar1.Height;
        this.PictureBox1.Top = this.HScrollBar1.Top + this.HScrollBar1.Height;

        this.HScrollBar1.Width = this.Width - (this.VScrollBar1.Left + this.VScrollBar1.Width) - X * 6;
        this.PictureBox1.Width = this.Width - (this.VScrollBar1.Left + this.VScrollBar1.Width) - X * 6;

        this.VScrollBar1.Height = this.Height - this.VScrollBar1.Top - X * 10;
        this.PictureBox1.Height = this.VScrollBar1.Height;

        // Now Set the scroll bars 

        this.HScrollBar1.Minimum = 1;
        this.HScrollBar1.Maximum = 1000;
        this.HScrollBar1.LargeChange = 100;
        this.HScrollBar1.SmallChange = 10;

        this.VScrollBar1.Minimum = this.HScrollBar1.Minimum;
        this.VScrollBar1.Maximum = this.HScrollBar1.Maximum;
        this.VScrollBar1.LargeChange = this.HScrollBar1.LargeChange;
        this.VScrollBar1.SmallChange = this.HScrollBar1.SmallChange;


        this.HScrollBar1.Enabled = false;
        this.VScrollBar1.Enabled = false;
    }

     void ToolStripDropDownSelectSymbol_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Select Symbol Drop Down Button";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        this.ToolStripDropDownSelectSymbol.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }


    void ToolStripTextBoxMyInputText_KeyPress( KeyPressEventArgs e)
    {
        const  string ButtonStartedName = " MyDeCompile.";
        MyFlowChartNameSpace.F_C.WhatKey(e); // Do something with any special keys
        if (e.KeyChar != Constants.vbCr)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.FlowChartTextBox = this.ToolStripTextBoxMyInputText.ToString;
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyDeCompileLine(MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.FlowChartTextBox); // MyUniverse.MySS.Inputs.KeyFile)
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        this.ToolStripTextBoxMyInputText.Text = ""; // clear out the line that was just compiled
        this.LabelProgramStatus.Text = ""; // Blank out the syntax also
    }

    void ToolStripDropDownSelectSymbol_TextChanged(string sender, EventArgs e)
    {
        // todo see why a new symbol is not showing up when a symbol is select with the drop down
        if (MyFlowChartNameSpace.F_C.ProgramAlive == false)
            return;
        if (this.ToolStripDropDownSelectSymbol.Text != sender.ToString())
        {
            this.ToolStripDropDownSelectSymbol.Text = sender.ToString();
            return;
        }
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = sender.ToString();
        if (SymbolScreen.ToolStripDropDownSelectSymbol.Text != sender.ToString())
            SymbolScreen.ToolStripDropDownSelectSymbol.Text = sender.ToString();
    }

    void ToolStripButtonMoveHand_Click( EventArgs e)
    {
        const  string ButtonStartedName = "FlowChart Screen Hand Movement";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdmovehand";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
}
