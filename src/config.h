#ifndef CONFIG_H
#define CONFIG_H

#define VER_MAJOR 1
#define VER_MINOR 1
#define VER_PATCH 0
#define VER_PREFIX "-dev"

/*********************************\
* set your desired values below.  *
\*********************************/

/*Colors*/
#define BACKGROUND    TERMCOLOR
#define BORDERCOLOR   PURPLE
#define CURSORCOLOR   PURPLE
#define TITLECOLOR    WHITE
#define DIRCOLOR      PURPLE 
#define ROOTCOLOR     RED
#define FILECOLOR     WHITE
#define TEXTCOLOR     WHITE
#define EXECOLOR      RED
#define IMAGECOLOR    CYAN 
#define MEDIACOLOR    BLUE
#define CMDCOLOR      GREEN
#define VMCOLOR       WHITE /*selected files' color*/

/*Settings*/
#define SHOWHIDDENDEFAULT 0
#define SHOWBORDERDEFAULT 0
#define SHIFTSIZE 16 /*cursor's row threshold before the file list scrolls up*/
#define ALLOW_DELETE 1 /*by default deleting is disabled*/

/*key bindings*/
#define key_up          'k'
#define key_down        'j'
#define key_left        'h' /*up dir*/
#define key_right       'l' /*down dir*/
#define key_update      'u' /*update directory*/
#define key_quit        'q'
#define key_esc          27 /*escape charater*/
#define key_space       ' '
#define key_cmd         ':'
#define key_pin         'f' /*coming soon*/
#define key_select      's'
#define key_rename      't'
#define key_cut         'x'
#define key_copy        'y'
#define key_paste       'p'
#define key_delete      'd'
#define key_visual_mode 'v'
#define key_show_hidden 'r'
#define key_show_border 'b'

#define DATE_FORMAT "%a %Y-%m-%d %H:%M:%S %Z"

#endif  
