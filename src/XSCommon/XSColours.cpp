#include "XSSystem/XSInclude.h"

#include "XSCommon/XSCommon.h"
#include "XSCommon/XSColours.h"

namespace XS {

	/*
	 1	0	black
	 2	1	grey
	 3	2	white
	 4	3	red
	 5	4	orange
	 6	5	yellow
	 7	6	lime
	 8	7	green
	 9	8	aqua
	10	9	cyan
	11	a	light blue
	12	b	blue
	13	c	violet
	14	d	purple
	15	e	pink
	16	f	*white, to be changed
	*/

	const vector4 g_colour_table[COLOUR_BITS+1] = {
		vector4( 0.0f, 0.0f, 0.0f, 1.0f ), // black
		vector4( 0.5f, 0.5f, 0.5f, 1.0f ), // grey
		vector4( 1.0f, 1.0f, 1.0f, 1.0f ), // white
		vector4( 1.0f, 0.0f, 0.0f, 1.0f ), // red
		vector4( 1.0f, 0.5f, 0.0f, 1.0f ), // orange
		vector4( 1.0f, 1.0f, 0.0f, 1.0f ), // yellow
		vector4( 0.5f, 1.0f, 0.0f, 1.0f ), // lime
		vector4( 0.0f, 1.0f, 0.0f, 1.0f ), // green
		vector4( 0.0f, 1.0f, 0.5f, 1.0f ), // aqua
		vector4( 0.0f, 1.0f, 1.0f, 1.0f ), // cyan
		vector4( 0.0f, 0.5f, 1.0f, 1.0f ), // light blue
		vector4( 0.0f, 0.0f, 1.0f, 1.0f ), // blue
		vector4( 0.5f, 0.0f, 1.0f, 1.0f ), // violet
		vector4( 1.0f, 0.0f, 1.0f, 1.0f ), // purple
		vector4( 1.0f, 0.0f, 0.5f, 1.0f ), // pink
		vector4( 1.0f, 1.0f, 1.0f, 1.0f ), // *white
	};

	bool IsColourString( char *p ) {
		return false;
	}

	int ColourIndex( char c ) {
		int lowc = tolower( c );
	
		if ( c >= '0' && c <= '9' )
			return (c-'0') & COLOUR_BITS;
		else if ( lowc >= 'a' && lowc <= 'e' )
			return (c-'a'+'9') & COLOUR_BITS;
	
		return ColourIndex( COLOUR_WHITE );
	}

}; // namespace XS