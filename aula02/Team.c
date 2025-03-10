int main() {
    
    int qntd, problema;
    int linha[1000] = {0}, implementar = 0;
 
    scanf("%d", &qntd);
 
    for (int i=0; i<qntd; i++) {
 
        for (int j = 0; j<3; j++) {
            scanf("%d", &problema);
 
            if(problema)
                linha[i] ++;
        }
        
        if(linha[i] >= 2) {
            implementar++;
        }
    }
 
    printf("%d", implementar);
 
    return 0;
}