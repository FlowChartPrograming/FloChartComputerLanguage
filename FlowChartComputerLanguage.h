

// compile with /ZW
using namespace std;


#include <io.h>
#include <windows.system.h> 
#include <system.h>

using system

////using system;
////using System.Collections.Generic
////using System.Diagnostics
////using System.Globalization
////using System.IO
////using System.Linq
////using System.Reflection;
////using System.Runtime.CompilerServices;
////using System.Security;
////using System.Text;
////using System.Threading.Tasks;
////using Microsoft.VisualBasic;
////using Microsoft.Win32.SafeHandles;
////using System.Runtime.InteropServices;
////using System.ComponentModel;


namespace FlowChartComputerLanguage
{
    class FlowChartStructures {
        public sealed class StringBuilder : System.Runtime.Serialization.ISerializable

        system.text.rune  string1 = new string(chars);


        string*  MyConstantIgnoreFunctionOperatorkeyWord = "zzzzzzzzz";
        string*  FD = ", ";



        struct MyPointStructure
        {
            long Xx;
            long Yy;
        };

        struct MyLineStructure
        {
            MyPointStructure a;
            MyPointStructure b;
        };

        long long  ShowScreen1 = 1; // 1 means to show this form
        long long HideScreen1 = 0; // 0 means to hide this form 


        long TimerFlowChartIndexCounter; // This is only for the timers routines to know to go to the next symbol/path
        /// <summary>
        ///         '''  list of error messages that are put into the flowchart to be displayed. 
        ///         ''' </summary>


        string  MyErrorList[34] = {
            @"1001 Symbol does not have a /point CameFromLine",
            @"1002 Symbol does not have a /point GotoNextLine",
            @"1003 Symbol goes to two or more places (A symbol can come from many places, but can only goto one place)",
            @"1004 Points of a symbol is not connected to any path",
            @"1005 Paths are not connected to any symbol or constant - they must all connect to both ends to symbol or another path, or a constant",
            @"1006 Not all of the point names are in the Syntax",
            @"1007 That the Syntax matches the program text.",
            @"1008 Make sure that the point names are in the point list",
            @"1009 All paths must have at least one output or constant",
            @"1010 All Points have a valid Datatype",
            @"1011 All Datatype have a valid Color",
            @"1012 All Colors are valid (in microsoft, they can only be the assigned colors, and are 'switched if wrong)",
            @"1013 All /point names are in either the microcodetext or the Syntax",
            @"1014 No Duplicate /point names",
            @"1015 No Syntax and No Program Code to make it from",
            @"1016 Two paths meet here with different path names",
            @"1017 Two points with different names",
            @"1018 ?",
            @"1019 ?",
            @"1020 ?",
            @"1021 ?",
            @"1022 ?",
            @"1023 ?",
            @"1024 ?",
            @"1025 ?",
            @"1026 ?",
            @"1027 ?",
            @"1028 ?",
            @"1029 ?",
            @"1030 ?",
            @"1031 ?",
            @"1032 ?",
            @"1033 ?",
            @"1034 ?" };


        const long constantALLFILES = 32;
        const long constantALLTables = 32;
        const long ConstantCharterLength = 16000;
        const float ConstantMaxFlowChartScale = 32; // bigger scale makes the picture smaller and smaller 
        const float ConstantMinFLowChartScale = 0.0009765625;        // 0.0625
        const float ConstantFlowChartScaleChange = 1.5;


        // |~!@%^&*()_-+={[}]\:;'<,>.?/   ' Available special characters for make symntax between two  rmstart & MyUniverse.SysGen.Constants.RMEnd

        // So That I can remember which is which constants
        const long constantCOME_FROM = 1;
        const long constantGOTOS = 0;
        const long constantBufferSizeBeforeChangingSizeOfArray = 64;
        const long constantMyErrorCode = -1;
        long MsgBoxResult = 0;




        string Language_KeyWord[2];// = new string[2];
        string Language_Function[2];//  = new string[2];
        string Language_Operator[2];//  = new string[2];


        string My_keyWord[33];// = new string[33];
        const long My_KeyConstUnknown = 0;
        const long My_KeyConstUnKnownError = 1;
        const long My_KeyConstName = 2;
        const long My_KeyConstPoint = 3;
        const long My_KeyConstLine = 4;
        const long My_KeyConstUse = 5;
        const long My_KeyConstPath = 6;
        const long My_KeyConstDataType = 7;
        const long My_KeyConstFileName = 8;
        const long My_KeyConstVersion = 9;
        const long My_KeyConstAuthor = 10;
        const long My_KeyConstLanguage = 11;
        const long My_KeyConstStroke = 12;
        const long My_KeyConstError = 13;
        const long My_KeyConstDelete = 14;
        const long My_KeyConstConstant = 15;
        const long My_KeyConstX1 = 16;
        const long My_KeyConstY1 = 17;
        const long My_KeyConstX2 = 18;
        const long My_KeyConstY2 = 19;
        const long My_KeyConstColor = 20;
        const long My_KeyConstmicrocodetext = 21;
        const long My_KeyConstNotes = 22;
        const long My_KeyConstOpcode = 23;
        const long My_KeyConstThisCode = 24;
        const long My_KeyConstOption = 25;
        const long My_KeyConstSintax_NotUsed = 26;
        const long My_KeyConstLanguageKeyWord = 27;
        // friend const My_KeyConstUnused28 as long = 28
        // friend const My_KeyConstUnused29 as long = 29
        // friend const My_KeyConstUnused30 as long = 30
        // friend const My_KeyConstUnused31 as long = 31
        // friend const My_KeyConstUnused32 as long = 32





        // See init () for the assignmane because what is allowed is sometimes defined by what is in a combobox list
        string formatLanguage; // "/Language=language
        string formatColor; // "/Color=Color Name" & FD & " Alpha" & FD & " Red" & FD & " Green" & FD & " Blue" & FD & " Style" & FD & " StartCap" & FD & " EndCap"
        string formatDatatype; // "/datatype=datatypename" & FD & " Number Of Bytes" & FD & " Color Name" & FD & " Color Width" & FD & " Describtion"
        string formatSymbolName; // "/Name=Symbol Name" & FD & " options"
        string formatPoint; // "/Point = X" & FD & " Y" & FD & " {Input/Output...}" & FD & " Data Type" & FD & " Name"
        string formatLine; // "/Line=x1" & FD & " y1" & FD & " x2" & FD & " y2" & FD & " Color"
        string formatNameOfFile; // "/FileName=Device:/Path/FileName.Extension"
        string formatStroke; // "/Stroke={}"
        string formatNotes; // "/Notes={}"
        string formatVersion; // "/Version={}"
        string formatAuthor; // "/Author={}"
        string formatOpcode; // "/OpCode={}"
        string formatPath; // "/Path=Name" & FD & " x1" & FD & " y1" & FD & " x2" & FD & " y2" & FD & " Data type"
        string formatUse; // "/Use=Name" & FD & " X" & FD & " Y" & FD & " rotation" & FD & " future dynamic options"
        string formatConstant; // "/Constant=name " & FD & " X" & FD & " Y" & FD & " Value"
        string FormatMacroText; // "/microcodetext=Order section name, Text [replacements] text ..."
        string FormatSintaxKeyWord; // "/Syntax={keyword" & FD & "special characters" & FD & rmstart & "variable" & MyUniverse.SysGen.Constants.RMEnd & " " & FD & rmstart & "quote" & MyUniverse.SysGen.Constants.RMEnd & FD & rmstart & "number" & MyUniverse.SysGen.Constants.RMEnd & FD & "Alphabetics" & FD & " and so on}"
        string FormatOption; // "/Option=number" & FD & "{on or off}  or /Option as  string 'ComputerLanguage"
        string FormatError; // "/error  as  string ' Code" & FD & " name" & FD & " x1" & FD & " y1" & FD & " Name " & FD & " {other things maybe}"
        string FormatDelete; // "/Delete ..."
        string FormatThisCode; // "/ThisCode added to /path or /constant "
        string FormatLanguage_KeyWord; // "/Keyword=ReservedWord"
        string FormatLanguage_Function; // "/function=FunctionWord"
        string FormatLanguage_operator; // "/Operator=operator"
        string FormatSet_;
        string FormatOrder; // /Order=section1,(Sections2,(Sections3,Sections4,Sections5))

       // 1-8 is unusable
       // 9- (  MyUniverse.SysGen.constants.constantfirstlanguage-1) is options
       // ( constantfirstlanguage to constantlastlanguage )is for computer languages that is build into for special rules (as yet unknown)
       // (  MyUniverse.SysGen.constants.constantlastlanguage +1 to 99 99 is for messages (msgbox, and just sending to the text status text box)
        char MyMessageBits[1251];// = new char[1251]; // 1250 givess exactly 10,000 bit settings for yes or no

       // not used?  Public Shared FastFlipFlop(4, 14) As Short

       // 
       // 'Fliping instruction X=XX+XY, Y=YX+YY   to flip X=-1+0, Y=0+1 (see The first 0 of each for the default non Flipable example)
       // 0=defalut, 1=flip, 2=flop, 3=Rotate90, 4=Rotate180, 5=Rotate270
       // Flip=sidways, Flop=top2bottom, 
       // Matrix
       // 0  1  2  3  4  5     6    7    8    9   10   11
       // 1  -1 1  0  1  0
       // 0  0  0  1  0  -1
       // 0  0  0  -1 -1 1
       // 1  1  -1 0  0  0
        struct MyRECTStructure
        {
            MyLineStructure MyWorldXY;            // Used for real world XY
            MyLineStructure MyInputScreenXY;       // Used for the screen XY
        };
        struct MyScreenInfoStructure
        {
            string MouseStatus;
            string MouseStroke;
            MyLineStructure MyScreen;
            MyPointStructure MyScrenZeroZero;
            bool PaintThisOrEraseThis;
        };

        struct MyDisplayStructure
        {
            long X;
            long Y;
            string ColorName;
            Brush ColorBrush;
            // todo need to add nere to be able to resize the rectangle that holds the display text size 
            long Textwidth; // current default is 35
            long Textheight; // current default is 50
        };

        struct ChangesMadeStructure
        {
            public bool SymbolNameSelected; // False if no changed, true if change the selected symbol 
            public bool SymbolScreenSymbolEdited; // True when any changes made to catch before you change/delete,not saved.
        };

        struct DumpFileNameStructure
        {
            public  string OutputFileName1;
            public  string OutputFileName2;
            public  string OutputFileName3;
            public  string OutputFileName4;
        };

        struct ProgramStructure
        {
            public  string MyCurrentDirectory;
            public  string Info_AssemblyName;
            public  string Info_CompanyName;
            public  string Info_Copyright;
            public  string Info_Description;
            public  string DirectoryPath1;
            public  string DirectoryPath2;
            public  string Info_ProductName;
            public  string Info_StackTrace;
            public  string Info_Title;
            public  string Info_Trademark;
            public  string Info_Version;
            public  string Info_WorkingSet;
            public  string MinimumSplashScreenDisplayTime;
            public  string UICulture_DisplayName;
            public  string UICulture_EnglishName;
            public  string UICulture_Name;
            public  string UICulture_NativeName;
            public  string UICulture_Parent_Name;
            public  string UICulture_ThreeLetterISOLanguageName;
            public  string UICulture_ThreeLetterWindowsLanguageName;
            public  string UICulture_TwoLetterISOLanguageName;
            public  string FileSystem_SpecialDirectories_AllUsersApplicationData;
            public  string FileSystem_SpecialDirectories_CurrentUserApplicationData;
            public  string FileSystem_SpecialDirectories_Desktop;
            public  string FileSystem_SpecialDirectories_MyDocuments;
            public  string FileSystem_SpecialDirectories_MyMusic;
            public  string FileSystem_SpecialDirectories_MyPictures;
            public  string FileSystem_SpecialDirectories_ProgramFiles;
            public  string FileSystem_SpecialDirectories_Programs;
            public  string FileSystem_SpecialDirectories_Temp;
            public  string Info_AvailablePhysicalMemory;
            public  string Info_AvailableVirtualMemory;
            public  string Info_OSFullName;
            public  string Info_OSPlatform;
            public  string Info_OSVersion;
            public  string Info_TotalPhysicalMemory;
            public  string Info_TotalVirtualMemory;
            public  string Mouse_WheelScrollLines;
            public  string Mouse_WheelExists;
            public  string Name;
            public  string Network_GetType_FullName;
            public  string Network_GetType_MemberType;
            public  string Network_GetType_Namespace;
            public  string Registry_CurrentUser_Name;
            public  string Registry_LocalMachine_Name;
            public  string Registry_PerformanceData_Name;
            public  string Registry_Users_Name;
            public  string Screen_DeviceName;
            public  string Screen_BitsPerPixel;
            public  string Screen_Bounds_Size_Width;
            public  string Screen_Bounds_Size_Height;
            public  string Screen_WorkingArea_Width;
            public  string Screen_WorkingArea_Height;
            public  string CurrentPrincipal_Identity_Name;
            public  string CurrentPrincipal_Identity_GetType_FullName;
            public  string CurrentPrincipal_Identity_GetType_GUID;
            public  string User_Name;
            public  string WebServices_GetType_GUID;
            public  string WebServices_GetType_Assembly_FullName;
            public  string WebServices_GetType_Assembly_Location;
            public  string WebServices_GetType_AssemblyQualifiedName;
            public  string WebServices_GetType_Name;
            public  string WebServices_GetType_Namespace;
            public  string WebServices_GetType_UnderlyingSystemType_FullName;
        };


        // This is simply an option for each symbol, it is up to the microtextcode to use it.
        struct SymbolOptionsStructure
        {
            public  string OptionNames;
            public long OptionNumber;
        };


        struct MySystemStructure
        {
            public ProgramStructure USER;
            public long FCProcessID;
            public DumpFileNameStructure Dumps;
            public  string MyPreProcessorDirectory;
            public  string MyNOTaClipBoard;
            public SymbolOptionsStructure[] FlowChartOptions;
        };

        struct SnapStructure
        {
            public long MySnap; // min snap (assume 1) (used in symbol screen only)
            public long MyPointSnap; // the grid for points and paths
            public long MySymbolSnap; // The grid for placing symbols on the flow chart (used in the Flow Chart Screen only)
            public long MaxSymbolInYSpacing; // The maximun height of the automatic placement (before it rolls back to the top .
        };


        struct MyFlowChartStructure
        {
            public ConstantsStructure Constants;
            public bool FindingMyBugsFlag;
            public  string Order; // Order of the sections of the code
            public long NumberOfButtonsActive;
            public long HighestSymbolNumber;
            public SnapStructure Snaps;
            public long MinBox;  // Min Size of box to select all
            public float MyFlowChartScale;
            public float MySymbolScale;
            public MyPointStructure Size;
            public Int16 ReSize; // Used as a flag to not let resize call it's self recursively (987 vs anything else)
            public bool DontAskToAdd;
            public MyPointStructure Placement;
            public ChangesMadeStructure ChangesMade;
        };

        struct ConstantsStructure
        {
            public  string RMStart;
            public  string RMEnd;
            public  string ConstantQuote;
            public  string ConstantQuotes;
            public  string ConstantVariable;
            public  string ConstantNumber;
            public  string ConstantAlpha;
            public  string ConstantSpecialCharacter;
            public  string ConstantComment;
            public long constantSymbolCenter;
            public long constantSpacingFactor;
            public long constantMinPenSize;
            public long constantMaxPenSize;
            public long constantMinBoxSize;
            public long constantFirstLineTextOffset;
            public long constantSecondLineTextOffset;
            public long constantDistanceBetweenControls;
            public long constantRecordsBeforeSaveIsAllowed;
            public long constantDistanceToMovePaths;
            public  string ConstantSpecialCharacters;
            public  string ConstantWhiteSpace;
            public  string ConstantDelimeters;
            public  string ConstantCameFromLine;
            public  string ConstantGotoNextLine;
        };


        struct MyParseStructure
        {
            public  string LastCodeLine;
            public  string LastParsedVariableNames;
            public string[] LastParseArray;
        };

        struct Flow_Chart_File_Path_Name_Structure
        {
            public long LastIndexFlowChart;
            public  string LastFlowChart_FilePathName;
        };

        struct MyEnumStructure
        {
            public string[] LastResults;
            public  string LastWhatString;
            public  string LastComboBox;
            public long Last_Enum;
            public  string LastUnEnum;
        };


        struct FindIndex_In_TableNetLinksStructure
        {
            public long LastIndex;
            public long LastFound;
            public  string LastPathName;
        };



        struct StaticStructure
        {
            public long Tagged;
            public long tag;
            public long LookforX, LookForY;
            public long FoundX, FoundY;
            public MyPointStructure MinXY;             // Location of total picture
            public MyPointStructure MaxXY;
            public string[] Hints; // Not static, but a list of the last 10 new hints.
            public FindIndex_In_TableNetLinksStructure FindIndex_In_TableNetLinks;
            public MyEnumStructure MyEnum;
            public MyEnumStructure MyUnEnum;
            public Flow_Chart_File_Path_Name_Structure FlowChart_FilePathName;
            public MyParseStructure LastParsed;
        };

        struct MyCheatingStructure
        {
            public  string LastDataTypeFound; // shorten finddatatypeorcolor()
            public  string LastColorFound; // shorten finddatatypeorcolor()
            public  string LastTable;
            public  string LastString;
            public long LastIndex;
            public  string LastSearchString;
            public  string LastSearchFind;
            public  string LastiSAMStringTable;
            public  string LastiSAMStringString;
            public long LastiSAMStringIndex;
            public  string LastiSAMNumberTable;
            public long LastiSAMNumberNumber;
            public long LastiSAMNumberIndex;
            public long ColorsSorted;
            public long DataTypeSorted;
            public long NamedSorted;
            public long FlowChartSorted;
            public long BugsCounted;
            public  string LastSortedStringTable;
            public  string LastSortedStringString;
            public long LastSortedStringIndex;
            public  string Last_UnSortedStringTable;
            public  string Last_UnSortedStringString;
            public long Last_UnSortedStringIndex;
            public  string LastLanguageTable;
            public  string LastLanguageString;
            public long LastLanguageIndex;
        };

        struct CStructure
        {
            public bool StillComment; // This is for the /* to the */ comments
        };

        struct LanguageStructure
        {
            public CStructure C;
        };

        struct IOTypeStructure
        {
            public long Input;
            public long Output;
            public long Both;
            public long Other;
            public long Total;
        };

        struct PointTypeStructure
        {
            public  string MyName;
            public IOTypeStructure Logic;
            public IOTypeStructure Data;
            public long Total;
        };

        struct UseTypeStructure
        {
            public  string MyName;
            public long Total;
        };

        struct MyPointCountsStructure
        {
            public PointTypeStructure NumberOfPoints;
            public PointTypeStructure NumberOfLines;
            public PointTypeStructure NumberOfOther;
            public long Total;
        };

        struct MyPathCounts
        {
            public  string PathName;
            public PointTypeStructure NumberOfConnectionsToOtherPaths;
            public PointTypeStructure NumberOfConnectionsToSymbols;
            public long NumberOfErrors;
            public long Total;
        };

        struct MyUseStructure
        {
            public long IndexUseSymbol;
            public MyPointCountsStructure NumberOfConnections;
            public long Total;
        };
        struct MySymbolCountsStructure
        {
            public MyPointCountsStructure Symbol;
            public MyPathCounts Path;
            public MyUseStructure Uses;
            public long Total;
        };

        struct MySymbolPointPreference
        {
            public long X;
            public long Y;
        };



        struct ProgramOptionsStructure
        {
            public  string C_L_Directory;
            public  string C_L_Case;
            public  string C_L_Comment;
            public  string C_L_Extention;
            public  string C_L_MultiLine;
            public  string C_L_LanguageClassName;
            public  string C_L_DialectName;         // 
            public  string C_L_VarChars;
            public  string C_L_Process;
            public  string C_L_Order;
            public  string FlowChartTextBox;
            public  string SelectedSymbolName;
            public  string SelectedDataType;
            public  string SelectedColor;
            public  string SelectedInputOutput;
            public  string SelectedRotation;
            public  string SelectedPathStart;
            public  string SelectedPathEnd;
            public  string SelectedPathLineStyle;
            public  string SelectedNumberOfBytes;

            public long SelectedObject;
            public  string Helpurl;
            public bool SymbolChanged; // This is a flag if something changes on the symbol screen to allow it to be updated (added)
        };

        struct FlowChartRegisterStructure
        {
            public  string FCRName;               // name of the program,
            public  string FCRVersion;            // Version of the program
            public  string FCRCPUid;              // This should be the computer ID, so that it can be licened to a single computer
            public  string FCRKey;                // This is the key that lets it do more stuff (
            public  string FCRUserLevel;          // This is the level that the user is allowed up to
            // So that the program can be made to be used by students by levels (The FlowChartKey should set this level
            public  string FCRUserProfession;     // This is the level of expertise
            // This level should be made available via a drop down of the allowed levels of expertise.
            public  string ID;
        };


        struct MyUniverseStructureunUsedXXXXXXXX
        {
            public  string Security;  // This  string holds what the user can and can not do (See Security())
            public FlowChartRegisterStructure PaidFor;
            public MySystemStructure MySystem;
            public MyFlowChartStructure SysGen;
            public ImportLineStruct MySS;
            public MyScreenInfoStructure MyMouseAndDrawing;
            public MyRECTStructure Area;
            public MyCheatingStructure MyCheatSheet;
            public StaticStructure MyStaticData;
            public ProgramOptionsStructure ProgramOptions;
            public LanguageStructure Languages;
            public MySymbolCountsStructure SymbolAndPath;
            public MySymbolPointPreference[] MySymbolPoints;
            public MyDisplayStructure[] OptionDisplay;
        };

        struct IndexsStruct
        {
            public long IndexFlowChart;
            public long IndexNamed;
            public long IndexSymbol;
            public long IndexDataType;
            public long IndexColor;
        };
        struct MyNumberOrString
        {
            public long MyNumber;
            public  string MyString;
        };

        struct MyRecordStruct
        {
            public byte Coded;
            public long X1, Y1;
            public MyNumberOrString X2, Y2;
            public  string NameOfPoint;
            public MyPointStructure a;
            public MyPointStructure b;
        };

        struct TempsStructure
        {
            public  string TempFormat;
            public long TempRecord;
            public long TempInteger1; // no longer temp(s)
            public  string TempString2; // on/off or true/false ...
            public long Templong;
        };

        struct TextsStructure
        {
            public  string KeyLineOrFile;
            public  string KeyWord;
            public  string KeyParameters;
            public long LineNumberIn;
        };

        struct ImportLineStruct
        {
            public TextsStructure Inputs;
            public TempsStructure Temps;
            public  string LastName;
            public long IndexName, IndexSymbol;
            public long TopMost;
            public MyRecordStruct MyRecord;
            public IndexsStruct MyIndexEs;
        };

        struct ThisArrow
        {
            public long TempPenWidthSize, ArrowFactor, DirectionIs;
            public long IndexDataType; // Used Only For Trying to improve the speed by not sorting
            public Pen MinePen;
            public MyPointStructure MyXY1;        // center point to show direction
            public MyPointStructure MyXY2;        // shows direction of path into the symbol
            public MyPointStructure XY1;             // Used only to display points (as lines)
            public MyPointStructure XY2;             // Other end of the line
            // Dim index As long           ' Index of this data type
            public  string clrName, Temp;
            public long Input_Output_Both_Direction;
            public int[] IO_SizeModifier;
        };



        // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
        // This is data file stuff (That should be in a data file)
        internal static long Named_TableCount;            // This is one for each symbol 
        internal static long Symbol_TableCount;         // Number in the MyArray (Points to last)
        internal static long FlowChart_TableCount;         // Number in the MyArray (Points to last)
        internal static long DataType_TableCount; // The number of DataType_Tables in the table
        internal static long Color_TableCount;       // A list of the colors available to use
        internal static long SymbolNumber_Counter;




        internal static MyPointStructure ZeroZero;
        internal static MyLineStructure ZeroZeroZeroZero;
        internal static string[] My_Sintax_Line_Parsed = new string[33];
        string My_CodeLine_Parsed = new string[33];
        string PathNames; // global that is the current list of the variable names only of the parsed code line



        internal static long[] Color_Name_iSAM = new long[17];         // Sorted Pointers to MyArray
        string Color_FileName = new string[17];
        internal static byte[] Color_FileAlpha = new byte[17];
        internal static byte[] Color_FileRed = new byte[17];
        internal static byte[] Color_FileGreen = new byte[17];
        internal static byte[] Color_FileBlue = new byte[17];
        internal static byte[] Color_FileEndCap = new byte[17];
        internal static byte[] Color_FileStartCap = new byte[17];
        internal static byte[] Color_FileStyle = new byte[17];


        // One record per each symbol
        internal static long[] Named_FileSymbolName_iSAM = new long[33];            // sorted Indexess to MyArrays
        internal static long[] Named_FileSintax_Isam = new long[33];                  // Only used during Decompile and reset to length of one afterwards

        string Named_FileSymbolName = new string[33];       // Name of the symbol
        string Named_FileSintax = new string[33]; // The Syntax for the decompiler made from the progam test 2020/6/22
        internal static long[] Named_FileSymbolIndexes = new long[33];      // A Indexes to this symbol in the Symbol Graphics Table         'Find the symbol name and this Indexes should point to the first record of the file_symbol list of graphics
        string Named_Filemicrocodetext = new string[33];       // The actural program microcodetext to be 'fixed'
        string Named_FileOpCode = new string[33];     // The Machine code of this assemble symbol
        string Named_FileNotes = new string[33];      // Notes for this symbol
        string Named_FileNameOfFile = new string[33];   // The device:/path/Filename where this came from 
        string Named_FileAuthor = new string[33]; // Who wrote or responsable for this symbol
        string Named_FileVersion = new string[33]; // the date of the latest update
        string Named_FileStroke = new string[33];     // The movement of the mouse that id's this symbol
        // 2020 08 12 removed because each symbol is NOT language related, only the whole FlowChart        'friend shared  Named_FileLanguage(constantALLFILES) As  string   'The computer language this applies to


        // Does not have a sorted way of finding things (yet) should search Named and then get the index/key
        // This is mostly the graphics of a symbol, It has to remane unsorted.  A Indexes from the sorted NAME list should be used
        string Symbol_FileSymbolName = new string[33]; // The name of this symbol for /Name code
        internal static byte[] Symbol_FileCoded = new byte[33];  // The code /line /point etc 
        internal static long[] Symbol_FileX1 = new long[33];
        internal static long[] Symbol_FileY1 = new long[33];
        internal static long[] Symbol_FileX2_io = new long[33];  // Used also as enum Input/output/bot/optional IO . . . . 
        internal static long[] Symbol_FileY2_dt = new long[33];   // Also used as the index to the data type
        string Symbol_File_NameOfPoint = new string[33];

        string Net_FileNames = new string[1]; // This hold the name of the paths
        string Net_FileLinks = new string[1]; // This holds all of the link numbers that are connected together.

        string FlowChart_FilePathSymbolName = new string[33];  // The name of the /use, the variable name of /Path & /Constant
        internal static byte[] FlowChart_FileCoded = new byte[33]; // The codes /Use, /Path, /Constant
        internal static long[] FlowChart_FileX1 = new long[33];
        internal static long[] FlowChart_FileY1 = new long[33];
        internal static long[] FlowChart_File_X2_Rotation = new long[33];       // X2 for /path, Rotation for /use
        internal static long[] FlowChart_File_Y2_Option = new long[33];       // Y2 for path , future options for /use
        string FlowChart_File_DataType = new string[33];  // The datatype for /Path /constant
        // Tempary Holds information strings during compile (Path Connections, and completed Code)
        // Friend Shared FlowChart_FileCompiledMacroCodeText(constantALLTables) As String

        internal static long[] FlowChart_iSAM_X1 = new long[33];     // Holds Indexess to the FlowChart, sorted (Indexd Sequencial Access Method
        internal static long[] FlowChart_iSAM_Y1 = new long[33];
        internal static long[] FlowChart_iSAM_X2 = new long[33];
        internal static long[] FlowChart_iSAM_Y2 = new long[33];
        internal static long[] FlowChart_iSAM_Name = new long[33];



        internal static long[] DataType_Name_iSAM = new long[33];        // Sorted MyArray to Names of the datatypes
        string DataType_FileName = new string[33];    // Name of the datatype
        string DataType_FileDescribtion = new string[33];
        internal static long[] DataType_FileNumberOfBytes = new long[33];      // size in bytes of the data
        internal static long[] DataType_FileColorIndex = new long[33];   // number of the color in color_file... to use
        internal static  byte[] DataType_FileWidth = new  byte[33];     // Width of the /Path and diramter of the /Points


        string DrillDown_FileName;      // ONLY CUrrent File name Device:/Paths/Filename.Extension


       // (direction, First/Second line, X/Y
        internal static s byte[, , ] MyDirections = new s byte[17, 3, 3];  // This is the matrix to determine the two end points from the center
        internal static long[] MyBits = new[] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8198, 16384, 32768, 65536.131072, 262144, 524288, 1048576 };



        internal static long[, ] MyRotation = new long[5, 13]; // holds how to rotate


        string MyCmdModeString;

        internal static Pen GetMyPen;
        internal static Brush GetMyBrush;

        bool ProgramAlive = false;



        struct DWORD64
        {
            public long long X;
        };
        struct DWORD
        {
            public long X;
        };
        struct WORD
        {
            public Int16 X;
        };


        struct NEON128 // int128
        {
            public  byte  X0, X1, X2, X3, X4, X5, X6, X7, X8, X9;
            public  byte  X10, X11, X12, X13, X14, X15, X16, X17, X18, X19;
        };
        struct ULONGULONG // 'Int512
        {
            public  byte  X0, X1, X2, X3, X4, X5, X6, X7, X8, X9;
            public  byte  X10, X11, X12, X13, X14, X15, X16, X17, X18, X19;
            public  byte  X20, X21, X22, X23, X24, X25, X26, X27, X28, X29;
            public  byte  X30, X31, X32, X33, X34, X35, X36, X37, X38, X39;
            public  byte  X40, X41, X42, X43, X44, X45, X46, X47, X48, X49;
            public  byte  X50, X51, X52, X53, X54, X55, X56, X57, X58, X59;
            public  byte  X60, X61, X62, X63;
        };
        struct M128A // Int128
        {
            byte  X0, X1, X2, X3, X4, X5, X6, X7, X8, X9;
            public  byte  X10, X11, X12, X13, X14, X15;
        };

        /*
                struct My_System_CONTEXT_Registers
                {
                    public DWORD64 P1Home;
                    public DWORD64 P2Home;
                    public DWORD64 P3Home;
                    public DWORD64 P4Home;
                    public DWORD64 P5Home;
                    public DWORD64 P6Home;
                    public DWORD ContextFlags;
                    public DWORD MxCsr;
                    public WORD SegCs;
                    public WORD SegDs;
                    public WORD SegEs;
                    public WORD SegFs;
                    public WORD SegGs;
                    public WORD SegSs;
                    public DWORD EFlags;
                    public DWORD64 Dr0;
                    public DWORD64 Dr1;
                    public DWORD64 Dr2;
                    public DWORD64 Dr3;
                    public DWORD64 Dr6;
                    public DWORD64 Dr7;
                    public DWORD64 Rax;
                    public DWORD64 Rcx;
                    public DWORD64 Rdx;
                    public DWORD64 Rbx;
                    public DWORD64 Rsp;
                    public DWORD64 Rbp;
                    public DWORD64 Rsi;
                    public DWORD64 Rdi;
                    public DWORD64 R8;
                    public DWORD64 R9;
                    public DWORD64 R10;
                    public DWORD64 R11;
                    public DWORD64 R12;
                    public DWORD64 R13;
                    public DWORD64 R14;
                    public DWORD64 R15;
                    public DWORD64 Rip;
                    // union X Y

                    // Structure XMM_SAVE_AREA32
                    public NEON128 Q0, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15;
                    public long long D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13, D14, D15, D16, D17, D18, D19, D20, D21, D22, D23, D24, D25, D26, D27, D28, D29, D30, D31;
                    public M128A Header0, Header1;
                    public M128A Legacy0, Legacy1, Legacy2, Legacy3, Legacy4, Legacy5, Legacy6, Legacy7;
                    public M128A Xmm0;
                    public M128A Xmm1;
                    public M128A Xmm2;
                    public M128A Xmm3;
                    public M128A Xmm4;
                    public M128A Xmm5;
                    public M128A Xmm6;
                    public M128A Xmm7;
                    public M128A Xmm8;
                    public M128A Xmm9;
                    public M128A Xmm10;
                    public M128A Xmm11;
                    public M128A Xmm12;
                    public M128A Xmm13;
                    public M128A Xmm14;
                    public M128A Xmm15;
                    // End Structure

                    // Structure DUMMYSTRUCTNAME
                    public DWORD S0, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20, S21, S22, S23, S24, S25, S26, S27, S28, S29, S30, S31;
                    // End Structure
                    // Dim VectorRegister(26) As M128A
                    public M128A VR0, VR1, VR2, VR3, VR4, VR5, VR6, VR7, VR8, VR9, VR10, VR11, VR12, VR13, VR14, VR15, VR16, VR17, VR18, VR19, VR20, VR21, VR22, VR23, VR24, VR25;
                    public DWORD64 VectorControl;
                    public DWORD64 DebugControl;
                    public DWORD64 LastBranchToRip;
                    public DWORD64 LastBranchFromRip;
                    public DWORD64 LastExceptionToRip;
                    public DWORD64 LastExceptionFromRip;
            };
            */
    };
};