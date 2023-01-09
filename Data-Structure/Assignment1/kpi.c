// Anggota Kelompok :
// 2602189303 - MICHAEL
// 2602189221 - EVOTIANUS
// 2602189190 - DAVIN RAFFILIO
// 2602189934 - NEISYA HOLLY SANTOSO
// 2602189272 - HOSANNIA MICHAELA MARSINTA HARDIPUTRI

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dataIndex = 0;

typedef struct emp
{
    /* data */
    char name[100];
    char department[100];
}eDetail;

typedef struct comp{
    //1 - 5
    float compA;
    float compB;
    float compC;
    float compD;
    float compE;
}kpiComp;

typedef struct kpi
{
    /* data */
    int idEmployee;
    eDetail empDetail;
    kpiComp components;
    //sum setiap komponen
    float kpiScore;

}KPI;

void inputData(KPI empKpi[]){
    float average = 0.0;

    printf("input data: \n");
    printf("id employee: "); scanf("%d",&empKpi[dataIndex].idEmployee);
    getchar();
    printf("employee name: "); scanf("%[^\n]",empKpi[dataIndex].empDetail.name);
    getchar();
    printf("employee department: "); scanf("%[^\n]",empKpi[dataIndex].empDetail.department);
    getchar();
    do {
        printf("input comp A: "); scanf("%f",&empKpi[dataIndex].components.compA);
        average += empKpi[dataIndex].components.compA;
        getchar();
    } while (1 > empKpi[dataIndex].components.compA || empKpi[dataIndex].components.compA > 6);
    do {
        printf("input comp B: "); scanf("%f",&empKpi[dataIndex].components.compB);
        average += empKpi[dataIndex].components.compB;
        getchar();
    } while (1 > empKpi[dataIndex].components.compB || empKpi[dataIndex].components.compB > 6);
    do {
        printf("input comp C: "); scanf("%f",&empKpi[dataIndex].components.compC);
        average += empKpi[dataIndex].components.compC;
        getchar();
    } while (1 > empKpi[dataIndex].components.compC || empKpi[dataIndex].components.compC > 6);
    do {
        printf("input comp D: "); scanf("%f",&empKpi[dataIndex].components.compD);
        average += empKpi[dataIndex].components.compD;
        getchar();
    } while (1 > empKpi[dataIndex].components.compD || empKpi[dataIndex].components.compD > 6);
    do {
        printf("input comp E: "); scanf("%f",&empKpi[dataIndex].components.compE);
        average += empKpi[dataIndex].components.compE;
        getchar();
    } while (1 > empKpi[dataIndex].components.compE || empKpi[dataIndex].components.compE > 6);
    
    empKpi[dataIndex].kpiScore = average / 5.0;

    dataIndex++;
}

void printData(KPI empKpi[]){
    for (int i = 0; i < dataIndex; i++) {
        printf("data index: %d\n", i + 1);
        printf("id employee: %d\n",empKpi[i].idEmployee);
        printf("employee name: %s\n",empKpi[i].empDetail.name);
        printf("employee department: %s\n",empKpi[i].empDetail.department);
        printf("employee kpi score: %lf\n",empKpi[i].kpiScore);
        getchar();
        getchar();
        printf("\n\n");
    }
}

void deleteData(KPI empKpi[]) {
    int deleteIndex = 0;

    printf("Input index to delete: ");
    scanf("%d", &deleteIndex);

    for (int i = deleteIndex - 1; i < dataIndex; i++) {
        empKpi[i] = empKpi[i + 1];
    }

    dataIndex--;
}

void menu(){
    system("CLS");
    printf("1. Input Data\n");
    printf("2. Print Data\n");
    printf("3. Delete Data\n");
    printf("0. exit\n");
}
int main(){
    KPI empKPI[505];
    int inp = 1;
    while (inp != 0)
    {
        menu();
        scanf("%d",&inp);
        switch (inp)
        {
        case 1:
            inputData(empKPI);
            break;
        
        case 2:
            printData(empKPI);
            break;
        
        case 3:
            deleteData(empKPI);
            break;

        default:
            break;
        }
        /* code */
    }
    printf("THANK YOU");
    
}