//
//  main.c
//  while_statement
//
//  Created by 준우 on 1/18/25.
//

#include <stdio.h>
#include <string.h>

char *trim (char *szSrc) {
    char *pszEOS = 0;
    pszEOS = szSrc + strlen(szSrc) - 1;
    while ((pszEOS >= szSrc) && (*pszEOS == '_'))
        *pszEOS-- = '\0';
    return szSrc;
}

int main(void) {
    char szbuf[] = "12345_____";

    printf("\nBefore trim: %s", szbuf);
    printf("\nAfter trim: %s\n", trim(szbuf));
}
