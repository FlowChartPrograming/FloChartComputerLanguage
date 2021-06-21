
//


namespace FlowChartComputerLanguage
{    
    ////using System;
    ////using System.Collections.Generic;
    ////using System.Diagnostics;
    ////using System.Globalization;
    ////using System.IO;
    ////using System.Linq;
    ////using System.Reflection;
    ////using System.Runtime.CompilerServices;
    ////using System.Security;
    ////using System.Text;
    ////using System.Threading.Tasks;
    ////using Microsoft.VisualBasic;
    ////using System.Collections.ObjectModel;

    namespace My
    {
    ////        internal partial class MyApplication
        class MyApplication
        {
            ////public event ApplyHighDpiModeEventHandler ApplyHighDpiMode;

            ////public delegate void ApplyHighDpiModeEventHandler(object sender, ApplyHighDpiModeEventArgs e);

            ////private HighDpiMode ? _highDpiMode;

            internal new HighDpiMode HighDpiMode
            {
                get
                {
                    return _highDpiMode == null ? Application.HighDpiMode : _highDpiMode.Value;
                }
                set
                {
                    _highDpiMode = value;
                }
            }

                // IMPORTANT:
                // If this method causes an compilation error after you've unchecked 'Application Framework' 
                // in the project properties, go to the top of this file and change the value to 'False' in this line:
                // #Const APPLICATION_FRAMEWORK = False

                // For more about using WinForms without the Application Framework 
                // see: https://aka.ms/visualbasic-appframework-net5
                    protected override bool OnInitialize(ReadOnlyCollection<string> commandLineArgs)
                {
                    var eventArgs = new ApplyHighDpiModeEventArgs(_highDpiMode == null ? HighDpiMode.SystemAware : _highDpiMode.Value);

                    ApplyHighDpiMode ? .Invoke(this, eventArgs);

                    Windows.Forms.Application.SetHighDpiMode(eventArgs.HighDpiMode);

                    return base.OnInitialize(commandLineArgs);
                }
        }

        public class ApplyHighDpiModeEventArgs : EventArgs
        {
            public ApplyHighDpiModeEventArgs(HighDpiMode highDpiMode)
            {
                this.HighDpiMode = highDpiMode;
            }

            public HighDpiMode HighDpiMode{ get; set; }
        }
    }
}