#include <stdio.h>
#include <stdlib.h>

struct book {
    char bookTitle[50];  
    int bookNumber;
    int bookPages;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_elements = atoi(argv[1]);
    struct book* myBooks = (struct book*)malloc(num_elements * sizeof(struct book));

    if (myBooks == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("\n\nPlease enter information for %d books. Enter the title, number, and page count for each book:\n\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf(" %49[^\n]%d%d", myBooks[i].bookTitle, &myBooks[i].bookNumber, &myBooks[i].bookPages);
        printf("\nYou entered: '%s %d %d' and this was stored in the struct at index %d\n\n", myBooks[i].bookTitle, myBooks[i].bookNumber, myBooks[i].bookPages, i);
    }

    printf("\nHere is the data in all of the books stored: ");
    for (int i = 0; i < num_elements; i++) {
        printf("\nBook at Index %d: Title: %s, Number: %d, Pages: %d", i, myBooks[i].bookTitle, myBooks[i].bookNumber, myBooks[i].bookPages);
    }

    printf("\n");

    free(myBooks);
    return 0;
}

/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/