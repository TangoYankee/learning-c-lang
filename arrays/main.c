#include <stdio.h>

int main() {
    int xSize = 8;
    int ySize = 8;
    int chessboard[xSize][ySize];

    for(int x = 0; x < xSize; x++) {
        for(int y = 0; y < ySize; y++) {
            chessboard[x][y] = x * y;
        }
    }

    printf("%d\n", chessboard[0][0]);
    return 0;
}
