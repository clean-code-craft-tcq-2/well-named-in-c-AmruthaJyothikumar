extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const int MAX_COLORPAIR_NAME_CHARS = 16;
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern ColorPair Colors;

extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void PrintColorPairToString(const ColorPair* colorPair, char* buffer);
