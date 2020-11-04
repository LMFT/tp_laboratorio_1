#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char id[6];
    char name[128];
    char hours[6];
    char salary[10];
    int assignedElements;
    Employee* aux;

    assignedElements = 0;

    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        while(!feof(pFile))
        {
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", id, name, hours, salary);
            printf("\n%s %s %s %s\n", id, name, hours, salary);

            aux = employee_newParametros(id, name, hours, salary);
            if(aux != NULL)
            {
               ll_add(pArrayListEmployee, aux);
                assignedElements++;
            }
        }
    }
    return assignedElements;

}

int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{
    int assignedElement;
    Employee* pEmployee;

    assignedElement = 0;

    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        while(!feof(pFile))
        {
            pEmployee = employee_new();
            if(pEmployee != NULL)
            {
                fread(pEmployee, sizeof(Employee), 1, pFile);
                if(!feof(pFile))
                {
                    ll_add(pArrayListEmployee, pEmployee);
                }
            }
            if(assignedElement == 0)
            {
                ll_remove(pArrayListEmployee, 0);
            }
        assignedElement++;
        }
    }
    return assignedElement;
}
