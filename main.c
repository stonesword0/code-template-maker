#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {

    /* Making the variable for the 
    type of language the user wants*/

    char lang[255];
    printf("\nWhat programming language would you like a template for?\nCurrent suppourted languages: C, Java, Javascript, HTML\n");
    scanf("%s", lang);

    /*Using a Else Statement to figure
    out which language the user wants and
    writing the file with the template */

if( strcmp(lang, "java") == 0)
{
    FILE * fpointer = fopen("java-template.java", "w");

    fprintf(fpointer, "class java-template.java\n    {\n\n\n    public static void main(String args[])\n    {\n\n    }\n}");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

/* This else statment has a uppercase
J just in case the user puts one. */

else if( strcmp(lang, "Java") == 0){

    FILE * fpointer = fopen("java-template.java", "w");

    fprintf(fpointer, "class java-template.java\n    {\n\n\n    public static void main(String args[])\n    {\n\n    }\n}");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

else if( strcmp(lang, "c") == 0){

    FILE * fpointer = fopen("c-template.c", "w");

    fprintf(fpointer, "#include <stdio.h>\n#include <stdlib.h>\n\nint main() {\n\n\n\n    return 0;\n}");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

/* This else statment has a uppercase
C just in case the user puts one. */

else if( strcmp(lang, "C") == 0){

    FILE * fpointer = fopen("c-template.c", "w");

    fprintf(fpointer, "#include <stdio.h>\n#include <stdlib.h>\n\nint main() {\n\n\n\n    return 0;\n}");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

else if( strcmp(lang, "javascript") == 0){

    FILE * fpointer = fopen("javascript-template.js", "w");

    fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n<body>\n\n   <script>\n   \n   </script>\n\n</body>\n\n</html>");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}
/* This else statment has a uppercase
J and S just in case the user puts them. */

else if( strcmp(lang, "JavaScript") == 0){

    FILE * fpointer = fopen("javascript-template.js", "w");

    fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n<body>\n\n   <script>\n   \n   </script>\n\n</body>\n\n</html>");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}
/* This else statment has a uppercase
J just in case the user puts one. */

else if( strcmp(lang, "Javascript") == 0){

    FILE * fpointer = fopen("javascript-template.js", "w");

    fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n<body>\n\n   <script>\n   \n   </script>\n\n</body>\n\n</html>");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

else if( strcmp(lang, "html") == 0){

    FILE * fpointer = fopen("javascript-template.html", "w");

    fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n   <body>\n   \n   \n   </body>\n\n</html>");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

/* This else statment has a uppercase
HTML just in case the user puts one. */

else if( strcmp(lang, "HTML") == 0){

    FILE * fpointer = fopen("javascript-template.html", "w");

    fprintf(fpointer, "<!DOCTYPE HTML>\n<html>\n\n   <body>\n   \n   \n   </body>\n\n</html>");

    fclose(fpointer);

    printf("Template making successful.\nThanks for using my tool!\nYour template is in the folder you ran the program from.\n");
}

else{
    printf("Incorrect language. Please try again.\n");

}

    return 0;
}

