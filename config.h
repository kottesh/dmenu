/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */ /* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Input Mono:size=10"
};
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 750;                    /* minimum width when centered */
static const float menu_height_ratio = 3.0f;  /* This is the ratio used in the original calculation */

static const char *prompt      = ">";      /* -p  option; prompt to the left of input field */
static const unsigned int alpha = 0xbf;     /* Amount of opacity. 0xff is opaque             */
static const int user_bh = 10;               /* add an defined amount of pixels to the bar height */


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d3d3d3", "#1e1e1e" },
	[SchemeSel] = { "#ffffff", "#3a3a3a" },
	[SchemeOut] = { "#000000", "#c0c0c0" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 6;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
