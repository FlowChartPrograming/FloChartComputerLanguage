


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{
    class SymbolScreen
    {
        const long ShowScreen = 1;
        const long HideScreen = 0;


    void SymbolScreen_Resize()
    {
        const  string ButtonStartedName = "Symbol Screen Resize";
        // MyFlowChartNameSpace.F_C.FindingMyBugs(100)
        if (MyFlowChartNameSpace.flowchartmethods.ButtonStarted(ButtonStartedName) == false)
            return;
        ResizeMe();
        MyFlowChartNameSpace.F_C.Clear_Screen(this.PictureBox1); // todo Check that this should redraw the screen????????
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void PictureBox1_MouseDown( MouseEventArgs e)
    {
        const  string ButtonStartedName = "Mouse Down";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "MouseDown";
        MyFlowChartNameSpace.F_C.MyMouseDown(e); // Me.PictureBox1, e)
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void PictureBox1_MouseUp( MouseEventArgs e)
    {
        // Dim Temp As long
        const  string ButtonStartedName = "Mouse Up";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "MouseUp";
        MyFlowChartNameSpace.F_C.MyMouseUp(this.PictureBox1, e);
        MyFlowChartNameSpace.F_C.Clear_Screen(this.PictureBox1);
        MyFlowChartNameSpace.F_C.MyDoEvents();
        // Temp = MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantSymbolCenter '+ MyFlowChartNameSpace.F_C..myuniverse.SysGen.Constants.constantSymbolCenter
        if (this.ToolStripDropDownSelectSymbol.ToString == "")
            MyFlowChartNameSpace.F_C.Abug(2007, "Symbol Name is not select ? ", "What Goes Here?", "");
        else
            MyFlowChartNameSpace.F_C.PaintEach(this.PictureBox1, MyFlowChartNameSpace.F_C.ZeroZero, this.ToolStripDropDownSelectSymbol.ToString, "default");

        // clear out the symbol and then fill it up
        MyFlowChartNameSpace.F_C.ClearSymbolDisplay();

        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void PictureBox1_MouseMove( MouseEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen  Mouse Movement";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.MyMouseAndDrawing.MouseStatus = "MouseMove";
        MyFlowChartNameSpace.F_C.MyMouseMove(this.PictureBox1, e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
    }

    void ComboBoxColor_SelectedIndexChanged( EventArgs e)
    {
        const  string ButtonStartedName = "Color Index Changed";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.ChangeOptionScreenSelectedIndex("Color", this.ToolStripDropDownButtonColor, sender.ToString());
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void ComboBoxDataType_SelectedIndexChanged( EventArgs e)
    {
         string DataTypeName;
        long I;
        const  string ButtonStartedName = "Data Type index changed.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;

        // todo Possible Error
        // todo Double check that I want the data type to be a color name
        // todo Put here the drop dows of items that can be changed for this Data type
        DataTypeName = this.ToolStripDropDownButtonColor.Text;

        I = MyFlowChartNameSpace.F_C.FindiSAM_IN_Table("DataType", "DoNotAdd"
                             , MyFlowChartNameSpace.F_C.DataType_FileName
                             , MyFlowChartNameSpace.F_C.DataType_Name_iSAM
                             , DataTypeName);
        if (I == -1)
            return;
        // show (to allow updating)
        this.TextBoxNamedDescription.Text = MyFlowChartNameSpace.F_C.DataType_TableDescribtion(I);
        this.ToolStripDropDownNumberOfBytes.Text = MyFlowChartNameSpace.F_C.DataType_TableNumberOfBytes(I);


        // ERROR ???
        // Should this look up the name of the color?
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedColor = Str(MyFlowChartNameSpace.F_C.DataType_TableColorIndex(I));

        this.ToolStripDropDownLineWidth.Text = MyFlowChartNameSpace.F_C.DataType_TableWidth(I).ToString;
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void ComboBoxDataType_SelectedIndexChanged_1( EventArgs e)
    {
        long Temp;
        const  string ButtonStartedName = " DataType Index changed.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        Temp = MyFlowChartNameSpace.F_C.FindIndexIniSAMTable("Datatype", "Donotadd", MyFlowChartNameSpace.F_C.DataType_FileName, MyFlowChartNameSpace.F_C.DataType_Name_iSAM, this.ToolStripDropDownButtonColor.Text);

        this.TextBoxNamedDescription.Text = MyFlowChartNameSpace.F_C.DataType_TableDescribtion(Temp);
        this.ToolStripDropDownButtonColor.Text = MyFlowChartNameSpace.F_C.Color_TableName(MyFlowChartNameSpace.F_C.DataType_TableColorIndex(Temp));

        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedColor = this.ToolStripDropDownButtonColor.Text;

        this.ToolStripDropDownInputOutput.Text = "both"; // Just to make it something
        this.ToolStripDropDownNumberOfBytes.Text = MyFlowChartNameSpace.F_C.DataType_TableNumberOfBytes(Temp);
        this.ToolStripDropDownLineWidth.Text = MyFlowChartNameSpace.F_C.DataType_TableWidth(Temp).ToString;
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void Timer1_Tick( EventArgs e)
    {
        const  string ButtonStartedName = " Timer Ticked.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.TimerTicked(sender, e);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void TextBoxProgramText_TextChanged( EventArgs e)
    {
        string[] Temp = new string[257];
        const  string ButtonStartedName = " Making New Syntax from change in program code.";
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        if (this.TextBoxNamedProgramText.Text == " Program Macro Code")
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);

        MyFlowChartNameSpace.F_C.PathNames = MyFlowChartNameSpace.F_C.MyParse(Temp, this.TextBoxNamedProgramText.Text);
        this.TextBoxNamedSyntax.Text = MyFlowChartNameSpace.F_C.MakeStatementSintax(Temp);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void ToolStripButton1_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying FlowChart.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.ShowAllForms(ShowScreen, HideScreen, HideScreen, HideScreen, HideScreen, HideScreen);
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdaddsymbol"; // Always Go to Add Symbol incase you actually did anything to a symbol and changed the Command  string Mode
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    // ******************************************************************
    void ToolStripButton3_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Add Point.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.AddPointNameToDropDown(this.ToolStripTextBox1.Text);
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdAddPoint";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // ******************************************************************

    void ToolStripButtonNewSymbol_Click( EventArgs e)
    {
        // flow10'If Me.ToolStripTextBox1.ToString = "" Then Exit Sub
        // flow10'Me.TextBoxSymbolName.Text = Me.ToolStripTextBox1.ToString
        const  string ButtonStartedName = " New Symbol add ."; // ->" & Me.ToolStripTextBox1.ToString & "-<"
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;

        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = ""; // Get rid of old symbol name

        this.TextBoxNamedDescription.Text = "";
        this.TextBoxNamedProgramText.Text = "";
        this.TextBoxNamedSymbolName.Text = "";
        this.TextBoxNamedNameOfFile.Text = "";
        this.TextBoxNamedNotes.Text = "";
        this.TextBoxNamedOpCode.Text = "";
        this.TextBoxNamedStroke.Text = "";
        this.ToolStripDropDownNumberOfBytes.Text = "";
        this.ComboBoxPointNameList.Text = "";
        this.ComboBoxLineNameList.Text = "";
        this.TextBoxSymbolVersionAuthor.Text = "";
        this.TextBoxNamedSyntax.Text = "";
        this.ToolStripDropDownLineWidth.Text = "";
        MyFlowChartNameSpace.F_C.MyDoEvents();
        // MyFlowChartNameSpace.F_C.AddNewSymbol(Me.ToolStripTextBox1.ToString) 'todo This is not passing the correct symbol name of the existing list box
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }
    // ******************************************************************
    void ToolStripButtonAddLine_Click( EventArgs e)
    {
        const  string ButtonStartedName = "Add Line.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.AddLineNameToDropDown(this.ToolStripTextBox1.Text);

        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdAddLine";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    // ******************************************************************
    void ToolStripButtonMove_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Move.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmdMove";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
    // ******************************************************************
    void ToolStripButtonDelete_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Command Delete Object.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyCmdModeString = "cmddelete";
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
    // ******************************************************************
    /// Update the Symbol (rewrite if old, create if old)
    void ToolStripButton8_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Update Symbol record .";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUpdateSymbolRecordFromSymbolScreen(this.TextBoxNamedSymbolName.Text);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    // *****************************************************
    void ToolStripButtonFlowChartForm( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying FlowChart.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedColor = e.ToString();
        MyFlowChartNameSpace.F_C.ShowAllForms(ShowScreen, HideScreen, HideScreen, HideScreen, HideScreen, HideScreen);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    // ****************************************************************
    void ToolStripButtonOptionForm_FromSymbolScreen_Click( EventArgs e)
    {
        const  string ButtonStartedName = " Displaying the Option Screen.";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.ShowAllForms(HideScreen, HideScreen, ShowScreen, HideScreen, HideScreen, HideScreen);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }



    // Private Sub ToolStripDropDownButtonColor_Click(sender As Object, e As EventArgs) Handles ToolStripDropDownButtonColor.Click
    // Const ButtonStartedName As  string = "Symbol Screen Select Color"
    // MyFlowChartNameSpace.F_C.FindingMyBugs(100)
    // If MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) = False Then Exit Sub
    // MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedColor = sender.ToString 'Me.ToolStripDropDownButtonColor.Text
    // MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName)
    // MyFlowChartNameSpace.F_C.DisplayStatus(Me.LabelProgramStatus.Text, ButtonStartedName)
    // End Sub


    void ToolStripTextBox1_LostFocus( EventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen Symbol text box Lost Focus";
        if (this.Visible == false)
            return;
        if (this.TextBoxNamedSymbolName.Text == "")
            return;
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        // 'todo  Need to add this symbol at some time (just not when the program makes this lostfocus appear.)

        if (MyFlowChartNameSpace.F_C.MyLeft(this.ToolStripTextBox1.Text, 1) == "/")
        {
            MyFlowChartNameSpace.F_C.ImportLineOrFile(this.ToolStripTextBox1.Text);
            this.ToolStripTextBox1.Text = ""; // delete the /dirictive
            MyFlowChartNameSpace.F_C.MyDoEvents();
        }
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules(); // Reset the buttons to work now. (Can add symbol button at least)
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    } // 


    void ToolStripTextBox1_Click( EventArgs e)
    {
        // This could be eight a symbol name, or ...( See constant in FlowChart Screen also)
        const  string ButtonStartedName = "Symbol Screen Input Click";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules(); // Reset the buttons to work now. (Can add symbol button at least)
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void SymbolScreen_Load( EventArgs e)
    {
        bool SavedState;
        const  string ButtonStartedName = "Symbol Screen  Load";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        SavedState = this.Visible;
        this.Visible = true;
        ResizeMe();
        this.Visible = SavedState;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules(); // Reset the buttons to work now. (Can add symbol button at least)
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
    }

    void ResizeMe()
    {
        int LeftText, LeftLabel, TextWidth, TextHeight;
        if (this.Visible == false)
            return;
        if (this.Width < this.PictureBox1.Width + 200)
        {
            this.Width = this.PictureBox1.Width + 200;
            MyFlowChartNameSpace.F_C.MyDoEvents(); // hack
        }
        this.PictureBox1.Top = this.ToolStripSymbolBottom.Top + this.ToolStripSymbolBottom.Height + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;


        this.PictureBox1.Width = System.Convert.Tolong(MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantSymbolCenter * 2 * MyFlowChartNameSpace.F_C.MyUniverse.SysGen.MySymbolScale) + 2;
        this.PictureBox1.Height = System.Convert.Tolong(MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantSymbolCenter * 2 * MyFlowChartNameSpace.F_C.MyUniverse.SysGen.MySymbolScale) + 2;

        LeftLabel = this.PictureBox1.Width + this.PictureBox1.Left + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        LeftText = LeftLabel + 250;
        TextWidth = (this.Width - LeftText) - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls * 4;
        TextHeight = System.Convert.Tolong(((this.Height - this.PictureBox1.Top) - MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls * 4) / (double)18);

        ResizeTextBox(this.Label1, this.TextBoxNamedSymbolName, this.PictureBox1.Top, LeftLabel, LeftText, TextHeight, 0, 1, TextWidth);
        ResizeComboBox(this.Label2, this.ComboBoxPointNameList, this.Label1.Top, LeftLabel, LeftText, TextHeight, TextHeight, 2, TextWidth);
        ResizeComboBox(this.Label8, this.ComboBoxLineNameList, this.Label2.Top, LeftLabel, LeftText, TextHeight, TextHeight, 3, TextWidth);
        ResizeTextBox(this.Label3, this.TextBoxNamedNameOfFile, this.Label8.Top, LeftLabel, LeftText, TextHeight, TextHeight, 4, TextWidth);
        ResizeTextBox(this.Label4, this.TextBoxNamedStroke, this.Label3.Top, LeftLabel, LeftText, TextHeight, TextHeight, 5, TextWidth);
        ResizeTextBox(this.Label5, this.TextBoxNamedOpCode, this.Label4.Top, LeftLabel, LeftText, TextHeight, TextHeight, 6, TextWidth);
        ResizeTextBox(this.Label6, this.TextBoxSymbolVersionAuthor, this.Label5.Top, LeftLabel, LeftText, TextHeight, TextHeight, 7, TextWidth);
        ResizeTextBox(this.Label7, this.TextBoxNamedNotes, this.Label6.Top, LeftLabel, LeftText, TextHeight * 2, TextHeight, 8, TextWidth);
        ResizeTextBox(this.Label9, this.TextBoxNamedProgramText, this.Label7.Top, LeftLabel, LeftText, TextHeight * 2, TextHeight * 2, 9, TextWidth);
        ResizeTextBox(this.Label11, this.TextBoxNamedSyntax, this.Label9.Top, LeftLabel, LeftText, TextHeight * 2, TextHeight * 2, 10, TextWidth);
        ResizeTextBox(this.Label12, this.TextBoxNamedDescription, this.Label11.Top, LeftLabel, LeftText, TextHeight * 2, TextHeight * 2, 11, TextWidth);
    }

    void ResizeTextBox(Label L, TextBox T, int LastTop, int lastLeftLabel, int LastLeftText, int SetHeight, int MoveHeight, int MyTabIndex, int TextWidth)
    {
        L.Top = LastTop + MoveHeight + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        L.Width = LastTop; L.Left = lastLeftLabel; L.Height = SetHeight;
        T.Top = L.Top; T.Left = LastLeftText; T.Height = SetHeight; T.TabIndex = MyTabIndex;
        T.Width = TextWidth;
        MyFlowChartNameSpace.F_C.MyDoEvents();
    }

    void ResizeComboBox(Label L, ComboBox T, int LastTop, int lastLeftLabel, int LastLeftText, int SetHeight, int MoveHeight, int MyTabIndex, int TextWidth)
    {
        L.Top = LastTop + MoveHeight + MyFlowChartNameSpace.F_C.MyUniverse.SysGen.Constants.constantDistanceBetweenControls;
        L.Width = LastTop; L.Left = lastLeftLabel; L.Height = SetHeight;
        T.Top = L.Top; T.Left = LastLeftText; T.Height = SetHeight; T.TabIndex = MyTabIndex;
        T.Width = TextWidth;
        MyFlowChartNameSpace.F_C.MyDoEvents();
    }

    void ToolStripDropDownSelectSymbol_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        // todo see why a new symbol is not showing up when a symbol is select with the drop down
        const  string ButtonStartedName = "Symbol Screen  Select Item Clicked";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        this.ToolStripDropDownSelectSymbol.Text = sender.ToString();
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = sender.ToString();
        MyFlowChartNameSpace.F_C.AInfo1(451, "Symbol selected ", MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName, "?");
        MyFlowChartNameSpace.F_C.DisplaySymbolText(MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        this.ToolStripDropDownSelectSymbol.Text = this.ToolStripDropDownSelectSymbol.ToString;
        this.TextBoxNamedSymbolName.Text = MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName; // Me.ToolStripDropDownSelectSymbol.ToString
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (this.ToolStripDropDownSelectSymbol.ToString == "")
            MyFlowChartNameSpace.F_C.Abug(2007, "Symbol Name is not select ? ", "What Goes Here?", "");
        else
            MyFlowChartNameSpace.F_C.PaintEach(this.PictureBox1, MyFlowChartNameSpace.F_C.ZeroZero, this.ToolStripDropDownSelectSymbol.ToString, "default");
    }

    void ToolStripDropDownRotation_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen Rotation Clicked";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedRotation = e.ClickedItem.ToString;
        this.ToolStripDropDownRotation.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }
    void ToolStripDropDownDataType_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen DataType Clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.MyDoEvents();
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedDataType = e.ClickedItem.Text;
        this.ToolStripDropDownDataType.Text = e.ClickedItem.Text;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }



    void ToolStripDropDownPathLineStyle_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen  Line Style Clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedPathLineStyle = e.ClickedItem.ToString;
        this.ToolStripDropDownPathLineStyle.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void ToolStripDropDownButtonColor_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyDoEvents();
        const  string ButtonStartedName = "Symbol Screen  Color Item Clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedColor = e.ClickedItem.ToString;
        this.ToolStripDropDownButtonColor.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void ToolStripDropDownLineWidth_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen Line Width item Clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedPathLineStyle = e.ClickedItem.ToString;
        this.ToolStripDropDownLineWidth.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void ToolStripDropDownInputOutput_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen Input Output Item Clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedInputOutput = e.ClickedItem.Text;
        this.ToolStripDropDownInputOutput.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void ToolStripDropDownNumberOfBytes_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen NoBytes item clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedNumberOfBytes = e.ClickedItem.ToString;
        this.ToolStripDropDownNumberOfBytes.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }



    void ToolStripDropDownPathStart_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen Start Cap item clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedPathStart = e.ClickedItem.ToString;
        this.ToolStripDropDownPathStart.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }


    void ToolStripDropDownPathEnd_DropDownItemClicked( ToolStripItemClickedEventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen End Cap item clicked";
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedPathEnd = e.ClickedItem.ToString;
        this.ToolStripDropDownPathEnd.Text = e.ClickedItem.ToString();
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void TextBoxNamedSymbolName_LostFocus( EventArgs e)
    {
        long IndexNamed, IndexSymbol;
        const  string ButtonStartedName = "Symbol Screen Symbol Name Text Changed";

        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;

        if (this.Visible == false)
            return;
        if (this.TextBoxNamedSymbolName.ToString == "")
            return;
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        // DOC if the symbol name changes then add this symbol , other wise, I should delete it and then write over again.
        IndexSymbol = MyFlowChartNameSpace.F_C.FindInSymbolList(this.TextBoxNamedSymbolName.ToString);
        MyFlowChartNameSpace.F_C.FindingMyBugs(100); // 
        if (IndexSymbol == -1)
            // we just lost focus, not changed anything     'MyFlowChartNameSpace.F_C.MyUpdateSymbolRecordFromSymbolScreen(Me.TextBoxNamedSymbolName.Text)
            MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        else
        {
            IndexNamed = MyFlowChartNameSpace.F_C.FindInNamedList(this.ToolStripDropDownSelectSymbol.ToString);
            if (IndexNamed != MyFlowChartNameSpace.F_C.constantMyErrorCode)
            {
                // todo this is changed the start to something left over somewhere.
                if (MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName != this.TextBoxNamedSymbolName.SelectedText)
                {
                    MyFlowChartNameSpace.F_C.AInfo(423, "rename symbol : ", MyFlowChartNameSpace.F_C.HighLight(MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName), MyFlowChartNameSpace.F_C.HighLight(this.TextBoxNamedSymbolName.SelectedText));
                    // DOC this should change from the old selected to the new select symbol name.''
                    MyFlowChartNameSpace.F_C.MyRenameSymbol(MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName, this.TextBoxNamedSymbolName.SelectedText);
                    MyFlowChartNameSpace.F_C.Named_FileNameOfFile(System.Convert.Tolong(MyFlowChartNameSpace.F_C.Named_FileSymbolName_iSAM(IndexNamed))) = this.TextBoxNamedSymbolName.ToString;
                    this.ToolStripDropDownSelectSymbol.DropDownItems.Clear();
                    MyFlowChartNameSpace.F_C.GetAllSymbolNames("start");
                }
            }
        }
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
    }

    void StartToolStripMenuItem_Click( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.AInfo(447, "Menu item selected", sender.ToString(), e.ToString());
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedDescription_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedNameOfFile_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedNotes_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedOpCode_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedStroke_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedSymbolName_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxNamedSyntax_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void TextBoxSymbolVersionAuthor_TextChanged( EventArgs e)
    {
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SymbolChanged = true;
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
    }

    void ToolStripDropDownSelectSymbol_TextChanged( EventArgs e)
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
        this.TextBoxNamedSymbolName.Text = MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName;
        if (FlowChartScreen.ToolStripDropDownSelectSymbol.Text != sender.ToString())
            FlowChartScreen.ToolStripDropDownSelectSymbol.Text = sender.ToString();
    }

    
    void ToolStripDropDownSelectSymbol_Click( EventArgs e)
    {
        const  string ButtonStartedName = "Symbol Screen  Select Item Clicked";
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);
        if (MyFlowChartNameSpace.F_C.ButtonStarted(ButtonStartedName) == false)
            return;
        this.ToolStripDropDownSelectSymbol.Text = sender.ToString();
        MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName = sender.ToString();
        MyFlowChartNameSpace.F_C.AInfo1(451, "Symbol selected ", MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName, "?");
        MyFlowChartNameSpace.F_C.DisplaySymbolText(MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName);
        MyFlowChartNameSpace.F_C.MyButtonsEnableRules();
        this.ToolStripDropDownSelectSymbol.Text = this.ToolStripDropDownSelectSymbol.ToString;
        this.TextBoxNamedSymbolName.Text = MyFlowChartNameSpace.F_C.MyUniverse.ProgramOptions.SelectedSymbolName; // Me.ToolStripDropDownSelectSymbol.ToString
        MyFlowChartNameSpace.F_C.ButtonFinished(ButtonStartedName);
        MyFlowChartNameSpace.F_C.DisplayStatus(this.LabelProgramStatus.Text, ButtonStartedName);
        MyFlowChartNameSpace.F_C.FindingMyBugs(100);

        if (this.ToolStripDropDownSelectSymbol.ToString == "")
            MyFlowChartNameSpace.F_C.Abug(2007, "Symbol Name is not select ? ", "What Goes Here?", "");
        else
            MyFlowChartNameSpace.F_C.PaintEach(this.PictureBox1, MyFlowChartNameSpace.F_C.ZeroZero, this.ToolStripDropDownSelectSymbol.ToString, "default");
    }
}
