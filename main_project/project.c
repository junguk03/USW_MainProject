#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Book {
    char title[50];
    char author[15];
    char content[3000];
};

struct Genre {
    char name[50];
    struct Book books[10]; 
    int numBooks;           
};

struct Bookstore {
    struct Genre *genres;
    int numGenres;
};

void inputBookstore(struct Genre *genre){
    int number;
    char selectedGenre[50];
    FILE *file1;
    strcpy(selectedGenre, genre->name);
    strcat(selectedGenre, ".txt");

    file1 = fopen(selectedGenre, "a");
    if (file1 == NULL){
        fprintf(stderr,"파일 열기 오류 \n");
        exit(1);
    }
    printf("\n몇 권을 입력하시겠습니까? ");
    scanf("%d", &number);

    while (getchar() != '\n');

    for (int i = 0; i < number; ++i){
        printf("책의 정보를 입력하세요 :\n");
        printf("1. 제목: ");
        scanf("%[^\n]s",genre->books[i].title);
        while (getchar() != '\n');
        printf("   저자: ");
        scanf("%[^\n]s",genre->books[i].author);
        while (getchar() != '\n');
        printf("   내용: ");
        scanf("%[^\n]s",genre->books[i].content);
        while (getchar() != '\n');

        fprintf(file1, "%s\n%s\n%s\n\n\n", genre->books[i].title, genre->books[i].author, genre->books[i].content);

        genre->numBooks += 1;
        printf("\n\n");
    }
    fclose(file1);
}

void inputGenre(struct Bookstore *bookstore, char genreName[]){
    char inputgenre[50];
    FILE *file2;
    strcpy(inputgenre, genreName);
    strcat(inputgenre, ".txt");

    file2 = fopen(inputgenre,"w+");
	
	if(file2 == NULL){
		fprintf(stderr,"파일 생성 오류 \n");
        exit(1);
	}
    fprintf(file2,"");

    bookstore->genres = realloc(bookstore->genres, (bookstore->numGenres + 1) * sizeof(struct Genre));
    strcpy(bookstore->genres[bookstore->numGenres].name, genreName);
    bookstore->numGenres += 1;
    
    printf("파일이 정상적으로 생성되었습니다.\n\n");
	fclose(file2);
}

void initializeBookstore(struct Bookstore *bookstore) {

    bookstore->genres = malloc(bookstore->numGenres * sizeof(struct Genre));

    struct Genre mystery = {"mystery", {}, 0};
    struct Genre scifi = {"scifi", {}, 0};
    struct Genre fantasy = {"fantasy", {}, 0};
    struct Genre poem = {"poem", {}, 0};
    struct Genre nonfiction = {"nonfiction", {}, 0};

    bookstore->genres[0] = mystery;
    bookstore->genres[1] = scifi;
    bookstore->genres[2] = fantasy;
    bookstore->genres[3] = poem;
    bookstore->genres[4] = nonfiction;
}

void printBooksInGenre(struct Genre *genre) {
    printf("%s의 책:\n", genre);
    for (int i = 0; i < genre->numBooks; ++i) {
        printf("%d. %s\n", i + 1, genre->books[i].title);
    }
}

int main() {
    struct Bookstore bookstore;
    bookstore.numGenres = 5;
    initializeBookstore(&bookstore);
    int num1, num2, numGenre, bookNum;
    char text;
    char genreName[50];

    while(1){
        printf("선택하세요\n");
        printf("1. 책 서점에 추가하기\n");
        printf("2. 장르 추가하기\n");
        printf("3. 책 읽기\n");
        printf("4. 서점 나가기\n");
        scanf("%d",&num1);
        printf("\n");

        if(num1 == 1){
            for (int i = 0; i < bookstore.numGenres; i++) {
                printf("%d. %s\n", i + 1, bookstore.genres[i].name);
            }
            printf("\n추가할 책의 장르 번호를 적으세요: ");
            scanf("%d",&num2);
            inputBookstore(&bookstore.genres[num2 - 1]);
            continue;
        }

        else if(num1 == 2){
            printf("추가하고 싶은 장르의 이름을 적으세요\n");
            scanf("%s",genreName);
            inputGenre(&bookstore,genreName);
            continue;
        }

        else if(num1 == 3){
            for (int i = 0; i < bookstore.numGenres; i++) {
                printf("%d. %s\n", i + 1, bookstore.genres[i].name);
            }
            printf("보고 싶은 장르의 번호를 적으세요: ");
            scanf("%d", &numGenre);
            printBooksInGenre(&bookstore.genres[numGenre - 1]);
            printf("보고 싶은 책 번호를 적으세요: ");
            scanf("%d",&bookNum);
            printf("\n%s\n%s\n\n",bookstore.genres[numGenre - 1].books[bookNum-1].author, bookstore.genres[numGenre - 1].books[bookNum-1].content);
            continue;
        }

        else if(num1 == 4){
            break;
        }

        else{
            printf("1, 2, 3 중에서 선택하세요\n");
            continue;
        }
    }
    free(bookstore.genres);

    return 0;
}
