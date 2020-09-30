
void saveByDept(char *fileName, char * deptName, student allStudents[], int size){
    FILE *fptr = fopen(fileName,"w");
    for(int i=0;i<size; i++){
        if(strcmp(deptName,allStudents[i].dept) == 0){
            fprintf(fptr,"Name: %s \nId: %d \nDept: %s \nCGPA: %f \n",allStudents[i].name,allStudents[i].id,allStudents[i].dept,allStudents[i].cgpa);
        }
    }
    fclose(fptr);
}
