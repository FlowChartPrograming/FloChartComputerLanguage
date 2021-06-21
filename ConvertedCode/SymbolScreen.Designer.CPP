


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{
    Class SymbolScreenClass
    {

        //Form overrides dispose to clean up the component list.
        <System.Diagnostics.DebuggerNonUserCode()> _
        Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
        If disposing AndAlso components IsNot Nothing Then
        components.Dispose()
        End If
        Finally
        MyBase.Dispose(disposing)
        End Try
        End Sub

        //Required by the Windows Form Designer
        Private components As System.ComponentModel.IContainer

        //NOTE: The following procedure is required by the Windows Form Designer
        //It can be modified using the Windows Form Designer.  
        //Do not modify it using the code editor.
        <System.Diagnostics.DebuggerStepThrough()> _
        Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(SymbolScreen))
        Me.ToolStripSymbolTop = New System.Windows.Forms.ToolStrip()
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonOptionForm_FromSymbolScreen = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonAddPoint = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonAddLine = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonMove = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonDelete = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonNewSymbol = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonUpdateSymbol = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripTextBox1 = New System.Windows.Forms.ToolStripTextBox()
        Me.LabelProgramStatus = New System.Windows.Forms.ToolStripLabel()
        Me.ToolStripSymbolBottom = New System.Windows.Forms.ToolStrip()
        Me.ToolStripDropDownSelectSymbol = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownRotation = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownDataType = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownPathLineStyle = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownButtonColor = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownLineWidth = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownInputOutput = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownNumberOfBytes = New System.Windows.Forms.ToolStripDropDownButton()
        Me.ToolStripDropDownPathStart = New System.Windows.Forms.ToolStripDropDownButton()
        Me.StartToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ToolStripDropDownPathEnd = New System.Windows.Forms.ToolStripDropDownButton()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.TextBoxNamedSymbolName = New System.Windows.Forms.TextBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.TextBoxNamedNameOfFile = New System.Windows.Forms.TextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.TextBoxNamedStroke = New System.Windows.Forms.TextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.TextBoxNamedOpCode = New System.Windows.Forms.TextBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.TextBoxSymbolVersionAuthor = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.TextBoxNamedNotes = New System.Windows.Forms.TextBox()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.TextBoxNamedProgramText = New System.Windows.Forms.TextBox()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.TextBoxNamedSyntax = New System.Windows.Forms.TextBox()
        Me.Label11 = New System.Windows.Forms.Label()
        Me.TextBoxNamedDescription = New System.Windows.Forms.TextBox()
        Me.Label12 = New System.Windows.Forms.Label()
        Me.Timer1 = New System.Windows.Forms.Timer(Me.components)
        Me.ComboBoxPointNameList = New System.Windows.Forms.ComboBox()
        Me.ComboBoxLineNameList = New System.Windows.Forms.ComboBox()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.HelpProviderSymbolScreen = New System.Windows.Forms.HelpProvider()
        Me.HelpProviderPictureBox1 = New System.Windows.Forms.HelpProvider()
        Me.ToolStripSymbolTop.SuspendLayout()
        Me.ToolStripSymbolBottom.SuspendLayout()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        //
        //ToolStripSymbolTop
        //
        Me.ToolStripSymbolTop.ImageScalingSize = New System.Drawing.Size(48, 48)
        Me.ToolStripSymbolTop.Items.AddRange(New System.Windows.Forms.ToolStripItem() { Me.ToolStripButtonFlowChartForm_FromSymbolScreen, Me.ToolStripButtonOptionForm_FromSymbolScreen, Me.ToolStripButtonAddPoint, Me.ToolStripButtonAddLine, Me.ToolStripButtonMove, Me.ToolStripButtonDelete, Me.ToolStripButtonNewSymbol, Me.ToolStripButtonUpdateSymbol, Me.ToolStripTextBox1, Me.LabelProgramStatus })
        Me.ToolStripSymbolTop.Location = New System.Drawing.Point(0, 0)
        Me.ToolStripSymbolTop.Name = "ToolStripSymbolTop"
        Me.ToolStripSymbolTop.Padding = New System.Windows.Forms.Padding(0, 0, 4, 0)
        Me.ToolStripSymbolTop.Size = New System.Drawing.Size(3844, 70)
        Me.ToolStripSymbolTop.TabIndex = 0
        Me.ToolStripSymbolTop.Text = "ToolStrip1"
        //
        //ToolStripButtonFlowChartForm_FromSymbolScreen
        //
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.Image = CType(resources.GetObject("ToolStripButtonFlowChartForm_FromSymbolScreen.Image"), System.Drawing.Image)
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.Name = "ToolStripButtonFlowChartForm_FromSymbolScreen"
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonFlowChartForm_FromSymbolScreen.Text = "FlowChart Screen"
        //
        //ToolStripButtonOptionForm_FromSymbolScreen
        //
        Me.ToolStripButtonOptionForm_FromSymbolScreen.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonOptionForm_FromSymbolScreen.Image = CType(resources.GetObject("ToolStripButtonOptionForm_FromSymbolScreen.Image"), System.Drawing.Image)
        Me.ToolStripButtonOptionForm_FromSymbolScreen.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonOptionForm_FromSymbolScreen.Name = "ToolStripButtonOptionForm_FromSymbolScreen"
        Me.ToolStripButtonOptionForm_FromSymbolScreen.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonOptionForm_FromSymbolScreen.Text = "Symbol Screen"
        //
        //ToolStripButtonAddPoint
        //
        Me.ToolStripButtonAddPoint.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonAddPoint.Image = CType(resources.GetObject("ToolStripButtonAddPoint.Image"), System.Drawing.Image)
        Me.ToolStripButtonAddPoint.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonAddPoint.Name = "ToolStripButtonAddPoint"
        Me.ToolStripButtonAddPoint.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonAddPoint.Text = "Add Point"
        //
        //ToolStripButtonAddLine
        //
        Me.ToolStripButtonAddLine.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonAddLine.Image = CType(resources.GetObject("ToolStripButtonAddLine.Image"), System.Drawing.Image)
        Me.ToolStripButtonAddLine.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonAddLine.Name = "ToolStripButtonAddLine"
        Me.ToolStripButtonAddLine.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonAddLine.Text = "Add Line"
        //
        //ToolStripButtonMove
        //
        Me.ToolStripButtonMove.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonMove.Image = CType(resources.GetObject("ToolStripButtonMove.Image"), System.Drawing.Image)
        Me.ToolStripButtonMove.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonMove.Name = "ToolStripButtonMove"
        Me.ToolStripButtonMove.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonMove.Text = "Move"
        //
        //ToolStripButtonDelete
        //
        Me.ToolStripButtonDelete.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonDelete.Image = CType(resources.GetObject("ToolStripButtonDelete.Image"), System.Drawing.Image)
        Me.ToolStripButtonDelete.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonDelete.Name = "ToolStripButtonDelete"
        Me.ToolStripButtonDelete.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonDelete.Text = "Delete"
        //
        //ToolStripButtonNewSymbol
        //
        Me.ToolStripButtonNewSymbol.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonNewSymbol.Image = CType(resources.GetObject("ToolStripButtonNewSymbol.Image"), System.Drawing.Image)
        Me.ToolStripButtonNewSymbol.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonNewSymbol.Name = "ToolStripButtonNewSymbol"
        Me.ToolStripButtonNewSymbol.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonNewSymbol.Text = "New Symbol"
        //
        //ToolStripButtonUpdateSymbol
        //
        Me.ToolStripButtonUpdateSymbol.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonUpdateSymbol.Image = CType(resources.GetObject("ToolStripButtonUpdateSymbol.Image"), System.Drawing.Image)
        Me.ToolStripButtonUpdateSymbol.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonUpdateSymbol.Name = "ToolStripButtonUpdateSymbol"
        Me.ToolStripButtonUpdateSymbol.Size = New System.Drawing.Size(69, 61)
        Me.ToolStripButtonUpdateSymbol.Text = "Update Symbol"
        //
        //ToolStripTextBox1
        //
        Me.ToolStripTextBox1.Name = "ToolStripTextBox1"
        Me.ToolStripTextBox1.Size = New System.Drawing.Size(499, 70)
        //
        //LabelProgramStatus
        //
        Me.LabelProgramStatus.Name = "LabelProgramStatus"
        Me.LabelProgramStatus.Size = New System.Drawing.Size(147, 61)
        Me.LabelProgramStatus.Text = "Status"
        //
        //ToolStripSymbolBottom
        //
        Me.HelpProviderPictureBox1.SetHelpNavigator(Me.ToolStripSymbolBottom, System.Windows.Forms.HelpNavigator.KeywordIndex)
        Me.HelpProviderSymbolScreen.SetHelpString(Me.ToolStripSymbolBottom, "SymbolSceen")
        Me.HelpProviderPictureBox1.SetHelpString(Me.ToolStripSymbolBottom, "PictureBox1")
        Me.ToolStripSymbolBottom.ImageScalingSize = New System.Drawing.Size(48, 48)
        Me.ToolStripSymbolBottom.Items.AddRange(New System.Windows.Forms.ToolStripItem() { Me.ToolStripDropDownSelectSymbol, Me.ToolStripDropDownRotation, Me.ToolStripDropDownDataType, Me.ToolStripDropDownPathLineStyle, Me.ToolStripDropDownButtonColor, Me.ToolStripDropDownLineWidth, Me.ToolStripDropDownInputOutput, Me.ToolStripDropDownNumberOfBytes, Me.ToolStripDropDownPathStart, Me.ToolStripDropDownPathEnd })
        Me.ToolStripSymbolBottom.Location = New System.Drawing.Point(0, 70)
        Me.ToolStripSymbolBottom.Name = "ToolStripSymbolBottom"
        Me.ToolStripSymbolBottom.Padding = New System.Windows.Forms.Padding(0, 0, 4, 0)
        Me.HelpProviderPictureBox1.SetShowHelp(Me.ToolStripSymbolBottom, True)
        Me.HelpProviderSymbolScreen.SetShowHelp(Me.ToolStripSymbolBottom, True)
        Me.ToolStripSymbolBottom.Size = New System.Drawing.Size(3844, 74)
        Me.ToolStripSymbolBottom.TabIndex = 2
        Me.ToolStripSymbolBottom.Text = "ToolStrip3"
        //
        //ToolStripDropDownSelectSymbol
        //
        Me.ToolStripDropDownSelectSymbol.Image = CType(resources.GetObject("ToolStripDropDownSelectSymbol.Image"), System.Drawing.Image)
        Me.ToolStripDropDownSelectSymbol.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownSelectSymbol.Name = "ToolStripDropDownSelectSymbol"
        Me.ToolStripDropDownSelectSymbol.Size = New System.Drawing.Size(198, 65)
        Me.ToolStripDropDownSelectSymbol.Text = "Start"
        Me.ToolStripDropDownSelectSymbol.ToolTipText = "select a symbol to edit"
        //
        //ToolStripDropDownRotation
        //
        Me.ToolStripDropDownRotation.Image = CType(resources.GetObject("ToolStripDropDownRotation.Image"), System.Drawing.Image)
        Me.ToolStripDropDownRotation.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownRotation.Name = "ToolStripDropDownRotation"
        Me.ToolStripDropDownRotation.Size = New System.Drawing.Size(250, 65)
        Me.ToolStripDropDownRotation.Text = "Default"
        Me.ToolStripDropDownRotation.ToolTipText = "select the rotation of the next symbol to place on the FlotChart"
        //
        //ToolStripDropDownDataType
        //
        Me.ToolStripDropDownDataType.Image = CType(resources.GetObject("ToolStripDropDownDataType.Image"), System.Drawing.Image)
        Me.ToolStripDropDownDataType.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownDataType.Name = "ToolStripDropDownDataType"
        Me.ToolStripDropDownDataType.Size = New System.Drawing.Size(305, 65)
        Me.ToolStripDropDownDataType.Text = "Data Type"
        Me.ToolStripDropDownDataType.ToolTipText = "select the type of data for the next point placed "
        //
        //ToolStripDropDownPathLineStyle
        //
        Me.ToolStripDropDownPathLineStyle.Image = CType(resources.GetObject("ToolStripDropDownPathLineStyle.Image"), System.Drawing.Image)
        Me.ToolStripDropDownPathLineStyle.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownPathLineStyle.Name = "ToolStripDropDownPathLineStyle"
        Me.ToolStripDropDownPathLineStyle.Size = New System.Drawing.Size(205, 65)
        Me.ToolStripDropDownPathLineStyle.Text = "Solid"
        //
        //ToolStripDropDownButtonColor
        //
        Me.ToolStripDropDownButtonColor.Image = CType(resources.GetObject("ToolStripDropDownButtonColor.Image"), System.Drawing.Image)
        Me.ToolStripDropDownButtonColor.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownButtonColor.Name = "ToolStripDropDownButtonColor"
        Me.ToolStripDropDownButtonColor.Size = New System.Drawing.Size(209, 65)
        Me.ToolStripDropDownButtonColor.Text = "Black"
        //
        //ToolStripDropDownLineWidth
        //
        Me.ToolStripDropDownLineWidth.Image = CType(resources.GetObject("ToolStripDropDownLineWidth.Image"), System.Drawing.Image)
        Me.ToolStripDropDownLineWidth.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownLineWidth.Name = "ToolStripDropDownLineWidth"
        Me.ToolStripDropDownLineWidth.Size = New System.Drawing.Size(209, 65)
        Me.ToolStripDropDownLineWidth.Text = "Black"
        //
        //ToolStripDropDownInputOutput
        //
        Me.ToolStripDropDownInputOutput.Image = CType(resources.GetObject("ToolStripDropDownInputOutput.Image"), System.Drawing.Image)
        Me.ToolStripDropDownInputOutput.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownInputOutput.Name = "ToolStripDropDownInputOutput"
        Me.ToolStripDropDownInputOutput.Size = New System.Drawing.Size(198, 65)
        Me.ToolStripDropDownInputOutput.Text = "Both"
        //
        //ToolStripDropDownNumberOfBytes
        //
        Me.ToolStripDropDownNumberOfBytes.Image = CType(resources.GetObject("ToolStripDropDownNumberOfBytes.Image"), System.Drawing.Image)
        Me.ToolStripDropDownNumberOfBytes.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownNumberOfBytes.Name = "ToolStripDropDownNumberOfBytes"
        Me.ToolStripDropDownNumberOfBytes.Size = New System.Drawing.Size(130, 65)
        Me.ToolStripDropDownNumberOfBytes.Text = "4"
        //
        //ToolStripDropDownPathStart
        //
        Me.ToolStripDropDownPathStart.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() { Me.StartToolStripMenuItem })
        Me.ToolStripDropDownPathStart.Image = CType(resources.GetObject("ToolStripDropDownPathStart.Image"), System.Drawing.Image)
        Me.ToolStripDropDownPathStart.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownPathStart.Name = "ToolStripDropDownPathStart"
        Me.ToolStripDropDownPathStart.Size = New System.Drawing.Size(177, 65)
        Me.ToolStripDropDownPathStart.Text = "Flat"
        //
        //StartToolStripMenuItem
        //
        Me.StartToolStripMenuItem.Name = "StartToolStripMenuItem"
        Me.StartToolStripMenuItem.Size = New System.Drawing.Size(324, 74)
        Me.StartToolStripMenuItem.Text = "Start"
        //
        //ToolStripDropDownPathEnd
        //
        Me.ToolStripDropDownPathEnd.Image = CType(resources.GetObject("ToolStripDropDownPathEnd.Image"), System.Drawing.Image)
        Me.ToolStripDropDownPathEnd.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripDropDownPathEnd.Name = "ToolStripDropDownPathEnd"
        Me.ToolStripDropDownPathEnd.Size = New System.Drawing.Size(177, 65)
        Me.ToolStripDropDownPathEnd.Text = "Flat"
        //
        //PictureBox1
        //
        Me.PictureBox1.BackColor = System.Drawing.SystemColors.ButtonFace
        Me.PictureBox1.Location = New System.Drawing.Point(54, 267)
        Me.PictureBox1.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(885, 933)
        Me.PictureBox1.TabIndex = 3
        Me.PictureBox1.TabStop = False
        //
        //Label1
        //
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(1052, 300)
        Me.Label1.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(306, 61)
        Me.Label1.TabIndex = 4
        Me.Label1.Text = "Symbol Name"
        //
        //TextBoxNamedSymbolName
        //
        Me.TextBoxNamedSymbolName.Location = New System.Drawing.Point(1641, 300)
        Me.TextBoxNamedSymbolName.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedSymbolName.Name = "TextBoxNamedSymbolName"
        Me.TextBoxNamedSymbolName.Size = New System.Drawing.Size(504, 67)
        Me.TextBoxNamedSymbolName.TabIndex = 5
        Me.TextBoxNamedSymbolName.Text = "Start"
        //
        //Label2
        //
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(1052, 407)
        Me.Label2.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(278, 61)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "Point Names"
        //
        //TextBoxNamedNameOfFile
        //
        Me.TextBoxNamedNameOfFile.Location = New System.Drawing.Point(1641, 633)
        Me.TextBoxNamedNameOfFile.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedNameOfFile.Name = "TextBoxNamedNameOfFile"
        Me.TextBoxNamedNameOfFile.Size = New System.Drawing.Size(504, 67)
        Me.TextBoxNamedNameOfFile.TabIndex = 7
        //
        //Label3
        //
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(1052, 633)
        Me.Label3.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(206, 61)
        Me.Label3.TabIndex = 8
        Me.Label3.Text = "Filename"
        //
        //TextBoxNamedStroke
        //
        Me.TextBoxNamedStroke.Location = New System.Drawing.Point(1641, 742)
        Me.TextBoxNamedStroke.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedStroke.Name = "TextBoxNamedStroke"
        Me.TextBoxNamedStroke.Size = New System.Drawing.Size(504, 67)
        Me.TextBoxNamedStroke.TabIndex = 10
        //
        //Label4
        //
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(1052, 742)
        Me.Label4.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(153, 61)
        Me.Label4.TabIndex = 14
        Me.Label4.Text = "Stroke"
        //
        //TextBoxNamedOpCode
        //
        Me.TextBoxNamedOpCode.Location = New System.Drawing.Point(1641, 860)
        Me.TextBoxNamedOpCode.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedOpCode.Name = "TextBoxNamedOpCode"
        Me.TextBoxNamedOpCode.Size = New System.Drawing.Size(504, 67)
        Me.TextBoxNamedOpCode.TabIndex = 9
        //
        //Label5
        //
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(1052, 860)
        Me.Label5.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(204, 61)
        Me.Label5.TabIndex = 12
        Me.Label5.Text = "Op Code"
        //
        //TextBoxSymbolVersionAuthor
        //
        Me.TextBoxSymbolVersionAuthor.Location = New System.Drawing.Point(1641, 959)
        Me.TextBoxSymbolVersionAuthor.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxSymbolVersionAuthor.Name = "TextBoxSymbolVersionAuthor"
        Me.TextBoxSymbolVersionAuthor.Size = New System.Drawing.Size(504, 67)
        Me.TextBoxSymbolVersionAuthor.TabIndex = 8
        //
        //Label6
        //
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(1052, 959)
        Me.Label6.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(327, 61)
        Me.Label6.TabIndex = 10
        Me.Label6.Text = "Version/Author"
        //
        //TextBoxNamedNotes
        //
        Me.TextBoxNamedNotes.Location = New System.Drawing.Point(1641, 1057)
        Me.TextBoxNamedNotes.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedNotes.Multiline = True
        Me.TextBoxNamedNotes.Name = "TextBoxNamedNotes"
        Me.TextBoxNamedNotes.Size = New System.Drawing.Size(1039, 327)
        Me.TextBoxNamedNotes.TabIndex = 12
        Me.TextBoxNamedNotes.Text = "notes:"
        //
        //Label7
        //
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(1052, 1057)
        Me.Label7.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(145, 61)
        Me.Label7.TabIndex = 20
        Me.Label7.Text = "Notes"
        //
        //TextBoxNamedProgramText
        //
        Me.TextBoxNamedProgramText.Location = New System.Drawing.Point(1641, 1425)
        Me.TextBoxNamedProgramText.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedProgramText.Multiline = True
        Me.TextBoxNamedProgramText.Name = "TextBoxNamedProgramText"
        Me.TextBoxNamedProgramText.Size = New System.Drawing.Size(1029, 205)
        Me.TextBoxNamedProgramText.TabIndex = 11
        //
        //Label9
        //
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(1052, 1425)
        Me.Label9.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(245, 61)
        Me.Label9.TabIndex = 16
        Me.Label9.Text = "Macro Text"
        //
        //TextBoxNamedSyntax
        //
        Me.TextBoxNamedSyntax.Location = New System.Drawing.Point(1641, 1658)
        Me.TextBoxNamedSyntax.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedSyntax.Multiline = True
        Me.TextBoxNamedSyntax.Name = "TextBoxNamedSyntax"
        Me.TextBoxNamedSyntax.Size = New System.Drawing.Size(1029, 70)
        Me.TextBoxNamedSyntax.TabIndex = 14
        //
        //Label11
        //
        Me.Label11.AutoSize = True
        Me.Label11.Location = New System.Drawing.Point(1052, 1658)
        Me.Label11.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(156, 61)
        Me.Label11.TabIndex = 24
        Me.Label11.Text = "Syntax"
        //
        //TextBoxNamedDescription
        //
        Me.TextBoxNamedDescription.Location = New System.Drawing.Point(1655, 1887)
        Me.TextBoxNamedDescription.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.TextBoxNamedDescription.Multiline = True
        Me.TextBoxNamedDescription.Name = "TextBoxNamedDescription"
        Me.TextBoxNamedDescription.Size = New System.Drawing.Size(1014, 70)
        Me.TextBoxNamedDescription.TabIndex = 13
        Me.TextBoxNamedDescription.Text = "Description"
        //
        //Label12
        //
        Me.Label12.AutoSize = True
        Me.Label12.Location = New System.Drawing.Point(1068, 1887)
        Me.Label12.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(253, 61)
        Me.Label12.TabIndex = 22
        Me.Label12.Text = "Description"
        //
        //Timer1
        //
        //
        //ComboBoxPointNameList
        //
        Me.ComboBoxPointNameList.FormattingEnabled = True
        Me.ComboBoxPointNameList.ItemHeight = 61
        Me.ComboBoxPointNameList.Location = New System.Drawing.Point(1641, 407)
        Me.ComboBoxPointNameList.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.ComboBoxPointNameList.Name = "ComboBoxPointNameList"
        Me.ComboBoxPointNameList.Size = New System.Drawing.Size(504, 69)
        Me.ComboBoxPointNameList.TabIndex = 26
        Me.ComboBoxPointNameList.Text = "Points"
        //
        //ComboBoxLineNameList
        //
        Me.ComboBoxLineNameList.FormattingEnabled = True
        Me.ComboBoxLineNameList.ItemHeight = 61
        Me.ComboBoxLineNameList.Location = New System.Drawing.Point(1641, 521)
        Me.ComboBoxLineNameList.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.ComboBoxLineNameList.Name = "ComboBoxLineNameList"
        Me.ComboBoxLineNameList.Size = New System.Drawing.Size(504, 69)
        Me.ComboBoxLineNameList.TabIndex = 28
        Me.ComboBoxLineNameList.Text = "Lines"
        //
        //Label8
        //
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(1052, 521)
        Me.Label8.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(127, 61)
        Me.Label8.TabIndex = 27
        Me.Label8.Text = "Lines"
        //
        //SymbolScreen
        //
        Me.AutoScaleDimensions = New System.Drawing.SizeF(25.0!, 61.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Window
        Me.ClientSize = New System.Drawing.Size(3844, 1721)
        Me.Controls.Add(Me.ComboBoxLineNameList)
        Me.Controls.Add(Me.Label8)
        Me.Controls.Add(Me.ComboBoxPointNameList)
        Me.Controls.Add(Me.TextBoxNamedSyntax)
        Me.Controls.Add(Me.Label11)
        Me.Controls.Add(Me.TextBoxNamedDescription)
        Me.Controls.Add(Me.Label12)
        Me.Controls.Add(Me.TextBoxNamedNotes)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.TextBoxNamedProgramText)
        Me.Controls.Add(Me.Label9)
        Me.Controls.Add(Me.TextBoxNamedStroke)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.TextBoxNamedOpCode)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.TextBoxSymbolVersionAuthor)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.TextBoxNamedNameOfFile)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.TextBoxNamedSymbolName)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.PictureBox1)
        Me.Controls.Add(Me.ToolStripSymbolBottom)
        Me.Controls.Add(Me.ToolStripSymbolTop)
        Me.Margin = New System.Windows.Forms.Padding(4, 5, 4, 5)
        Me.Name = "SymbolScreen"
        Me.Text = "SymbolScreen"
        Me.WindowState = System.Windows.Forms.FormWindowState.Maximized
        Me.ToolStripSymbolTop.ResumeLayout(False)
        Me.ToolStripSymbolTop.PerformLayout()
        Me.ToolStripSymbolBottom.ResumeLayout(False)
        Me.ToolStripSymbolBottom.PerformLayout()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

        End Sub

        Friend WithEvents ToolStripSymbolTop As ToolStrip
        Friend WithEvents ToolStripSymbolBottom As ToolStrip
        Friend WithEvents ToolStripButtonFlowChartForm_FromSymbolScreen As ToolStripButton
        Friend WithEvents ToolStripButtonOptionForm_FromSymbolScreen As ToolStripButton
        Friend WithEvents ToolStripButtonAddPoint As ToolStripButton
        Friend WithEvents ToolStripButtonAddLine As ToolStripButton
        Friend WithEvents ToolStripButtonMove As ToolStripButton
        Friend WithEvents ToolStripButtonDelete As ToolStripButton
        Friend WithEvents ToolStripButtonNewSymbol As ToolStripButton
        Friend WithEvents ToolStripButtonUpdateSymbol As ToolStripButton
        Friend WithEvents ToolStripDropDownSelectSymbol As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownButtonColor As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownLineWidth As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownInputOutput As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownNumberOfBytes As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownDataType As ToolStripDropDownButton
        Friend WithEvents PictureBox1 As PictureBox
        Friend WithEvents Label1 As Label
        Friend WithEvents TextBoxNamedSymbolName As TextBox
        Friend WithEvents Label2 As Label
        Friend WithEvents TextBoxNamedNameOfFile As TextBox
        Friend WithEvents Label3 As Label
        Friend WithEvents TextBoxNamedStroke As TextBox
        Friend WithEvents Label4 As Label
        Friend WithEvents TextBoxNamedOpCode As TextBox
        Friend WithEvents Label5 As Label
        Friend WithEvents TextBoxSymbolVersionAuthor As TextBox
        Friend WithEvents Label6 As Label
        Friend WithEvents TextBoxNamedNotes As TextBox
        Friend WithEvents Label7 As Label
        Friend WithEvents TextBoxNamedProgramText As TextBox
        Friend WithEvents Label9 As Label
        Friend WithEvents TextBoxNamedSyntax As TextBox
        Friend WithEvents Label11 As Label
        Friend WithEvents TextBoxNamedDescription As TextBox
        Friend WithEvents Label12 As Label
        Friend WithEvents Timer1 As Timer
        Friend WithEvents ToolStripDropDownPathLineStyle As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownRotation As ToolStripDropDownButton
        Friend WithEvents ToolStripDropDownPathStart As ToolStripDropDownButton
        Friend WithEvents StartToolStripMenuItem As ToolStripMenuItem
        Friend WithEvents ToolStripDropDownPathEnd As ToolStripDropDownButton
        Friend WithEvents ComboBoxPointNameList As ComboBox
        Friend WithEvents ComboBoxLineNameList As ComboBox
        Friend WithEvents Label8 As Label
        Friend WithEvents HelpProviderSymbolScreen As HelpProvider
        Friend WithEvents HelpProviderPictureBox1 As HelpProvider
        Friend WithEvents ToolStripTextBox1 As ToolStripTextBox
        Friend WithEvents LabelProgramStatus As ToolStripLabel
    }//End of Class SymbolScreen
}// end of namespace FlowChartComputerLanguage
