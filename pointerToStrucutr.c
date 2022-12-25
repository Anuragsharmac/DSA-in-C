struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main(){
    struct student s ={33,"anurag",99.9};
    struct student *ptr = &s;
    printf("%d\n%s\n%f",ptr->rollno,ptr->name,ptr->marks);
}