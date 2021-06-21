


#include <c:\Users\Owner\source\repos\FlowChartComputerLanguage\framework.h>
#include "c:\Users\Owner\source\repos\FlowChartComputerLanguage\FlowChartComputerLanguage.h"

namespace FlowChartComputerLanguage
{
    Class FileInputOutputScreen
    {

        <System.Diagnostics.DebuggerNonUserCode()>
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
        <System.Diagnostics.DebuggerStepThrough()>
        Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(FileInputOutputScreen))
        Me.ToolStripFileInputOutput = New System.Windows.Forms.ToolStrip()
        Me.ToolStripButtonShowFlowChart = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonShowSymbolScreen = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonShowOptionScreen = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonOpenFile = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonSaveFileAs = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonFlowChartToSourceCode = New System.Windows.Forms.ToolStripButton()
        Me.ToolStripButtonSourceCodeToFlowChartCode = New System.Windows.Forms.ToolStripButton()
        Me.LabelProgramStatus = New System.Windows.Forms.ToolStripLabel()
        Me.PB_LabelSizeDataType = New System.Windows.Forms.Label()
        Me.PB_LabelSizeColor = New System.Windows.Forms.Label()
        Me.PB_LabelSizeFlowChart = New System.Windows.Forms.Label()
        Me.PB_LabelSizeSymbol = New System.Windows.Forms.Label()
        Me.PB_Size5 = New System.Windows.Forms.ProgressBar()
        Me.PB_Size4 = New System.Windows.Forms.ProgressBar()
        Me.PB_Size3 = New System.Windows.Forms.ProgressBar()
        Me.PB_Size2 = New System.Windows.Forms.ProgressBar()
        Me.PB_Size1 = New System.Windows.Forms.ProgressBar()
        Me.PB_LabelSizeNamed = New System.Windows.Forms.Label()
        Me.LabelKeyWords = New System.Windows.Forms.Label()
        Me.ProgressBarKeyWords = New System.Windows.Forms.ProgressBar()
        Me.LabelOperators = New System.Windows.Forms.Label()
        Me.ProgressBarOperators = New System.Windows.Forms.ProgressBar()
        Me.LabelFunctions = New System.Windows.Forms.Label()
        Me.ProgressBarFunctions = New System.Windows.Forms.ProgressBar()
        Me.ToolStripFileInputOutput.SuspendLayout()
        Me.SuspendLayout()
        //
        //ToolStripFileInputOutput
        //
        Me.ToolStripFileInputOutput.ImageScalingSize = New System.Drawing.Size(48, 48)
        Me.ToolStripFileInputOutput.Items.AddRange(New System.Windows.Forms.ToolStripItem() { Me.ToolStripButtonShowFlowChart, Me.ToolStripButtonShowSymbolScreen, Me.ToolStripButtonShowOptionScreen, Me.ToolStripButtonOpenFile, Me.ToolStripButtonSaveFileAs, Me.ToolStripButtonFlowChartToSourceCode, Me.ToolStripButtonSourceCodeToFlowChartCode, Me.LabelProgramStatus })
        Me.ToolStripFileInputOutput.Location = New System.Drawing.Point(0, 0)
        Me.ToolStripFileInputOutput.Name = "ToolStripFileInputOutput"
        Me.ToolStripFileInputOutput.Size = New System.Drawing.Size(2446, 61)
        Me.ToolStripFileInputOutput.TabIndex = 0
        Me.ToolStripFileInputOutput.Text = "ToolStrip1"
        //
        //ToolStripButtonShowFlowChart
        //
        Me.ToolStripButtonShowFlowChart.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonShowFlowChart.Image = CType(resources.GetObject("ToolStripButtonShowFlowChart.Image"), System.Drawing.Image)
        Me.ToolStripButtonShowFlowChart.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonShowFlowChart.Name = "ToolStripButtonShowFlowChart"
        Me.ToolStripButtonShowFlowChart.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonShowFlowChart.Text = "ToolStripButton1"
        //
        //ToolStripButtonShowSymbolScreen
        //
        Me.ToolStripButtonShowSymbolScreen.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonShowSymbolScreen.Image = CType(resources.GetObject("ToolStripButtonShowSymbolScreen.Image"), System.Drawing.Image)
        Me.ToolStripButtonShowSymbolScreen.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonShowSymbolScreen.Name = "ToolStripButtonShowSymbolScreen"
        Me.ToolStripButtonShowSymbolScreen.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonShowSymbolScreen.ToolTipText = "Symbol Screen"
        //
        //ToolStripButtonShowOptionScreen
        //
        Me.ToolStripButtonShowOptionScreen.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonShowOptionScreen.Image = CType(resources.GetObject("ToolStripButtonShowOptionScreen.Image"), System.Drawing.Image)
        Me.ToolStripButtonShowOptionScreen.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonShowOptionScreen.Name = "ToolStripButtonShowOptionScreen"
        Me.ToolStripButtonShowOptionScreen.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonShowOptionScreen.Text = "ToolStripButton2"
        //
        //ToolStripButtonOpenFile
        //
        Me.ToolStripButtonOpenFile.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonOpenFile.Image = CType(resources.GetObject("ToolStripButtonOpenFile.Image"), System.Drawing.Image)
        Me.ToolStripButtonOpenFile.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonOpenFile.Name = "ToolStripButtonOpenFile"
        Me.ToolStripButtonOpenFile.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonOpenFile.Text = "ToolStripButton2"
        //
        //ToolStripButtonSaveFileAs
        //
        Me.ToolStripButtonSaveFileAs.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonSaveFileAs.Image = CType(resources.GetObject("ToolStripButtonSaveFileAs.Image"), System.Drawing.Image)
        Me.ToolStripButtonSaveFileAs.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonSaveFileAs.Name = "ToolStripButtonSaveFileAs"
        Me.ToolStripButtonSaveFileAs.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonSaveFileAs.Text = "ToolStripButton3"
        //
        //ToolStripButtonFlowChartToSourceCode
        //
        Me.ToolStripButtonFlowChartToSourceCode.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonFlowChartToSourceCode.Image = CType(resources.GetObject("ToolStripButtonFlowChartToSourceCode.Image"), System.Drawing.Image)
        Me.ToolStripButtonFlowChartToSourceCode.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonFlowChartToSourceCode.Name = "ToolStripButtonFlowChartToSourceCode"
        Me.ToolStripButtonFlowChartToSourceCode.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonFlowChartToSourceCode.Text = "ToolStripButton4"
        //
        //ToolStripButtonSourceCodeToFlowChartCode
        //
        Me.ToolStripButtonSourceCodeToFlowChartCode.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ToolStripButtonSourceCodeToFlowChartCode.Image = CType(resources.GetObject("ToolStripButtonSourceCodeToFlowChartCode.Image"), System.Drawing.Image)
        Me.ToolStripButtonSourceCodeToFlowChartCode.ImageTransparentColor = System.Drawing.Color.Magenta
        Me.ToolStripButtonSourceCodeToFlowChartCode.Name = "ToolStripButtonSourceCodeToFlowChartCode"
        Me.ToolStripButtonSourceCodeToFlowChartCode.Size = New System.Drawing.Size(69, 52)
        Me.ToolStripButtonSourceCodeToFlowChartCode.Text = "ToolStripButton5"
        //
        //LabelProgramStatus
        //
        Me.LabelProgramStatus.Name = "LabelProgramStatus"
        Me.LabelProgramStatus.Size = New System.Drawing.Size(115, 52)
        Me.LabelProgramStatus.Text = "Status"
        //
        //PB_LabelSizeDataType
        //
        Me.PB_LabelSizeDataType.AutoSize = True
        Me.PB_LabelSizeDataType.Location = New System.Drawing.Point(162, 802)
        Me.PB_LabelSizeDataType.Name = "PB_LabelSizeDataType"
        Me.PB_LabelSizeDataType.Size = New System.Drawing.Size(167, 48)
        Me.PB_LabelSizeDataType.TabIndex = 55
        Me.PB_LabelSizeDataType.Text = "DataType"
        //
        //PB_LabelSizeColor
        //
        Me.PB_LabelSizeColor.AutoSize = True
        Me.PB_LabelSizeColor.Location = New System.Drawing.Point(162, 717)
        Me.PB_LabelSizeColor.Name = "PB_LabelSizeColor"
        Me.PB_LabelSizeColor.Size = New System.Drawing.Size(121, 48)
        Me.PB_LabelSizeColor.TabIndex = 54
        Me.PB_LabelSizeColor.Text = "Colors"
        //
        //PB_LabelSizeFlowChart
        //
        Me.PB_LabelSizeFlowChart.AutoSize = True
        Me.PB_LabelSizeFlowChart.Location = New System.Drawing.Point(162, 634)
        Me.PB_LabelSizeFlowChart.Name = "PB_LabelSizeFlowChart"
        Me.PB_LabelSizeFlowChart.Size = New System.Drawing.Size(179, 48)
        Me.PB_LabelSizeFlowChart.TabIndex = 53
        Me.PB_LabelSizeFlowChart.Text = "FlowChart"
        //
        //PB_LabelSizeSymbol
        //
        Me.PB_LabelSizeSymbol.AutoSize = True
        Me.PB_LabelSizeSymbol.Location = New System.Drawing.Point(162, 551)
        Me.PB_LabelSizeSymbol.Name = "PB_LabelSizeSymbol"
        Me.PB_LabelSizeSymbol.Size = New System.Drawing.Size(134, 48)
        Me.PB_LabelSizeSymbol.TabIndex = 52
        Me.PB_LabelSizeSymbol.Text = "symbol"
        //
        //PB_Size5
        //
        Me.PB_Size5.Enabled = False
        Me.PB_Size5.Location = New System.Drawing.Point(682, 800)
        Me.PB_Size5.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.PB_Size5.Name = "PB_Size5"
        Me.PB_Size5.Size = New System.Drawing.Size(678, 75)
        Me.PB_Size5.TabIndex = 50
        //
        //PB_Size4
        //
        Me.PB_Size4.Enabled = False
        Me.PB_Size4.Location = New System.Drawing.Point(682, 716)
        Me.PB_Size4.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.PB_Size4.Name = "PB_Size4"
        Me.PB_Size4.Size = New System.Drawing.Size(678, 75)
        Me.PB_Size4.TabIndex = 49
        //
        //PB_Size3
        //
        Me.PB_Size3.Enabled = False
        Me.PB_Size3.Location = New System.Drawing.Point(682, 633)
        Me.PB_Size3.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.PB_Size3.Name = "PB_Size3"
        Me.PB_Size3.Size = New System.Drawing.Size(678, 75)
        Me.PB_Size3.TabIndex = 48
        //
        //PB_Size2
        //
        Me.PB_Size2.Enabled = False
        Me.PB_Size2.Location = New System.Drawing.Point(682, 550)
        Me.PB_Size2.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.PB_Size2.Name = "PB_Size2"
        Me.PB_Size2.Size = New System.Drawing.Size(678, 75)
        Me.PB_Size2.TabIndex = 47
        //
        //PB_Size1
        //
        Me.PB_Size1.Enabled = False
        Me.PB_Size1.Location = New System.Drawing.Point(682, 467)
        Me.PB_Size1.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.PB_Size1.Name = "PB_Size1"
        Me.PB_Size1.Size = New System.Drawing.Size(678, 75)
        Me.PB_Size1.TabIndex = 46
        //
        //PB_LabelSizeNamed
        //
        Me.PB_LabelSizeNamed.AutoSize = True
        Me.PB_LabelSizeNamed.Location = New System.Drawing.Point(162, 467)
        Me.PB_LabelSizeNamed.Name = "PB_LabelSizeNamed"
        Me.PB_LabelSizeNamed.Size = New System.Drawing.Size(136, 48)
        Me.PB_LabelSizeNamed.TabIndex = 51
        Me.PB_LabelSizeNamed.Text = "Named"
        //
        //LabelKeyWords
        //
        Me.LabelKeyWords.AutoSize = True
        Me.LabelKeyWords.Location = New System.Drawing.Point(162, 986)
        Me.LabelKeyWords.Name = "LabelKeyWords"
        Me.LabelKeyWords.Size = New System.Drawing.Size(190, 48)
        Me.LabelKeyWords.TabIndex = 71
        Me.LabelKeyWords.Text = "Key Words"
        //
        //ProgressBarKeyWords
        //
        Me.ProgressBarKeyWords.Enabled = False
        Me.ProgressBarKeyWords.Location = New System.Drawing.Point(682, 986)
        Me.ProgressBarKeyWords.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.ProgressBarKeyWords.Name = "ProgressBarKeyWords"
        Me.ProgressBarKeyWords.Size = New System.Drawing.Size(678, 75)
        Me.ProgressBarKeyWords.TabIndex = 70
        //
        //LabelOperators
        //
        Me.LabelOperators.AutoSize = True
        Me.LabelOperators.Location = New System.Drawing.Point(162, 1092)
        Me.LabelOperators.Name = "LabelOperators"
        Me.LabelOperators.Size = New System.Drawing.Size(179, 48)
        Me.LabelOperators.TabIndex = 73
        Me.LabelOperators.Text = "Operators"
        //
        //ProgressBarOperators
        //
        Me.ProgressBarOperators.Enabled = False
        Me.ProgressBarOperators.Location = New System.Drawing.Point(682, 1092)
        Me.ProgressBarOperators.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.ProgressBarOperators.Name = "ProgressBarOperators"
        Me.ProgressBarOperators.Size = New System.Drawing.Size(678, 75)
        Me.ProgressBarOperators.TabIndex = 72
        //
        //LabelFunctions
        //
        Me.LabelFunctions.AutoSize = True
        Me.LabelFunctions.Location = New System.Drawing.Point(162, 1195)
        Me.LabelFunctions.Name = "LabelFunctions"
        Me.LabelFunctions.Size = New System.Drawing.Size(172, 48)
        Me.LabelFunctions.TabIndex = 75
        Me.LabelFunctions.Text = "Functions"
        //
        //ProgressBarFunctions
        //
        Me.ProgressBarFunctions.Enabled = False
        Me.ProgressBarFunctions.Location = New System.Drawing.Point(682, 1195)
        Me.ProgressBarFunctions.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.ProgressBarFunctions.Name = "ProgressBarFunctions"
        Me.ProgressBarFunctions.Size = New System.Drawing.Size(678, 75)
        Me.ProgressBarFunctions.TabIndex = 74
        //
        //FileInputOutputScreen
        //
        Me.AutoScaleDimensions = New System.Drawing.SizeF(20.0!, 48.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(2446, 1622)
        Me.Controls.Add(Me.LabelFunctions)
        Me.Controls.Add(Me.ProgressBarFunctions)
        Me.Controls.Add(Me.LabelOperators)
        Me.Controls.Add(Me.ProgressBarOperators)
        Me.Controls.Add(Me.LabelKeyWords)
        Me.Controls.Add(Me.ProgressBarKeyWords)
        Me.Controls.Add(Me.PB_LabelSizeDataType)
        Me.Controls.Add(Me.PB_LabelSizeColor)
        Me.Controls.Add(Me.PB_LabelSizeFlowChart)
        Me.Controls.Add(Me.PB_LabelSizeSymbol)
        Me.Controls.Add(Me.PB_LabelSizeNamed)
        Me.Controls.Add(Me.PB_Size5)
        Me.Controls.Add(Me.PB_Size4)
        Me.Controls.Add(Me.PB_Size3)
        Me.Controls.Add(Me.PB_Size2)
        Me.Controls.Add(Me.PB_Size1)
        Me.Controls.Add(Me.ToolStripFileInputOutput)
        Me.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.Name = "FileInputOutputScreen"
        Me.Text = "File Input Output Screen"
        Me.WindowState = System.Windows.Forms.FormWindowState.Maximized
        Me.ToolStripFileInputOutput.ResumeLayout(False)
        Me.ToolStripFileInputOutput.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

        End Sub

        Friend WithEvents ToolStripFileInputOutput As ToolStrip
        Friend WithEvents ToolStripButtonShowFlowChart As ToolStripButton
        Friend WithEvents ToolStripButtonOpenFile As ToolStripButton
        Friend WithEvents ToolStripButtonSaveFileAs As ToolStripButton
        Friend WithEvents ToolStripButtonFlowChartToSourceCode As ToolStripButton
        Friend WithEvents ToolStripButtonSourceCodeToFlowChartCode As ToolStripButton
        Friend WithEvents PB_LabelSizeDataType As Label
        Friend WithEvents PB_LabelSizeColor As Label
        Friend WithEvents PB_LabelSizeFlowChart As Label
        Friend WithEvents PB_LabelSizeSymbol As Label
        Friend WithEvents PB_Size5 As ProgressBar
        Friend WithEvents PB_Size4 As ProgressBar
        Friend WithEvents PB_Size3 As ProgressBar
        Friend WithEvents PB_Size2 As ProgressBar
        Friend WithEvents PB_Size1 As ProgressBar
        Friend WithEvents PB_LabelSizeNamed As Label
        Friend WithEvents LabelKeyWords As Label
        Friend WithEvents ProgressBarKeyWords As ProgressBar
        Friend WithEvents LabelOperators As Label
        Friend WithEvents ProgressBarOperators As ProgressBar
        Friend WithEvents LabelFunctions As Label
        Friend WithEvents ProgressBarFunctions As ProgressBar
        Friend WithEvents LabelProgramStatus As ToolStripLabel
        Friend WithEvents ToolStripButtonShowSymbolScreen As ToolStripButton
        Friend WithEvents ToolStripButtonShowOptionScreen As ToolStripButton
        End Class
}//end of class FileIoScreenClass
}//End of namespace FlowChartNameSpace
