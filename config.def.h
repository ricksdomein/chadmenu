/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "JetBrainsMono Nerd Font:style:medium:size=10";
static const char *fonts[] = {
        font,
	"JetBrainsMono Nerd Font:style:medium:size=10",
};
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char selhighfgcolor[]  = "#ffe585";
static char normhighfgcolor[]  = "#51afef";
static char outfgcolor[]  = "#000000";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  normbgcolor  },
	[SchemeSelHighlight] = { selhighfgcolor, normbgcolor },
	[SchemeNormHighlight] = { normhighfgcolor, normbgcolor },
	[SchemeOut]  = { outfgcolor,   normbgcolor },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 29;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "foreground", STRING, &normfgcolor },
	{ "background", STRING, &normbgcolor },
	{ "color4",  STRING, &selfgcolor },
	{ "color3",  STRING, &selhighfgcolor },
	{ "color2",  STRING, &normhighfgcolor },
	{ "prompt",      STRING, &prompt },
};
