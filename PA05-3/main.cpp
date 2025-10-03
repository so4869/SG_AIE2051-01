#include "png++/png.hpp"
#include "EliceUtils.h"
#include <iostream>
#include "MyTurtle.h"

using namespace std;


int main(){

    /* Preparation (preprocessing) */

    EliceUtils utils = EliceUtils();

    const int ROWS = 129;
    const int COLS = 129;

    png::image< png::rgb_pixel > image( ROWS, COLS );

    /* Input & Main stage - read commands and do turtle drawing */

    int n; // n commands
    cin >> n;

    int command;
    float value;

    MyTurtle turtle( ROWS, COLS, &image);

    for( int i = 0; i < n; i++ ){

        cin >> command >> value;

        if ( command == 0 )
            turtle.goStraight( value );

        if ( command == 1 )
            turtle.turnLeft( value );

        if ( command == 2 )
            turtle.turnRight( value );

    }

    /* Output stage - store the turtle-drawing image */
    char filename[100] = "/Volumes/d/sandbox/SG_AIE2051-01/PA05-3/turtle_image.png";
    image.write ( filename );
    utils.send_image (filename );
    return 0;
}
