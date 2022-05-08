bool controllo( char a ){
    if ( ((a >= 65)&&(a <=90))||(a >=97)&&( a <=122) ){
        return true;
    } else {
        return false;
    }
}

char conversione( char a ) {
        if ((a >= 65)&&(a <=90)){
            char convertito[1];
            convertito[0] = a +32;
            return convertito[0];
        } if ( (a >=97)&&( a <=122) ){
            char convertito[1];
            convertito[0] = a -32;
            return convertito[0];
        }
}
