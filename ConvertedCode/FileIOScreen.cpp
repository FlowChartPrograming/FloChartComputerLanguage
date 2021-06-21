


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{
    class FileInputOutputScreen
    {
        const long ShowScreen = 1;
        const long HideScreen = 0;

        // 2********************************************************************************************
        void ToolStripButton2_Click( EventArgs e)
        {
            // Open File
            const  string ButtonStartedName = " Opening FlowChart "; // & MyFlowChartNameSpace.F_C.DrillDown_FileName & "."
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.MyOpen("read");
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }

        // **************************************************************************
        void ToolStripButtonSaveFileAs_Click( EventArgs e)
        {
            // Save file
            const  string ButtonStartedName = " Saving the FlowChart into "; // '& MyFlowChartNameSpace.F_C.DrillDown_FileName & "."
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.MyOpen("write");
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }
        // ***********************************************************************
        void ToolStripButtonFlowChartToSourceCode_Click( EventArgs e)
        {
            // Compile
            const  string ButtonStartedName = " Converting from the FlowChart to Source Code.  File Save as "; // '& MyFlowChartNameSpace.F_C.DrillDown_FileName & "."
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.MyCompile(FlowChartScreen.PictureBox1);
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }

        // 1**************************************************************
        // Show FlowChart Screen
        void ToolStripButtonShowFlowChart_Click( EventArgs e)
        {
            const  string ButtonStartedName = " Showing FlowChart Screen.";
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.ShowAllForms(ShowScreen, HideScreen, HideScreen, HideScreen, HideScreen, HideScreen);
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
            MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }
        // *************************************************************
        void ToolStripButtonSourceCodeToFlowChartCode_Click( EventArgs e)
        {
            // flow10'Private Sub FileInputOutput_ButtonSourceToFlowChart_Click(sender As Object, e As EventArgs)
            // Decompile
            const  string ButtonStartedName = "Converting from souce code into the FlowChart.";
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.MyDeCompile(FlowChartScreen.PictureBox1, "");
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }

        void ToolStripButtonShowOptionScreen_Click( EventArgs e)
        {
            const  string ButtonStartedName = " Showing Option Screen.";
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, HideScreen, ShowScreen, HideScreen, HideScreen, HideScreen);
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }

        void ToolStripButtonShowSymbolScreen_Click( EventArgs e)
        {
            const  string ButtonStartedName = " Showing Symbol Screen.";
            if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
                return;
            MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, ShowScreen, HideScreen, HideScreen, HideScreen, HideScreen);
            MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName); MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
            MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        }
    }
}