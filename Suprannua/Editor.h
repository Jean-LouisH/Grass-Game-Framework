//Editor Instructions
void edit_create(unsigned char object, unsigned char type, int numberOfSides, double newRadius, double newWidth,
       double newHeight, double newXPosition, double newYPosition,
       unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha); //object; "polygon", "box" | type; BACKGROUND, ENTITY, PLATFORM |
void edit_createBlock(unsigned char type, double left, double right,
                         double down, double up, unsigned char colour);
void edit_createPolygon(unsigned char type, int numberOfSides, double newRadius, double newXPosition,
                         double newYPosition, unsigned char colour);
void edit_remove(unsigned char object, int objectNumber);
void edit_move(unsigned char object, int objectNumber, double newXPosition, double newYPosition);
void edit_resize(unsigned char object, int objectNumber, double scale);
void edit_change(unsigned char object, int objectNumber, unsigned char attribute, double amount);
            //attributes; "angle", "mass", "xVelocity", "yVelocity", "gravity", "friction"
            //GAME object allows access to gravity and friction.
void edit_adjust(unsigned char object, int objectNumber, unsigned char attribute, double amount);
void edit_colourFromRGBA(unsigned char object, int objectNumber, unsigned char red,
                 unsigned char green, unsigned char blue, unsigned char alpha);
void edit_colourFromText(unsigned char object, int objectNumber, unsigned char colour);
void edit_force(unsigned char firstObject, int firstObjectNumber,
                 unsigned char preposition, unsigned char secondObject, int secondobjectNumber);// preposition - "to", "from"
