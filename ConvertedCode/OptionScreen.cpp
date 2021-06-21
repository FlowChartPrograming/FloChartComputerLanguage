


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{
    public class OptionScreen
{
    const long ShowScreen = 1;
    const long HideScreen = 0;
    const long LeaveScreenAlone = -1;

    // todo : No selection on the line/widths on the option screen

    // 5********************************************
    void ToolStripButton11_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Checking All information.";
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.Abug(2000, " Click Check All Button ", "Started ", DateTime.Now);
        MyFlowChartNameSpace.F_C.CheckAll();
        MyFlowChartNameSpace.F_C.Abug(2001, " Click Check All Button ", "Finished", DateTime.Now);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    // 1*********************************************
    void ToolStripButton1_Click( EventArgs e)
    {
        const  string ButtonStartedName = "Displaying FlowChart Screen.";
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.ShowAllForms(ShowScreen, HideScreen, HideScreen, LeaveScreenAlone, LeaveScreenAlone, LeaveScreenAlone);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // 2************************************************
    void ToolStripButtonSymbolForm_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying Symbol Screen.";
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.AInfo(2003, "Switching to Symbol screen from Option Screen ", MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName, ButtonStartedName);
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, ShowScreen, HideScreen, LeaveScreenAlone, LeaveScreenAlone, LeaveScreenAlone);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // 3****************************************************
    void ToolStripButtonDeleteErrorMsgs_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Deleting all Error Messages in the FlowChart.";
        MyFlowChartNameSpace.F_C.Abug(2004, "", "", ButtonStartedName);
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DeleteAllErrorMessages();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // 4******************************************************
    void ToolStripButtonDeleteUnusedSymbols_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Deleting all symbols that were not used in the FlowChart.";
        MyFlowChartNameSpace.F_C.Abug(2005, "", "", ButtonStartedName);
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyRemoveAllUnusedSymbols();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // 6*******************************************************
    void ToolStripButtonDump_Click( EventArgs e)
    {
        const  string ButtonStartedName = @".   CHECK:   \symbolDump.txt and also \FlowChartDump.txt";
        MyFlowChartNameSpace.F_C.Abug(2006, "", "", ButtonStartedName);
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        MyFlowChartNameSpace.F_C.Dump3(-1, "ButtonPressed");
        MyFlowChartNameSpace.F_C.Dump1();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void OptionScreen_Resize( EventArgs e)
    {
        const  string ButtonStartedName = "Resize Option Screen";
        MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName);
        Resizeme();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    // Private Sub OptionScreen_Load(sender As Object, e As EventArgs) Handles MyBase.Load
    // ' Get them in the right place to start with
    // Const ButtonStartedName As  string = "Option Screen Loading"
    // If MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) = False Then Exit Sub
    // Resizeme()
    // End Sub


    void Resizeme()
    {
        this.CheckedListBoxOptionSelection.Top = this.ToolStripOption.Top + this.ToolStripOption.Height + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        this.ComboBoxDebug.Top = this.ToolStripOption.Top + this.ToolStripOption.Height + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;

        this.CheckedListBoxOptionSelection.Width = System.Convert.Tolong(this.Width / (double)3 - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls);
        this.ComboBoxDebug.Width = System.Convert.Tolong((this.Width / (double)3) * 2 - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls * 10);

        this.ComboBoxDebug.Left = this.CheckedListBoxOptionSelection.Left + this.CheckedListBoxOptionSelection.Width + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls * 4;

        this.CheckedListBoxOptionSelection.Height = this.Height - this.CheckedListBoxOptionSelection.Top - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls * 10;

        this.ListBoxLanguage.Left = this.CheckedListBoxOptionSelection.Left + this.CheckedListBoxOptionSelection.Width + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        this.ListBoxLanguage.Top = this.ComboBoxDebug.Top + this.ComboBoxDebug.Height + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        this.ListBoxLanguage.Height = this.CheckedListBoxOptionSelection.Top + this.CheckedListBoxOptionSelection.Height - this.ListBoxLanguage.Top;
        this.ListBoxLanguage.Width = (this.Width - this.CheckedListBoxOptionSelection.Width - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls) / (double)2;

        this.ListBoxDialect.Left = this.ListBoxLanguage.Left + this.ListBoxLanguage.Width + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        this.ListBoxDialect.Top = this.ComboBoxDebug.Top + this.ComboBoxDebug.Height + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        this.ListBoxDialect.Height = this.ListBoxLanguage.Height;
        this.ListBoxDialect.Width = this.ListBoxLanguage.Width;
    }






    // removed when I changed to have sub items (Dialects) of the computer languages 
    void listboxLanguage_SelectedIndexChanged( EventArgs e)
    {
         string X;
        FlowChart011.MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.C_L_LanguageClassName = this.ListBoxLanguage.SelectedItem;
        X = FlowChart011.MyFlowChartNameSpace.F_C.FindLanguageClassName(FlowChart011.MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.C_L_Directory);
        FlowChart011.MyFlowChartNameSpace.F_C.MakeDialectListFromFile(X);
    }

    void listboxDialect_SelectedIndexChanged( EventArgs e)
    {
        FlowChart011.MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.C_L_DialectName = this.ListBoxDialect.SelectedItem;
        FlowChart011.MyFlowChartNameSpace.F_C.ListBoxLanguageDialect();
    }
}
