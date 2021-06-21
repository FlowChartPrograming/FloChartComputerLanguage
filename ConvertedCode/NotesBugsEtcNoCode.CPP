namespace NotesNotUsed
{
class  NotesBugsEtcNoCode
{
    //h ack   		//Still Needs to be Looked at
    //t odo   		//Things that I have not programmed yet
    //u ndone 	//Things that might not be working, but I have not checked or fixed.
    //b u g    A bug I have found (But can work around it for now)

    //to be done List *************************************************
    //to be done When using non-7 bit Ascii character set, need to fix the strings to allow for non-english characters for things.
    //to be done This can be done, by making all of the constants that I have into things that can be imported....
    //to be done Add a unknow/forign character set.  (Myuniverse.sysgen.constants.constant----......
    //to be done The above in Phase two.

    //to be done should a /use record be in the nets table? when it connects to a point of that symbol??  or would that create //crossnets?//
    //to be done add a C_L_Label, and a C_L_Goto to hold the keyword for labels and how to goto.
    //bug the symbols are to close so that the next ones camfrom is on top of the last ones goto
    //Bug when I put a beginning path to a symbol it is connecting to another path from another symbol, and the names do not match
    //to be done need to add option to save the current file, and then start for a new subroutine/function
    //to be done also  This is because this version will only handle local variables. (need to add pages to have each one on it//s own page, then think about globals.
    //to be done need to put the current file into the title on the flowchart screen, 
    //to be done and current symbol in the title of the symbol screen,  
    //to be done and the computer language in the title of the option screen
    //to be done Need to add camefrom/goto per line, then multiline, change to Goto/CRLF/CameFrom in the middle 
    //to be done need to look at the abtract logic of multi line IF() Then Else (Case also?) Computer GoTo and other muylti goto branches
    //to be done looking having syntax for the Definitions of data types (add a syntax to the datatable for "dim ?? as integer", "integer ??"    //bug flowchart output
    //   " in /ignore line
    //   in /language line
    //   in /C_L_Comment option
    //   in /option line
    //   in /keyword, /operator, /function line
    // " and return in /color lines
    //   both in /datatype line
    //   might also be in /name line 
    // blank line in /point
    // the same point name is given to more than one point (To all of them the same name? (In fact they all comput as address(line number).pathname, never changes to other point names, but it has the right X,Y? I think

    //bug in the export there are /path statements (seems to be what should have been the /points, and the /points are ???)
    //to be done /filename, should take out the label adder, and camefrom adder at the beginning and end 
    //bug export has ", blank lines
    //bug when exporting, the results is that every /point has the same point name. (Address----)
    //bug GotoNextLine and CameFromLine is being told that it is a path name, instead of a keyword
    //bug symbol screen always selects the last symbol
    //to be done add after the keyword, the default picture lines  IE:  Blue,(-20,-20)_(20,-20)_(20,45)(0,0),  ----- where ,color name for this line, //)_(// means line from last to next,  and no - after the ) means end of the line, with new color or continue with same color of a new line
    //to be done the line numbers are not getting updated with the color of the line.
    //to be done fix bug the /error is being inserted into the wrong symbol (The one before it.)
    //to be done Need a button to save all of the symbols into seperate file (later all that have changed)

    //to be done the datatype of the "start" is wrong when printing out in debug.
    //to be done add /order= (Global, routines(Top, code, end))  [ Which means all globals, then the top/code/end of each main)] (, means then next, ( means all symbols connected top-code/end before then next )
    //to be done The datatype is not giving the same (ie: it is a long, but returns word
    //to be done move the fip/flop button from symbol screen to FlowChart screen
    //to be done add and delete to the symbol all of the variable names in the program text box.
    //to be done make the output code ability to write each section of code then put them all together in order.
    //to be done need to clear out the data after the mydecompile
    //to be done autoroute (option 19) when you decompile (Make sure that I am getting the name of the variable as the name on the path.
    //to be done decompile does not connect the paths
    //to be done check that the names of the veriables are being used for the path name in decompile
    //to be done (needs to be checked) see about not letting the buttons be clicked twice 
    //  do not let more than two or three work at the same time! because it overflows the stack)
    //to be done /error is not being put in the symbol that caused it to have an error.
    //to be done Add to the options list : Auto Path Datatype to Point Datatype
    //to be done Add to the options list : auto complete paths
    //to be done Add to the options list : auto route paths
    //to be done Add to the options list : auto move symbols
    //to be done Add to the options list : auto flip symbols
    //Doc  .   in the symbol screen, you can only add points and lines after you have first got a symname.
    //to be done it is not redrawing when you add a point in the symbol screen
    //make newsymbol button have color (to be able to show when it//s disabled)
    //to be done //bug : Show FlowChart	- has to double click to get button to work the first time on the option screen
    //to be done need to add OptionalStart...optionalend to the syntax
    //to be done Add making the syntax, only if optionalstart...end is not there.
    //to be done Need to add both optional, and also select one from a list ie(variable or expression or list or alpha or numberic or alphanumberic ... ie:[variable,expression,quote] )
    //to be done Need to add expressions (variable/constant (then optional) [operator expression] 
    //to be done Add list variable/constant (then optional) [ "," list]  
    //to be done Add Statement (with list and expression)
    //to be done need to get the cpuid serial number and use it for register to get /make a register key
    //to be done Add /obstruction (X only, Y only , X & Y , and fix/unfix (or locked/unlocked), or else it is just a place holder to be able to route path here.
    //     If AutoRoute is turned on, then make all available paths in an /obstruction (locked or unlocked obstruction)

    //to do make sure that the path is connected to the some other path , else auto route it, or cause an error message to be in the flowchart.

    //to be done on the select symbol, make it a tree (collectionitem in collection item based on the keyword (each keyword is a step into the tree (it End While is in t end->while-> etc)
    //   (where end-> has the list end sub, end function , end while, end if, etc.)

    //to be done need to have something to say this is the end of the block/subroutine/function/name space (the end of local variables that do not connect with the rest of the flowchart automatically made symbols.
    //ie: end sub, end function, end, end namespace, end class, finish ... (Save as *.flowchart, (dont forget to add some button to save every symbol by it self))

    //to be done need to add to the data table somehow, the micro text code to define every path name at the beggining of the subroutine ...

    //to be done when selecting a symbol on the symbol screen, it does not update the point names used.
    //GetButtonNames()

    //to be done going from screen scale to real scale is not working correctly.  
    //   The height and width of picturebox1 should be -250,-250 t0 250,250 real and 0,0 to x.width,y.height screen

    //to be done on the symbol screen when you enter text and it makes the syntax,
    //   I need to also fill in the point names,
    //   and make the points when finished
    //   (lost focus on the program text box
    //to be done the symbols are not showing up in the image area correctly and on time.

    //to be done check that all of the buttons display the hint (capture every _changed and put in a buttonrules()
    //to be done change from the scrolls to let a hand move the picture. (Dyminic, then redraw without cleaning the screen first.

    //to be done Ideas (make the name of the point an expression), 
    //to be done       (make all variables into expandable options by adding an operator to an point (new button to add it to a point)
    //to be done   Add List and Expressions to Syntax
    //to be done  Error - All pen objects can not be assigned values (startcap, endcap, style, ...)
    //to be done   The toolstrip drop down will switch screens because I am setting the text from the symbol to the flowchart screen, (Needs a workaround)
    //to be done   ALSO it does not let me select from the drop down.
    //to be done   Make sure that drillUP gets the name of the last file opened.
    //to be done   Make sure that drillDOWN gets the name of the Current file opened.
    //to be done   the FILE IO screen 1. buttons needs to be hit twice to work, 2. the files with the right extensions are not displayed
    //to be done   Check that all of the buttons work (After changing them from buttons to toolstripbuttons, and toolstripdrop downs)
    //to be done   on the flowchart screen pressing to show the symbol screen, the message is adding a symbol to the flowchart
    //to be done   Needs to pre-set defaults in the options screen for input/output, width, #bytes (Color drop down, and DataType drop down)//to be done   The Show FlowChart button in the options screen does not take you to the FlowChart
    //to be done   The select symbol in the FlowChart screen does not work
    //to be done   Changeing the computer language needs to have program status updated
    //to be done   The button to select a symbol in the symbol screen does not get the symbol data
    //to be done   in the options screen , button deelte unused symbol toool tip is wrong
    //to be done   need a subroutine to enable or disable the function buttons (IE can not select a symbol , if there are no symbols
    //to be done   bug in decompile, it will put in the /use symbol twice (with paths)
    //to be done   Bug in counting the atom after it is being parsed, it is done twice, both different from each other.
    //to be done   Need to add the datatypes and colors to the dropdowns on FlowChartScreen (maybe remove them from the symbols form.
    //to be done   need to start to chack all of the buttons to make sure they work
    //to be done   need to write the auto route to run on the added symbols from compileline()
    //to be done   Need to add to Expresion, List, optional
    //to be done   all symbols must have one /point name //CameFrom// and one /point //GotoNext//  {Even if not uses such as start and end/return}
    //to be done   If not then must have the program add those to the symbol???????? (Yes for now)
    //to be done   AND leave an error message that we did that.
    //to be done   need to make the points automatically from the names on the symbol screen
    //to be done   The variable names are not getting to the paths (and/or to the point names)
    //to be done   The /use links are not correctly getting the value of the [variable(s)]  ??.value =
    //to be done   The /use links are not getting the variable name correctly (uses constantvariable etc)
    //to be done   The /use is getting between the quotes
    //to be done   The FlowChartdump show multiply symbols with the same name 
    //to be done   The output show Function with ==COS, and multiply times.
    //to be done   how do you turn off the i/o type in the symbol display
    //to be done   why is there a number of ways to turn off the:
    //to be done  	display symbol name		show symbol names
    //to be done  	display point names		point names
    //to be done  	
    //to be done  does not update the symbol information 
    //to be done  (ie 	syntax, 
    //to be done  	notes, 
    //to be done  	symbol filename, 
    //to be done  	macro code 
    //to be done  	point name(s)
    //to be done  	machine code
    //to be done  	stroke encoding
    //to be done  	datatype
    //to be done  	color name
    //to be done  	width,
    //to be done  	bytes
    //to be done  	inputoutput)
    //to be done   the NEW paths are not where the symbols are.  NEED to CHECK them when they are made to make sure they are all aligned
    //to be done   added checkpathconnected() to make sure that a path is connected to another Path or connected to a symbol point
    //to be done   Lowest Abug(22 739
    //to be done   The paths made might not be at the symbol points, (ie 100 or more off)
    //to be done   must add a timer to move/check paths and also move/check symbols, are not on top of each other.
    //to be done   path making rule A. must have symbol with only two points above and below each other.
    //to be done   MUST FIX THE NEXT ONE TO FIND THE issue OF TWO NAMES
    //to be done   The /name is getting into the table twice
    //to be done   Making points in the symbol creation of keyWord (it should not do that)
    //to be done   Need to allow expresion to happen, that just grows the points and Operator along on e of the 16 directions that is available now.
    //to be done  1. The path names should be the name of the decomplie variable . 
    //to be done  2. The names of the files need to com from or also add the languages being used, and to whate is there now.  
    //to be done   Change the location of added points for decompile to a table 2020 07 26 (Which is puting them close but needs it done better.
    //to be done   Added checkboxes for all of the languages (and a few move for the future )
    //to be done   2020 07 25 started to add language specific information to the program
    //to be done   added CR LF and TAB as special character in ThisIsASpecial() 2020 07 25
    //to be done   need to have an option for usery1 > ???? to allow longer/bigger FlowCharts 
    //to be done   rewrote the makeitbigger() to use the file_counter and then but a makitbigger in each topoffile call
    //to be done   I made a bug when I took out a bunch of ByRef//to be done  s keyWord. 
    //to be done connect the point/line lists up to be able to change the information about a point make sure that If a point name is changed then also change that information in the /point and also in the program code (What issues that could cause!!
    //to be done the points and lines need to ba editable/changable from the symbol screen
    //to be done   Need to add import & options for: What special characters are allowed in a variable name)
    //to be done                                     What special characters are allowed in a variable name
    //to be done                                     what is the field seperator for input files (and import option
    //to be done                                     Changing the error message text (and maybe the level?)
    //working on single line DeCompile bugs
    //ONGOING ADD more FindingMyBugs(), Abug( ) and awarning , and add ainfo( ) 

    // Add /Replace=from text, to text
    //make sure that there is a format for /set...
    // Add language specific options to the import file, and then export them when calling all language.dll
    //check that it is writting out all of the op[tions.
    //Write all of the set options
    //it did Not output /options
    //on save file, it should have the extension of the language type, instead of .source or .src    //to be done Change Sort to be a Insert Sort
    //Write a quick tutorial to start using 
    //Write a book on FlowChart Computer Language (trademark, and register)
    // Add a /conversion=datatypename from, datatypename to, syntax -->{To = convertInterger2String(From)}
    // needs the for all conversions from one datatype to another.
    // also do something about variablename.object... check that it works
    //to be done   Need to output all of the parameters into the export file
    //to be done     CheckBox-, -X, -Y
    //to be done         DisplaySymbolName
    //to be done         DisplayPointNames
    //to be done         Constants
    //to be done         Names
    //to be done         ErrorText
    //to be done         Reserved99
    //to be done         InputOutPu
    //to be done         IDStroke
    //to be done         FileName
    //to be done         AutoConnect
    //to be done         Notes
    //to be done         Opcode
    //to be done         IndexShortCutPointer
    //to be done         CodeOrthogonalPaths
    //to be done         MakePathsSnapToPoints
    //to be done         AutoMoveSymbols
    //to be done         Reserved1
    //to be done         Reserved2
    //to be done         OutPutLineNumbers
    //to be done         ShowPathNames
    //to be done  Checking buttons:
    //to be done  Options Screen:
    //to be done  	Show FlowChart	
    //to be done  	Show Symbol Screen
    //to be done  	Delete Error Messages
    //to be done  	Delete Unused Symbols
    //to be done  	Dump data into \...
    //to be done  FlowChart Screen:
    //to be done  	Show Symbol Screen
    //to be done  	Show Options Screen
    //to be done  	Show FileInputOutput Screen
    //to be done  	Add Path
    //to be done  	Select Symbol (to Add) ?????
    //to be done  	Add Constant
    //to be done  	Move Object
    //to be done  	Delete Object
    //to be done  	Redraw (Shows Show FlowChart Button)
    //to be done  	Zoom In
    //to be done  	Zoom Out
    //to be done  	Select Data Type (For Path)
    //to be done  	Select Color
    //to be done  	Select Symbol	?????
    //to be done  Symbol Screen
    //to be done  	Show FlowChart Screen
    //to be done  	Show Options Screen
    //to be done  	Add Symbol ??????
    //to be done  	Add Point 
    //to be done  	Add Line
    //to be done  	Move Object
    //to be done  	Delete Object
    //to be done  	Update Symbol
    //to be done  	Question Mark, Check All Information
    //to be done  	Select Data Type
    //to be done  	Select Color
    //to be done  	Select Symbol to Add/Update 
    //to be done   Look into being able to change the input formats (by using the constantFormat as the guide)
    //to be done   Long term (third phase) add line ends, with graphics, ...
    //to be done   import()  options to change the mydirections and the flip tables
    //to be done   add options to control the file extensions, and language test (so you only allow symbols with that language (Error message if you try to use one, and a button to get ride of all that do not work in your language(s).
    //to be done   during decompile it does not display the symbols on the FlowChartScreen screen while it is working.  
    //to be done   The parsed() is not correctly telling the syntax of the program text (issues with 1. 2.)
    //to be done   not able to add points or lines now. (They do not show up)
    //to be done   Need to be able to name points (Or add them (from the program text[]) and let them only be moved and not added?????)
    //to be done   need to check that datatypes or line colors are selected first before adding them
    //to be done   Changed around SymbolScreen and made the picture bigger.
    //to be done   Does not draw the symbol on SymbolScreen when active
    //to be done   Changed MyInsertSymbol() to have the index where to insert it at 2020 07 18 (Mistake on my part, opps)
    //to be done   copy2screen???  on SymbolScreen only changes it to -500,-500 instead of the actural conversion
    //to be done   Compileing is finding the closest to the symbol instead of the closest to the point of the symbol.
    //to be done  x Bug is that the name of the symbol is used instead of the name of the point in compile()
    //to be done   Invalid message of path goes nowhere on symbols.
    //to be done  BUG The Symbol Points are no longer where they should be.
    //to be done   The symbol screen selects the wrong symbol (the one below the one selected)
    //to be done   SymbolScreen needs heading above the four dropdowns
    //to be done   Inserting symbol(s) graphics in the endinstead of inserting them where they belong!!!!!!
    //to be done   The arrors for the points are not the correct color for the data type.
    //to be done   datatypes are not getting sorted before exporting
    //to be done   does not overwrite the /microcodetext created by this program. (Should I even Have it, and do I have to have it?)
    //to be done   need to output /color /datatype X/keyWord all in order 
    //to be done   missing flip-flop and options in the /use
    //to be done   not outputing last /path
    //to be done   path names switched to be first!! (So what is the new last item? suppost to be now ( I forgot))
    //to be done   missing the options on save//to be done  s
    //to be done   MISSING /POINT IN SAVE//to be done  S
    //to be done   output the symbol name in the point now (Does not need it?!)
    //to be done   does not save the /keyWord
    //to be done   half of all time is spent comparing strings !!!!!!
    //to be done   When looking up the color from a data type , the index of that color is not pointing to the right color.
    //to be done   still lost paths.
    //to be done   Going through all messages currently at 1264
    //to be done   replaced as many _file with _table as I found 6/7/20
    //to be done   Addthe following line everywhere that there was a swapN(...)
    //to be done   BUG the symbol points are also no longer in the symbol picture for each symbol displayed
    //to be done   Add in files for support to change add to
    //to be done   Need to see why the buttons are no longer working
    //to be done   get rid of the paths of all colors that I was testing
    //to be done   Need to add the level of debug showing to OptionScreen
    //to be done   Added combo boxs on form 3, and they are getting duplicated.
    //Doc  .      document the import/export files formats and options.
    //to be done   Export no longet outputs correctly, and all ENUMS are output as numbers, not the text they represent.
    //to be done   Need to change it so that any /USE with the symbol only having a goto (and no CameFrom) is used instead of the //to be done  start//to be done   symbol
    //to be done   Need to add a disply of the visual stroke movements in SymbolScreen (symbol)
    //to be done   Need to not show FlowChartScreen when importing (only OptionScreen) then switch back
    //to be done   Need to add findFirstXY() to speed up checking 
    //to be done   Change all of my constants to be on OptionScreen as variables
    //to be done   On OptionScreen add a list of the points and text boxes of what they stand for. (Like the other combo boxes)
    //to be done   I have paths at 1000, -20000 but it will not draw or show below Y = 0 (About)
    //to be done  Need to go through from a started file making everythink for a demo (writting down the steps, to show how its done)
    //to be done   CHECK EACH OF THE FOLLOWING ROUTINES IF THEY NEED TO BE RUN AND ARE TAKING TO LONG//to be done  
    //to be done   MyCompared3                              ran 14446 times
    //to be done   InvalidIndex                             ran 8450 times
    //to be done   MyMakeArraySizesBigger                   ran 3567 times
    //to be done   Pop                                      ran 3217 times
    //to be done   DataType_TableName                       ran 2926 times
    //to be done   MyCompared1                              ran 2024 times
    //to be done   MyEnumValue                              ran 1869 times
    //to be done   FileCounter                              ran 1694 times
    //to be done   FileCounter                              ran 1694 times
    //to be done   Color_TableName                          ran 1590 times
    //to be done   MyUnEnum                                 ran 1455 times
    //to be done   WhatComputerLanguage                     ran 1443 times
    //to be done   TopOfFile                                ran 1390 times
    //to be done  ======================================================================
    //to be done  Phase two, 
    //to be done         Need to make a Screen layout (And page layout)
    //to be done         Needd to make symbols that are controlable
    //to be done     on SymbolScreen:
    //to be done         disable add point if: 1, datatype not check , number of bytes, size of line
    //to be done         disable add line if : 1, color not selected.
    //to be done         if a color is selected then clear the datatype, and the add button
    //to be done         disable the add point and line if the number of bytes or line width is not filled in (IE: non zero)
    //to be done   Need to add in /#program text the ability to test for conditions
    //to be done  
    //to be done  Phase Three, need to decompile from any source into a FlowChart (Minor advancement 2020 07 14)
    //to be done         (Making it automatic to a FlowChart from a language source program) ditto
    //to be done         Using the symbols /microcodetext to decompile into ditto
    //to be done  Screen still does not show ALL of the FlowChart on the top and left.
    //to be done  Paths have no width showing (Should be a min of ...
    //to be done   Need to have an option for the path to snap to the closes point that matches the same datatype (ie logic to logic, integer to integer, real to real AX to AX, Eb to Eb  etc)
    //to be done  Need to Add to make sure that every /name in symbols has a name in Named_file also
    //to be done  Need to remove unused symboles from lib
    //to be done  need to add symbols only from other files (import NEW symbols only from file)
    //to be done  Need to be able to creat new symbols
    //to be done   need to add /stroke to let users id symbols without naming them
    //to be done   Unable to change the font size in MyDrawText(), Need to change it so that the size of the letters are changeable
    //to be done   Need to have drilldown() only work on a selected symbol()
    //to be done     then needs to add auto rount (around ever thing that is already there)
    //to be done   need allow the Numberal options of:
    //to be done   	Grid Snap (10/19/18 added, a c heck box, but not change the amount)
    //to be done  	In C heck, the direction to move symbols (and paths) on top of each other.
    //to be done   Need to c heck for paths ontop of each other.
    //to be done   need to set the focus back to the text boxes after pushing a button (and making the button //to be done  show pushed//to be done  
    //to be done   C heck if an error message ready exist at that XY
    //to be done   Button in options to delete all Error messages on the screen
    //to be done   Change Error messages to //pictures// of what;//s wrong.//
    //to be done   Add an /Include Filename.ext (to recursively call import)
    //to be done   Does not allow colors other than those with the name pens.color (Which I put into init( ))
    //to be done   Does not allow to edit the color or datatype support files.
    //
    //to be done need to have the select symbol dropdown be a tree - select each letter until you get to the end, or a form with all of the symbol pictures displayed
    //Done Added error messages if issue of not enough data in the import file.
    //to be done Option to not move symbols in when c hecking (and fixing)
    //to be done To speed things up, make 4 iSAM MyArrays for the FlowChart (for pointers to the X1, Y1, X2, Y2, then sort those MyArrays) To help find the Inswx to XY//s fast er 10/22/2018
    //done Add /Author & Version Date for symbols 10/31/2018
    //to be done  check to only export if there is data (If not isnothing() then don//t)
    //to be done   change all from Bubble sort : Need to have a resort, which will only sort the last addedd item in the sorted file. *10/`/18
    //done Need to create a file when trying to write/export 10/15/18
    //done Need to add back in the color names in the Color file 10/15/18
    //done need to add buttons on SymbolScreen (to work on Symbolfile) just like FlowChartScreen (That works on the FlowChart file) 10/15/18
    //done Neded to add a listbox of colors, and datatypes 10/15/18
    //to be done delete button in SymbolScreen - seems to delete the whole symbol, not a line or point 10/18/18
    //done need to add the commands Add path, symbol, line, point . . . constant
    //done Need to get constant value from input line, and add constant
    //done Need to make move symbol also move the connected points of paths (each point of the symbol//s xy moved ALL paths Points)
    //done Needs to limit the symbol size (constant for now -constantSymbolCenter to constantSymbolCenter) 10/18/18
    //to be done Delete a point in symbols will delete all of the other information in Named. 10/19/18
    //done Need to allow editing of all symbol points (Data Type , Input/output)? Nope, Can delete and add faster

    //to be done (delete and add) Need to edit Symbol information: 10/19/18
    //to be done check	NEW Symbol Name, 
    //to be done check		Filename (to get/save to), 
    //to be done check		Opcode?, 
    //to be done check		Notes, 
    //to be done check		Language used, 
    //to be done check		Stroke used
    //to be done check	 needs to add orthanganol option 10/19/18
    //to be done check	Need to name points (Currently defaults to DataTypeName) 10/22/18 (Changed the datafile also)
    //to be done check	//Need to have OptionScreen full screen
    //to be done check	//Corrected Snap from xy/50 to (xy-(50/2))/50 so that it snaps on the closest grid 10/31/2018
    //to be done check	//Get rid of the constant..... rewrite enum() and unenum()... and get over ride information from a file. 11/12/2018
    //to be done check	//Write in a method of debugging everything in steps of testing. 11/12/2018
    //to be done check	// expresion <=- variable
    //to be done check	// expresion <=- variable {operator} expresion 
    //to be done check	// expresion <=- variable {operator} ( expresion )
    //to be done check	// expresion <=- ( expresion )
    //to be done check	// expresion <=- ( expresion ) {operator} variable
    //to be done check	// expresion <=- expresion {operator} expresion
    //to be done next version change /keywords, /operators, / function to:
    //to be done next version /partsofSyntax = keyword,while
    //to be done next version /partsofsyntax = operator,+
    //toto next version /partsofsyntax = declearation, declear    /syntax=declearation variable......
    //to be done next version /partsofsyntax = function , abs(variable)
    //to be done next version /partsofsyntax = function , call subroutinename ( variable1, variable2)
    //to be done next version /partsofsyntax = expression , variable
    //to be done next version /partsofsyntax = expression , ( ,  expresion,  operator,  expresion, )
    //to be done next version where ??? is optional,  ???? is required
    //to be done next version /partsofsyntax = expression , ??? ( , ???? variable, ??? operator, ??? variable , ??? )
    //to be done next version or some other way of making syntax optional
    //to be done next version /partsofsyntax
    //to be done next version /partsofsyntax
    //to be done check	//to be done Put back in the expired date.
    //************ Finished *******************************************************************************************
    //********************************************************************************************
    //********************************************************************************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //**************Save to the end bugs that have been fixed Below ******************************
    //********************************************************************************************
    //********************************************************************************************
    //********************************************************************************************

    //to be done  fixed bugs list
    //to be done   QC This: fixed 2020 08 26 The arrows of symbols are not pointing the correct direction.  Need to check it in 
    //to be done   QC This: 20200714 Fixed Its no longer drawing the symbols, because the named_pointer () is not pointing to the right place anymore. (since I took it out of the redraw to speed things up)
    //to be done   QC This: 2020 06 29 change to NOT have sym_Files... have an index (Since the pointer has to come from the Names_FilesPointer())
    //to be done   QC This:  Added FindingMyBugs(), Abug(22 ,) a lot of places //to be done   QC This: 20200625-2020?? ??
    //to be done   QC This:  FIXED Data issue -  THE /LINE COLORS CAME OUT ALL THE SAME (AT LEAST FOR THE sTART AND END)
    //to be done   QC This:  DONE Trying to get horz and virt scroll bars to show up (at least - first)
    //to be done   QC This:  fixed? Error the name of the point is going into the datatype
    //to be done   QC This:  fixed? Make sure that all of the index// s is pointing to the correct file/table
    //to be done   QC This:  fixed? The Data Type is not working!!!
    //to be done   QC This: 3/12/19 Added "EXTRA" to any code that I think should not be there, because I put it in to find errors, or avoid other errors
    //to be done   QC This: 4/12/19 Some where the iSAM is being duplicated, so that there is two with the number number after sorting
    //to be done   QC This:  Changed all of the bubble sort to quick sort. (Changed it all back because of so many issues with it)
    //to be done   QC This: issues with always sorting when it shouldn//t 
    //to be done   QC This: sorted wrong, And cant find it in the list (When I step through the list I find it)
    //to be done   QC This:  Need to see that the sort is ALWAYS working
    //to be done   QC This: Add in /Options=
    //to be done   QC This:  /option=50,{on,off}       turn on and off stuff that will crash the program
    //to be done   QC This:  /option=51,on         turn on everything messages, and displays
    //to be done   QC This:  /option=52,on         turn off all display messages
    //to be done   QC This:  /option=53,off        Turn off all information messages
    //to be done   QC This:  /option=54,off        Turn off all Warning messages
    //to be done   QC This:  /option=55,off        turn off all wrong messages
    //to be done   QC This: add in /colors linetypes and linestyles support file 
    //to be done   QC This:  need to allow input of the offset for text displaying of a symbols code/notes/etc
    //to be done   QC This:  Need to see why it is taking so much time now? to redisplay
    //to be done   QC This: Add in /Rotation file (And all ofther files besides color and datatype)
    //to be done   QC This: I should stop sorting the symbols, and replace them with an iSAM MyArray of pointers that is sorted to the MyArrays
    //to be done   QC This: Change it so that input and output files are source code files with comments for the FlowChart information
    //to be done   QC This:  I have lost all of the lines of symbols. (because of the pointers from Named_tablepointer() being wrong 20200714)
    //to be done   QC This:  The colors of lines are not yet displayeed *10/9/18 They disappeared again
    //to be done   QC This: Lost all lines in symbols.
    //to be done   QC This: Need to also rotate symbols
    //to be done   QC This: Add to input file /Options=name of option, value to set to  (Only some options, and all of the error/information messages)
    //to be done   QC This:  loses a symbol (most likely its the first symbol That I am losing)
    //to be done   QC This: Need to name paths (Currently Defaulted to UnNamed) (changed to line_ or Path_)
    //to be done   QC This:  Do I Need to be able to name a point (outside the datatype?) when adding a point NO
    //to be done   QC This:  changed reduced() to TopOfFile() 2020/6/19


    //to be done   QC This:  import file format (Internal format)
    //to be done   QC This:  
    //to be done   QC This:  Colors must be first (before you use them) they overwrite the standard color information
    //to be done   QC This:  /Color=Color Name, Alpha, Red, Green, Blue, Style, StartCap, EndCap
    //to be done   QC This:  
    //to be done   QC This:  Data types must come second, (before you use them.)
    //to be done   QC This:  /datatype=datatypename, Number Of Bytes, Color Name, Color Width, Describtion
    //to be done   QC This:  
    //to be done   QC This:  Symbols must come before FlowChart /use that calls them and after you have defined the data types and colors they call
    //to be done   QC This:  The name must come first, afterwards they can be in any order.  
    //to be done   QC This:  Only one /name, /filename, /Version, /Author, Language, /Stroke - The last one will be used, otherwise more than one is allowed.
    //to be done   QC This:  /Name=Symbol Name, options
    //to be done   QC This:  /Point=X, Y, Input/Output, Data Type, Name
    //to be done   QC This:  /Line=x1, y1, x2, y2, Color
    //to be done   QC This:  /FileName=Device:/Path/FileName.Extension
    //to be done   QC This:  Should select one from the list. (Or make up your own libararys)
    //to be done   QC This:  {} is optional input and can be ignored, or not entered.
    //to be done   QC This:  /Stroke={}
    //to be done   QC This:  /Notes={}
    //to be done   QC This:  /Version={}
    //to be done   QC This:  /Author={}
    //to be done   QC This:  /OpCode={}
    // 
    //to be done   QC This:  Path names will be over written if named //noname// or two differant names are in the same path.
    //to be done   QC This:  Rotation options are:
    //to be done   QC This:        Default, Flip, Flop, Rotate90, Rotate180, Rotate270, FlipRotate90, FlipRotate180, FlipRotate270, FlopRotate90, FlopRotate180, FlopRotate270, FlipFlop
    //to be done   QC This: 	flip is side to side exchange
    //to be done   QC This: 	flop is top and bottom exchange
    //to be done   QC This: 	FlipFlop is the same as rotate180
    //to be done   QC This:  /Path=x1, y1, x2, y2, Data type, Name
    //to be done   QC This:  /Use=X, Y, rotation, Name
    //to be done   QC This:  /Constant=Name, X, Y,  Value
    //to be done   QC This:  /microcodetext=Order, Text [replacements] text ...

    //to be done   QC This:  replacements allowed in the program text
    //to be done   QC This:   where [point.variable] will be used 99% of the time
    //to be done   QC This:  [Point.variable]	[point.PathName]
    //to be done   QC This:  [point.name]	    [Symbol.name]   [Symbol.PointName]
    //to be done   QC This:  [point.X1]	    	[symbol.X1]
    //to be done   QC This:  [point.y1]		    [Symbol.y1]
    //to be done   QC This:  [point.IO]
    //to be done   QC This:  [point.Datatype]
    //to be done   QC This:  [point.Rotation]
    //to be done   QC This:  [point.index]	    [symbol.index]
    //to be done   QC This:  [point.name]	    [symbol.name]
    //to be done   QC This:  [point.datatype]
    //to be done   QC This:  [point.datatypedescribtion]
    //to be done   QC This:  [point.datatypenumberofbytes]
    //to be done   QC This: X adds /point before the /name fixed
    //to be done   QC This: X Not correctly key words, but seeing them as variables, (Some Times, other times it does catch them
    //to be done   QC This: Limits symbol=(-250,-250)_(250,250)
    //to be done   QC This: Limits symbol points 121
    //to be done   QC This:  Need to get rid of the radio buttons, and replace it with a DropDown with the parameters
    //to be done   QC This:  It is not matching correctly symbols already defined syntax match.
    //to be done   QC This:  Need index on syntax() to make it faster to find
    //to be done   QC This:  (fixed) The saved file has _ in the path name, but no where in the data during input/output
    //to be done   QC This:  Export() /name=,= fixed 2020 07 28
    //to be done   QC This:  Need to add /Function and /Operator= (and act like keyWord for now)
    //to be done   QC This:  need to add ThisisanOperator() for +-/* and Function ABS, Sin, COS etc (Just line keyWord, but in a different file.
    //to be done   QC This:  Character set over 128
    //to be done   QC This: Bug recursive resort runs out of memory(stack)2020 09 20
    //to be done   QC This: Need to add the type ([{Label}]) instead of variable for after gotos
    //to be done   QC This: need to change the syntax to be [point.name] format
    //to be done   QC This: Dump the Trace also with a dump 
    //to be done   QC This: replacing [ with ([{ and so on........
    //to be done   QC This:  Need to add fields to change the computer language Definitions.
    //to be done   QC This:  Need to be able to input each of the languages fields via inports //to be done   QC This: /language=//to be done   QC This: 
    //to be done   QC This: The status text line on symbolscreen is to high and covered by the buttons 12-11-2020
    //to be done   QC This:  on the options screen when it first comes up, need to set defaults
    //to be done   QC This:  also needs to have the pathstart, end, rotation, ... set
    //to be done   QC This: FlowChart screen Select Symbol is a button, and should be a dropdown
    //to be done   QC This:  File i/o screen needs tip text set
    //to be done   QC This:  reformated the trace output in dump()
    //to be done   QC This:  FlowChart screen the program status is stuck behind the toolstrip
    //to be done   QC This: Changed original stat to be Max (and then never changes it, lets the user change it - Except FileInputOutput should always be normalized)
    //to be done   QC This: List of option check boxes (and assumed XY offsets for //to be done   QC This: displays)
    //to be done   QC This: 1 	AutoMoveSymbols
    //to be done   QC This: 2 	DisplayCode
    //to be done   QC This: 3 	DisplayConstants
    //to be done   QC This: 4 	DisplayPointNames
    //to be done   QC This: 5 	DisplaySymbolName
    //to be done   QC This: 6 	DisplayErrorText
    //to be done   QC This: 7 	DisplayFileName
    //to be done   QC This: 8 	DisplayIDStroke
    //to be done   QC This: 9 	DisplayIndexShortCutPointer
    //to be done   QC This: 10 	DisplayInputOutPut
    //to be done   QC This: 11 	DisplayNotes
    //to be done   QC This: 12 	DisplayOpCode
    //to be done   QC This: 13 	DisplayPathNames
    //to be done   QC This: 14 	OutputLineNumbers
    //to be done   QC This: 15 	OrthogonalPaths
    //to be done   QC This: 16	    DisplayPathDataValues
    //to be done   QC This: Bug: When the Symbol screen first comes up, the program status Text Box is in the wrong place, (after any resize, it corrects itself)
    //to be done   QC This:  Fixed above (And other things), by making everything inside a toolstrip....12-16-2020  After I lost everthing from flowchart004 and made flowchart10 (three digit to two digit versions now (Major and Minor)
    //to be done   QC This:  The flowchart screen no longer appears after the options screen
    //Done : No selection on the line/widths on the option screen
    //Done check Options Screen starting up:



    //fixed bugs and todo list
    //fixed 2020 08 26 The arrows of symbols are not pointing the correct direction.  Need to check it in 
    //20200714 Fixed Its no longer drawing the symbols, because the named_Indexes () is not pointing to the right place anymore. (since I took it out of the redraw to speed things up)
    //2020 06 29 change to NOT have sym_Files... have an index (Since the Indexes has to come from the Names_FilesIndexes())
    // Added FindingMyBugs(), Abug(22 ,) a lot of places //20200625-2020?? ??
    // FIXED Data issue -  THE /LINE COLORS CAME OUT ALL THE SAME (AT LEAST FOR THE sTART AND END)
    // DONE Trying to get horz and virt scroll bars to show up (at least - first)
    // fixed? Error the name of the point is going into the datatype
    // fixed? Make sure that all of the index// s is pointing to the correct file/table
    // fixed? The Data Type is not working!!!
    //3/12/19 Added "EXTRA" to any code that I think should not be there, because I put it in to find errors, or avoid other errors
    //4/12/19 Some where the iSAM is being duplicated, so that there is two with the number number after sorting
    // Changed all of the bubble sort to quick sort. (Changed it all back because of so many issues with it)
    //issues with always sorting when it shouldn//t 
    //sorted wrong, And cant find it in the list (When I step through the list I find it)
    // Need to see that the sort is ALWAYS working
    // Add in /Options=
    // /option=50,{on,off}       turn on and off stuff that will crash the program
    // /option=51,on         turn on everything messages, and displays
    // /option=52,on         turn off all display messages
    // /option=53,off        Turn off all information messages
    // /option=54,off        Turn off all Warning messages
    // /option=55,off        turn off all wrong messages
    // Add in /colors linetypes and linestyles support file 
    // need to allow input of the offset for text displaying of a symbols code/notes/etc
    // Need to see why it is taking so much time now? to redisplay
    // Add in /Rotation file (And all ofther files besides color and datatype)
    //I should stop sorting the symbols, and replace them with an iSAM MyArray of Indexess that is sorted to the MyArrays
    //Change it so that input and output files are source code files with comments for the FlowChart information
    // I have lost all of the lines of symbols. (because of the Indexess from Named_TableSymbolIndexes() being wrong 20200714)
    // The colors of lines are not yet displayeed *10/9/18 They disappeared again
    //Lost all lines in symbols.
    //Need to also rotate symbols
    // Add to input file /Options=name of option, value to set to  (Only some options, and all of the error/information messages)
    // loses a symbol (most likely its the first symbol That I am losing)
    //Need to name paths (Currently Defaulted to UnNamed) (changed to line_ or Path_)
    // Do I Need to be able to name a point (outside the datatype?) when adding a point NO
    // changed reduced() to TopOfFile() 2020/6/19


    // import file format (Internal format)
    // 
    // Colors must be first (before you use them) they overwrite the standard color information
    // /Color=Color Name, Alpha, Red, Green, Blue, Style, StartCap, EndCap
    // 
    // Data types must come second, (before you use them.)
    // /datatype=datatypename, Number Of Bytes, Color Name, Color Width, Describtion
    // 
    // Symbols must come before FlowChart /use that calls them and after you have defined the data types and colors they call
    // The name must come first, afterwards they can be in any order.  
    // Only one /name, /filename, /Version, /Author, Language, /Stroke - The last one will be used, otherwise more than one is allowed.
    // /Name=Symbol Name, options
    // /Point=X, Y, Input/Output, Data Type, Name
    // /Line=x1, y1, x2, y2, Color
    // /FileName=Device:/Path/FileName.Extension
    // Should select one from the list. (Or make up your own libararys)
    // {} is optional input and can be ignored, or not entered.
    // /Stroke={}
    // /Notes={}
    // /Version={}
    // /Author={}
    // /OpCode={}
    // 
    // Path names will be over written if named //noname// or two differant names are in the same path.
    // Rotation options are:
    //   Default, Flip, Flop, Rotate90, Rotate180, Rotate270, FlipRotate90, FlipRotate180, FlipRotate270, FlopRotate90, FlopRotate180, FlopRotate270, FlipFlop
    //	flip is side to side exchange
    //	flop is top and bottom exchange
    //	FlipFlop is the same as rotate180
    // /Path=x1, y1, x2, y2, Data type, Name
    // /Use=X, Y, rotation, Name
    // /Constant=Name, X, Y,  Value
    // /microcodetext=Order, Text [replacements] text ...

    // example
    // /name Start
    // /Point=0,250,OutPut,GOTO,Logic
    // /Point=250,0,output,CommandLine,String
    // /microcodetext=main, Jump [GOTO]
    // /microcodetext=main, CmdLine: [CommandLine]
    // /microcodetext=main, ;This Is The Start of The Program
    // /Use=X, Y, rotation, Name

    // replacements allowed in the program text
    //  where [point.variable] will be used 99% of the time
    // [Point.variable]	[point.PathName]
    // [point.name]	    [Symbol.name]   [Symbol.PointName]
    // [point.X1]	    	[symbol.X1]
    // [point.y1]		    [Symbol.y1]
    // [point.IO]
    // [point.Datatype]
    // [point.Rotation]
    // [point.index]	    [symbol.index]
    // [point.name]	    [symbol.name]
    // [point.datatype]
    // [point.datatypedescribtion]
    // [point.datatypenumberofbytes]
    //X adds /point before the /name fixed
    //X Not correctly key words, but seeing them as variables, (Some Times, other times it does catch them
    //Limits symbol=(-250,-250)_(250,250)
    //Limits symbol points 121
    // Need to get rid of the radio buttons, and replace it with a combobox with the parameters
    // It is not matching correctly symbols already defined syntax match.
    // Need index on syntax() to make it faster to find
    // (fixed) The saved file has _ in the path name, but no where in the data during input/output
    // Export() /name=,= fixed 2020 07 28
    // Need to add /Function and /Operator= (and act like keyWord for now)
    // need to add ThisisanOperator() for +-/* and Function ABS, Sin, COS etc (Just line keyWord, but in a different file.
    // Character set over 128
    //recursive resort runs out of memory(stack)2020 09 20
    //Need to add the type ([{Label}]) instead of variable for after gotos
    //need to change the syntax to be [point.name] format
    //Dump the Trace also with a dump 
    //replacing [ with ([{ and so on........
    // Need to update the /language options if they are on the line
    // Need to add fields to change the computer language Definitions.
    // Need to be able to input each of the languages fields via inports ///language=//
    //The status text line on symbolscreen is to high and covered by the buttons 12-11-2020
    // on the options screen when it first comes up, need to set defaults
    // also needs to have the pathstart, end, rotation, ... set
    //FlowChart screen Select Symbol is a button, and should be a dropdown
    // File i/o screen needs tip text set
    // reformated the trace output in dump()
    // FlowChart screen the program status is stuck behind the toolstrip
    //Changed original stat to be Max (and then never changes it, lets the user change it - Except FileIO should always be normalized)
    //Dont added dump3() for all status//s and msgctr(s).   Need to add an options. do dump Bugs, warnings, status//s and/or msgctr(and which ones)
    //Done Added options of what to dump (bugs, warning, status, mesctr)
    //Done Getting into loop that blows the stack (somewhere inside the decompile, while cleaning up the links
    //Done add imports to change the locations of the automatic points when decompiling - ImportSymbolPointPreference
    //Done add imports to where each of the points in symbol creation goes.
    //Done Added to imports /Set
    //Done It is not selecting or changeing languages on toolstripSelectButton_Click
    //Done strighten up the dump of the information (Add tabs, to make it easier to see inside of excel)
    //Good Enough Add a splash screen (to hide all of the startups. 
    //Good enough If flash screen visible then do not show any other screens as visible  (Still lets FlowChart Screen flash, Cause I donot want to change the startup screeen, cause I//m lazy)
    //done The Function/Operator/keyWord are not inputing correctly 
    //done need to start with a scale 2 or 3 times zoomed out (changed to be .0625 or zoomed in 16 times)
    //Done turn the default for output line number option off
    //Done FIX it only outputs one /function, /operator, /keyword
    //Done donot output  anything starting with zzzzzzzzz(Or maybe ZZZZZZZZZZ)
    //done donot output symbol zzzzzzzzzSymbol
    //Done Need a status bar showing progress of the fileio
    //Done The selected symbol is no longer showing in the symbol text box in symbol screen
    //Done on the startup of the option screen, no button should be enabled until a language is selected.
    //done The add point and add line is not working in the symbol screen (First thing )
    //Done on the flowchartscreen make the add line in color to show when it//s disabled
    //Done on the symbol screen make the line/point width/size in color to show when it//s disabled
    //Done on the symbol screen make the start and stop line colored  
    //Done button rules on the symbol screen if there is nothing in the symbolname then disable buttons and dropdowns
    //DONE need to add new rule s if the buttons are available or not
    //done symbol screen add point button			Must have symbol displayed, and a point on the list with a name (make a default name to begin with for now, and all options selected with default
    //Done symbol screen add line button			Must have a symbol displayed, color, width
    //Done symbol screen Move object button			must have an point,line
    //Done symbol screen Delete button			must have a point line
    //Done symbol screen New Symbol button			Must have a new Symbol Name
    //Done symbol screen update symbol button			Must have made changes to the symbol
    //Done symbol screen Symbol select dropdown 		
    //Done symbol screen button
    //Done symbol screen button
    //Done it duplicates the symbol name when you tab off from changing the symbol name (instead of adding new symbol)
    //Done add some color to the fileio icons
    //Done Show Symbol Screen
    //Done check FlowChart Screen starting up:
    //Done Show Symbol Screen startup 
    //Done Show Options Screen
    //Done Show FileInputOutput Screen
    //Done  make a checklist of QC on what to check (and check steps along the way. of how to check)
    //Doc  .   Reference number usage
    // All of the fixes below were lost because of a bad sector on the disk drive.
    // A1 = b+c (A1 becomes alphanumberic, then number then equal sign)
    //to be done Make sure that it is making the syntax correctly, right now N1 returns ({[Alpha]})  ({[number]}) instead of ({[variable]})
    //from the FileIo screen add the buttons to move to the Symbol or the Option Screen.
    //on imported colors, if the name is not a //standard// then find the one closest, and put it as the default for that color (keeping the name for other systems)
    //make the text different colors for different display option items (Not working yet)
    //to be done change the slash for imports into something else (not used in any language), so this they are never confused with any language
    //to be done need to check that the /points name is used in the syntax (Also make sure that if a statement is entered, all of the variable names have a /point
    //to be done need option to NOT use the clipboard to pass and get data
    //to be done change the button rules to not allow adding a /point if there is no point name in the text box name (and if the point name is not in the program text 

    //to be done document code with this to make help file????????
    //User-defined types, such as a class or interface
    //Members, such as a field, event, property, function, Or subroutine.
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/c
    //<c>text</c>  
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/code
    //<code> content</code>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/example
    //<example>description</example>  
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/exception
    //<exception cref="member">description</exception>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/include
    //<include file="filename" path="tagpath[@name=//id//]" />
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/list
    //<list type="type">  
    //    <listheader>
    //   <term> term</term>  
    //   <description> description</description>  
    //    </listheader>  
    //   <item>
    //   <term> term</term>  
    //   <description> description</description>  
    //</item>  
    //</list>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/para
    //<para>content</para>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/param
    //<param name="name">description</param>  
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/permission
    //<permission cref="member">description</permission>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/remarks
    //<remarks>description</remarks>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/returns
    //<returns>description</returns>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/see
    //<see cref="member"/>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/seealso
    //<seealso cref="member"/>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/summary
    //<summary>description</summary>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/typeparam
    //<typeparam name="name">description</typeparam>
    //https://docs.microsoft.com/en-us/dotnet/visual-basic/language-reference/xmldoc/value
    //<value>property-description</value>
    //to be done add option to output Format, colors, datatype, ...
    //to be done ON THE SYMBOL SCREEN THE COMBOBOX//S FOR POINT AND LINE NAMES START AT ZERO FOR THE FIRST ONE, (i AM COUNTING starting at one)
    //to be done Symbol Screen is not working, it is not getting a symbol by name, and it is adding when each letter is typed.
    //to be done the issue is that the selected symbol drop down is not getting filled with the symbol names.
    //to be done completely lost the select a symbol on the symbol screen. 
    //to be done symbol screen selecting a symbol doubles the name in the table.
    //to be done need to call button rules after entering text on the symbol screem. to enable that button..
    //to be done in finding my bugs, add a check for valid data types (non on start up with flowchart /err=origin......
    //to be done symbol screen select symbol button is not updating the screen to the selected symbol information
    //to be done Datatype 1 appears 
    //to be done need the hints displayed somewhere, somehow.
    //to be done add a buttons rule, there there is no input/ouput for the point, theyou can not add a point yet
    //to be done need to allow imports via the flowchart screen text box input 
    //fixed the first symbol created from a source file, had camefrom twice, at the begging, and two gotos at the end
    //to be done update the spalsh screen with the email 
    //bug check that the " is being replaced?




















    //Doc  .   /set=delimiters,{[(,)]}
    //Doc  .   /Set=Options,1-32 Turns on this option
    //Doc  .   /Set=Scale,625-10000
    //Doc  .   /Set=Spacing, 500-2500
    //Doc  .   /Set=Dump,/steven/Dump1.txt,/steven/Dump2.txt,/steven/Dump3.txt
    //Doc  .   /Set=points,Index,X,Y
    //Doc  .   "
    //Symbol does not have a /point CameFrom",
    //Doc  .   "1002 Symbol does not have a /point GotoNext",
    //Doc  .   "1003 Symbol goes to two or more places (A symbol can come from many places, but can only goto one place)",
    //Doc  .   "1004 Points of a symbol is not connected to any path",
    //Doc  .   "1005 Paths are not connected to any symbol or constant - they must all connect to both ends to symbol or another path, or a constant",
    //Doc  .   "1006 Not all of the point names are in the Syntax",
    //Doc  .   "1007 That the Syntax matches the program text.",
    //Doc  .   "1008 Make sure that the point names are in the point list",
    //Doc  .   "1009 All paths must have at least one output or constant",
    //Doc  .   "1010 All Points have a valid Datatype",
    //Doc  .   "1011 All Datatype have a valid Color",
    //Doc  .   "1012 All Colors are valid (in microsoft, they can only be the assigned colors, and are //switched if wrong)",
    //Doc  .   "1013 All /point names are in either the microcodetext or the Syntax",
    //Doc  .   "1014 No Duplicate /point names",
    //Doc  .   "1015 No Syntax and No Program Code to make it from"
    // add /run to import to and from the clip board (then connect toprogram or DLL)
    //   in the /name section erase all of the that data first if a /ProgramCode= (and all of the others) if nothing is after the =
    //   The idea is that it will run this probram passing by (clipboard, ... or what ever method agreed on) and returns
    //   pass /Import and return The import for a new symbol (Or to modify a symbol - it can have many symbols in it.
    //   pass /return with
    //           /symbolname= the name of the symbol (given before so that the program will know-make sure that it is returning the right symbol)
    //           /ExportPoint=datatype, ..., value for each point (including the came from and goto parameters)
    //   pass what ever other stuff that is needed
    //   returns /symbolname= symbolname (it can be a new symbolname than passed, because of the parameters passed (ie different data types)
    //   returns /Point..., /line, /value (return value when debugging ...; etc)
    //   returns anything else that can be in a symbol
    //to be done  I change "_" for a null to be "```" abd caused the index to over run at places now (Should change it to Nil, or csomething else
    ///ignore=ignores anything here, and does not save it. (Junk)
    ///set=points,which text number, x, Y 
    ///set=delimiters,start of markers,([{ end  string of markers}])
    ///set=language,language name, ...
    ///set=options, option message number
    ///set=scale, (625 to 100,000)
    ///set=spacing,spacing between symbols (limits 500-2500)
    ///set=dump, path/filename, path/filename, path/filename
    ///Option=number (1-998) ,  {on or off} 
    ///Option ComputerLanguage
    ///Color=Color Name ,  Alpha ,  Red ,  Green ,  Blue ,  Style ,  StartCap ,  EndCap
    ///datatype=datatypename ,  Number Of Bytes ,  Color Name ,  Color Width ,  Describtion
    ///name=  symbolname, future options
    ///Point = X ,  Y ,  {Input/Output...} ,  datatypename ,  point name
    ///Line=x1 ,  y1 ,  x2 ,  y2 ,  color name
    ///Path=Name ,  x1 ,  y1 ,  x2 ,  y2 ,  datatypename 
    ///Use=Name ,  X ,  Y ,  rotation ,  future options
    ///thiscode
    ///microcodetext=Order, example of program code.
    ///filename=symbol path/filename
    ///Language=language, 
    ///ComputerLanguageNumber=" & ComputerLanguageNumber)
    ///ComputerLanguageComment=" & ComputerLanguageComment)
    ///ComputerLanguageVariableNameCharacters=" & ComputerLanguageVariableNameCharacters)
    ///ComputerLanguageExtention=" & ComputerLanguageExtention)
    ///GotoNext=" & GotoNext)
    ///ComputerLanguageCameFrom=" & ComputerLanguageCameFrom)
    ///ComputerLanguageMultiLine=" & ComputerLanguageMultiLine)
    ///stroke=future (ABCDEFGHIJKLMNOP)
    ///notes=notes to follow the symbol, save, not used, a comment about the symbol
    ///version=a  string of the symbol being used (optional)
    ///author=who did this symbol
    ///opcode=the maching code for this symbol (optional future)
    ///Constant=name, X,y, Value
    ///error, name, x, y,  Name,  other things maybe
    ///delete={ANY OF THE OTHER CODES}
    ///keyword=computer language Keyword, future syntax
    ///operator=computer language operator, future syntax
    ///function=function name, future syntax
    ///drilldown=name of the previous file that you came from (selecting a symbol, and going to its detail.
    ///finish This is used to communicate with the pre and post process program
    ///FCInit		to clipboard for process program
    ///FCPre		to clipboard for process program
    ///FCPost		to clipboard for process program
    ///FCFinish		to clipboard for process program
    ///syntax= made up of the following strings:
    //   {[(ComputerLanguageMultiLine)]}
    //   {[(ComputerLanguageCameFrom)]}
    //   {[(GotoNext)]}
    //   {[(ComputerLanguageComment)]}
    //   {[(ComputerLanguageExtention)]}
    //   {[(ComputerLanguageMultiLine)]}
    //   {[(ComputerLanguageVariableNameCharacters)]}
    //   {[(CameFrom)]}
    //   {[(GotoNext)]}
    //   {[(Quote)]}
    //   {[(comment)]}
    //   {[(KeyWord)]}
    //   {[(Operator)]}
    //   {[(Function)]}
    //   {[(AlphaNumberic)]}
    //   {[(Alpha)]}
    //   {[(Number)]}
    //   {[(SpecialCharacter)]}
    //   {[(Variable)]}
    //   {[(Unknown)]}
    //   {[(List)]}
    //   {[(expression)]}
    //friend const ConstantDirectionMap As  string = " " &
    //vbCrLf & "14_15__16__01_02" &
    //vbCrLf & "13__\__|___/__03" &
    //vbCrLf & "12-----0------04" &
    //vbCrLf & "11__/__|___\__05" &
    //vbCrLf & "10_09__08__07_06"

    //    friend const ConstantExplainCompared As  string = vbCrLf & "Compare Results " & vbCrLf & "  -2 Top of the list" & vbCrLf & "  -1 Less than" & vbCrLf & "   0 they match" & vbCrLf & "   1 greater than" & vbCrLf & "   2 bottom of the list"
    //friend const ConstantExplainedCompared3 As  string = vbCrLf & "." & vbCrLf & "." & vbCrLf &
    //    "      0 if the middle is null" & vbCrLf &
    //    "      0 if first = third are null" & vbCrLf &
    //    "then -1 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". = ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then  1 if ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". = ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then -4 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". = Null & ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". < ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then  4 if ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & ". = Null And ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". > ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then -4 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". = ////" & vbCrLf &
    //    "then  4 if ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & ". = ////" & vbCrLf &
    //    "then -5 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". > ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & ". (error in list)" & vbCrLf &
    //    "then  0 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". < ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". & ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". < ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then -3 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". > ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then -2 if ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". > ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then  3 if ." & MyUniverse.SysGen.Constants.RMStart & "string2" & MyUniverse.SysGen.Constants.RMEnd & ". < ." & MyUniverse.SysGen.Constants.RMStart & "string3" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then  2 if ." & MyUniverse.SysGen.Constants.RMStart & "string1" & MyUniverse.SysGen.Constants.RMEnd & ". > .{[(string2" & MyUniverse.SysGen.Constants.RMEnd & "." & vbCrLf &
    //    "then  5 if none of the above(Error in logic)"




    //known assumptions:
    // Assume English (should try UTF-16 instead of ascii
    // Assume that all variables must start with a letter, then letters or numbers or special characters    //
    // Assume that MakePathOrthogonal adds a record at the end of the table, if not, still no harm? just slower

}

 }
