#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /* Variable declarations*/
    char lang[16];
    FILE * fpointer;

    /* Prompt */
    printf("Enter language:\nCurrent supported languages: C, Java, Javascript, HTML\n");
    scanf("%s", lang);

    /* Determining language and writing file */
    if (strcasecmp(lang, "java") == 0) {
        fpointer = fopen("java-template.java", "w");
        fprintf(fpointer, "class java-template.java\n    {\n\n\n    public static void main(String args[])\n    {\n\n    }\n}\n");
    
    } else if (strcasecmp(lang, "c") == 0) {
        fpointer = fopen("c-template.c", "w");
        fprintf(fpointer, "#include <stdio.h>\n#include <stdlib.h>\n\nint main() {\n\n\n\n    return 0;\n}\n");
    
    } else if (strcasecmp(lang, "javascript") == 0) {
        fpointer = fopen("javascript-template.js", "w");
        fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n<body>\n\n   <script>\n   \n   </script>\n\n</body>\n\n</html>\n");
        
    } else if (strcasecmp(lang, "html") == 0) {
        fpointer = fopen("javascript-template.html", "w");
        fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n   <body>\n   \n   \n   </body>\n\n</html>\n");
    
    } else {
        printf("Invalid or unsupported language.\n");
        return 1;
    }

    /* Closing and exiting */
    fclose(fpointer);
    printf("Successful.\nThanks for using my tool!\n");
    return 0;
}

