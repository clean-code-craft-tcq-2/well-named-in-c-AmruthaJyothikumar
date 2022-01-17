extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
extern ColorPair Colors;

extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void PrintColorPairToString(const ColorPair* colorPair, char* buffer);
