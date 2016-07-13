/* See LICENSE file for copyright and license details. */

/* appearance */
static const char *fonts[] = {
	"monospace:size=10"
};

static const unsigned int snap = 0;
/* layout(s) */
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *termcmd[]  = { "st", NULL };

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask, XK_Return, spawn, {.v = termcmd } },
	{ MODKEY, XK_Return, zoom, {0} },
	{ MODKEY|ShiftMask, XK_q, quit, {0} },};

/* button definitions */
/* click can be ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkWinTitle, 0, Button1, togglemonacle, {0} },
	{ ClkWinTitle, 0, Button3, killclient, {0} },
	{ ClkDateTime, 0, Button1, toggle24hour, {0} },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
};

