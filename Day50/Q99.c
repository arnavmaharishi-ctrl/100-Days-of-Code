#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm >= 1 && mm <= 12) {
        printf("%02d-%s-%04d\n", dd, months[mm], yyyy);
    } else {
        printf("Invalid month entered\n");
    }

    return 0;
}
