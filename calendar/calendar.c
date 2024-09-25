#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>

// Replacement for getch() function
int getch(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

// Replacement for gotoxy using ANSI escape codes
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

// Replacement for SetConsoleTextAttribute using ANSI escape codes
void SetColor(int ForgC) {
    printf("\033[0;%dm", ForgC);
}

char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
char *week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    int nmonth, nyr, ch;
enteryear:
    while(1) {
        printf("Enter year and month(number):");
        scanf("%d%d", &nyr, &nmonth);
        if (nyr < 1945) {
            printf("\n\t Please enter year above 1945\n");
            continue;
        } else {
            calendar(nyr, nmonth);
        }

        while(1) {
            gotoxy(20, 20);
            printf("(*) Use LEFT, RIGHT, UP and DOWN arrow.");
            gotoxy(20, 22);
            printf("(*) Press P to go to particular year and month.");
            gotoxy(20, 24);
            printf("(*) Press ESC to Exit.");
            ch = getch();
            switch(ch) {
                case 80: // DOWN ARROW
                    if (nmonth == 12) {
                        nmonth = 1;
                        nyr++;
                    } else {
                        nmonth++;
                    }
                    calendar(nyr, nmonth);
                    break;
                case 77: // RIGHT ARROW
                    nyr++;
                    calendar(nyr, nmonth);
                    break;
                case 72: // UP ARROW
                    if (nmonth == 1) {
                        nyr--;
                        nmonth = 12;
                    } else {
                        nmonth--;
                    }
                    calendar(nyr, nmonth);
                    break;
                case 75: // LEFT ARROW
                    if (nyr == 1945) {
                        gotoxy(15, 2);
                        printf("Year below 1945 not available");
                    } else {
                        nyr--;
                        calendar(nyr, nmonth);
                    }
                    break;
                case 27: // ESC
                    system("clear");
                    gotoxy(50, 14);
                    printf("Exiting program.\n\n\n\n\n");
                    exit(0);
                case 112: // p KEY
                    system("clear");
                    goto enteryear;
            }
        }
        break;
    }
    getch();
    return 0;
}

// Displaying the calendar
void display(int nyr, int nmonth, int tdays, int days[]) {
    int i, j, pos;
    SetColor(31); // Red
    gotoxy(56, 6);
    printf("%s %d", month[nmonth - 1], nyr); // Heading year and month display

    for (i = 0, pos = 30; i < 7; i++, pos += 10) {
        if (i == 6)
            SetColor(34); // Blue for Sunday
        else
            SetColor(32); // Green for other days
        gotoxy(pos, 8);
        printf("%s", week[i]);
    }

    SetColor(37); // White
    tdays++;
    pos = 31 + (tdays % 7) * 10;

    for (i = 0, j = 10; i < days[nmonth - 1]; i++, pos += 10) {
        if (pos == 91)
            SetColor(90); // Grey for Sunday
        else
            SetColor(37); // White for other days

        gotoxy(pos, j);
        printf("%d", i + 1);
        if (pos == 91) {
            pos = 21;
            j++;
        }
    }

    SetColor(35); // Purple

    // Drawing horizontal lines
    for (i = 22; i < 102; i++) {
        gotoxy(i, 4);
        printf("-");
        gotoxy(i, 17);
        printf("-");
    }

    // Drawing corners of the rectangle
    gotoxy(21, 4);
    printf("+");
    gotoxy(102, 4);
    printf("+");
    gotoxy(21, 17);
    printf("+");
    gotoxy(102, 17);
    printf("+");

    // Drawing vertical lines
    for (i = 5; i < 17; i++) {
        gotoxy(21, i);
        printf("|");
        gotoxy(102, i);
        printf("|");
    }

    SetColor(36); // Aqua
    gotoxy(24, 11);
    printf("<");
    gotoxy(98, 11);
    printf(">");
}

// Calendar calculation
void calendar(int nyr, int nmonth) {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int tdays = 0, k, myear;
    system("clear");
    myear = nyr - 1;
    if (myear >= 1945) {
        for (k = 1945; k <= myear; k++) {
            tdays += (k % 4 == 0) ? 366 : 365;
        }
    }

    if (nyr % 4 == 0)
        days[1] = 29; // Leap year
    else
        days[1] = 28; // Not a leap year

    for (k = 0; k < (nmonth - 1); k++) {
        tdays += days[k];
    }

    tdays %= 7; // Calculate starting day of the month
    display(nyr, nmonth, tdays, days); // Pass values to display
}
