#include <stdio.h>
#include <string.h>

int main() {
	
	int i = 0, j = 0;
	float temp_media = 0, media_turma = 0;
	
	struct Estudante {
		int matricula;
		char nome[200];
		float notas[4];
		float media;
	};
	
	struct Estudante estudante[10];
	
	for (i; i<10; i++){
		printf(">>> ALUNO %d\n", i+1);
		printf("Matricula aluno %d: ", i+1);
		scanf("%d", &estudante[i].matricula);
		printf("Nome aluno %i: ", i+1);
		fflush(stdin);
		scanf("%[^\n]s", &estudante[i].nome);
		temp_media = 0;
		
		for (j=0; j<4; j++){
			printf("Nota %d: ", j+1);
			scanf("%f", &estudante[i].notas[j]);
			temp_media = temp_media + estudante[i].notas[j];
		}
		
		estudante[i].media = temp_media / 4;
		printf("-------------\n");
		
	}
	
	system("cls");
	
	for (i = 0; i<10; i++){
		printf("ALUNO %d\n", i+1);
		printf("~~~~~~~\n");
		printf("Matricula: %d\n", estudante[i].matricula);
		printf("Nome: %s\n", estudante[i].nome);
		
		for (j=0; j<4; j++){
			printf("N%d: %.1f\n", j+1, estudante[i].notas[j]);
		}
		
		printf("Media: %.2f\n", estudante[i].media);
		printf("-----------------------\n");
		media_turma = media_turma + estudante[i].media;
	}
	
	media_turma = media_turma / 10;
	printf("Media da turma: %.1f", media_turma);
	
	return 0;
}
