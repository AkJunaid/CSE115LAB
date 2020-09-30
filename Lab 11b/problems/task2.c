
void printByDept(char *deptName, student allStudents[], int size){
    for(int i=0;i<size; i++){
        if(strcmp(deptName,allStudents[i].dept) == 0){
            printf("Name: %s \nId: %d \nDept: %s \nCGPA: %f \n",allStudents[i].name,allStudents[i].id,allStudents[i].dept,allStudents[i].cgpa);
        }
    }
}
