////�\�ऺ�E�O�A���ӱM�`���@�����ȩά��ʡC�b�o�ӨҤl���A�ڭ̪��[�k��ƱN�M�`�����[�k�ާ@ 
#include <stdio.h>

// �[�k��ơA�M�`���{��Ƭۥ[���\��
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, sum;

    printf("�п�J��ӼƦr�G\n");
    scanf("%d %d", &a, &b);

    // �ե� add ��ƶi��[�k�ާ@
    sum = add(a, b);

    printf("��Ƥ��M���G%d\n", sum);

    return 0;
}


////���Ǥ��E�O
#include <stdio.h>

// �i��[�k�B�⪺���
int add(int num1, int num2) {
    return num1 + num2;
}

// �p��Ʀr���T����
int cube(int num) {
    return num * num * num;
}

int main() {
    int a, b, sum, cubedSum;

    // Ū����ӼƦr
    printf("�п�J��ӼƦr�G\n");
    scanf("%d %d", &a, &b);

    // ���i��[�k�B��
    sum = add(a, b);

    // �M��ﵲ�G�i��T����B��
    cubedSum = cube(sum);

    // ��X�̲׵��G
    printf("�ۥ[�᪺���G���T���謰�G%d\n", cubedSum);

    return 0;
}

////���q���E�O
#include <stdio.h>

// ��ơG�p��}�C�������`�M
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// ��ơG�p��}�C�������T���褧�M
int sumCubedArray(int arr[], int size) {
    int cubedSum = 0;
    for (int i = 0; i < size; i++) {
        cubedSum += arr[i] * arr[i] * arr[i];
    }
    return cubedSum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]); // �p��}�C���������ƶq

    // �p���`�M
    int sum = sumArray(numbers, n);

    // �p��T���褧�M
    int cubedSum = sumCubedArray(numbers, n);

    // ��X���G
    printf("�Ҧ��Ʀr���`�M���G%d\n", sum);
    printf("�Ҧ��Ʀr���T�����`�M���G%d\n", cubedSum);

    return 0;
}

 
 ////�Ȯɤ��E�O(��l��)
 #include <stdio.h>

// �@�Ӱ���h�Ӫ�l�ƥ��Ȫ����
void initialize() {
    // ��l�ƥΤ�ɭ�
    printf("��l�ƥΤ�ɭ�...\n");

    // �[���t�m���
    printf("�[���t�m���...\n");

    // �إ߼ƾڮw�s��
    printf("�إ߼ƾڮw�s��...\n");

    // ��L�Ұʮɻݭn���檺����
    printf("�����L�Ұʥ���...\n");
}

int main() {
    // �b�{�ǱҰʮɽեΪ�l�ƨ��
    initialize();

    // �{�Ǫ���L����
    printf("�{�ǹB�椤...\n");

    return 0;
}


////�{�Ǥ��E�O  ���M�o�ǨB�J�O���ǰ��檺�A�����̨ä��O���F��{�@�ӳ�@���T�����ȡA�ӬO�󹳬O�{�Ǥ��Y�@�����������B�J���X�C
#include <stdio.h>

// �@�ӵ{�Ǥ��E�����
void processSteps() {
    int value = 10;

    // �Ĥ@�B�G�ק��ܶq��
    value += 5;
    printf("�ק�᪺�ȡG%d\n", value);

    // �ĤG�B�G����P�_
    if (value > 10) {
        printf("�Ȥj�� 10\n");
    } else {
        printf("�Ȥ��j�� 10\n");
    }

    // �ĤT�B�G���L�̲׵��G
    printf("�̲׵��G�G%d\n", value);
}

int main() {
    // �ե� processSteps ���
    processSteps();

    return 0;
}


////���o���E�O �O���@�Ө�ƩμҶ������ާ@�ȶȦ]�����M��b�@�_�ӲզX�b�@�_�A�o�Ǿާ@�����S�����T�����p�C
////�b���o���E�����p�U�A��Ƴq�`�|����h�Ӥ����������ȡC�o�Q�{���O���E�O�̮z���@�اΦ��A�q�`���O�}�n���n��]�p���
#include <stdio.h>

// �@�Ӱ���h�Ӥ��������Ȫ����
void doVariousTasks() {
    printf("���� 1: ���L�H��\n");

    int a = 5, b = 10;
    printf("���� 2: �p�� a �M b ���M: %d\n", a + b);

    if (a > 0) {
        printf("���� 3: �ˬd a �O�_�j�� 0\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("���� 4: ���ƥ��L i: %d\n", i);
    }
}

int main() {
    // �ե� doVariousTasks ���
    doVariousTasks();

    return 0;
}


////��ƽ��X�O 
////�����O��Ҳա]�p��ơ^�������椬�O���ǻ��ƾڡ]�Ҧp�A�q�L�Ѽơ^�C�o�O���X�j�׳̧C���@�اΦ��A�q�`�]�O�̲z�Q�����X�覡�C
////�b��ƽ��X���A�@�ӼҲնȶȳq�L��ѼƦV�t�@�ӼҲնǻ��ƾڡA�Ӥ��̿��t�@�Ҳժ�������{ 

#include <stdio.h>

// �[�k��ơA�Ȱ���Ѽƶi��ާ@
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int result;

    // �ե� add ��ơA�ñN x �M y ���ȧ@���Ѽƶǻ�
    result = add(x, y);

    printf("���G�G%d\n", result);

    return 0;
}



////��Ƶ��c���X�O��ӼҲա]�Ҧp��ơ^�����@�ɤ@�ӽ������ƾڵ��c�]�p���c��B���ΰ}�C�^�C�b��Ƶ��c���X���A
////�@�ӼҲճq�L�@�Ӧ@�ɪ��ƾڵ��c�N�h���ƾڶǻ����t�@�ӼҲ�
#include <stdio.h>

// �w�q�@�ӵ��c��Ӫ�ܾǥͼƾ�
typedef struct {
    int id;
    float score;
    int age;
} Student;

// ��ƳB�z Student ���c��
void printStudentInfo(Student s) {
    printf("�ǥ� ID: %d\n", s.id);
    printf("�ǥ� ����: %.2f\n", s.score);
    printf("�ǥ� �~��: %d\n", s.age);
}

int main() {
    // �Ыؤ@�� Student ���c����
    Student student1 = {123, 90.5, 20};

    // �եΨ�ƨöǻ� Student ���c��
    printStudentInfo(student1);

    return 0;
}
 
////�@�P���X�O
////�@�ɦP�@�ӥ����ܼƩμƾڵ��c�C�b�o�ذ��X���A�@�ӼҲթҰ�����ʥi��|�v�T��Ҧ��ϥθӥ����ܼƪ���L�ҲաC
////�o�ذ��X�j�׬۹�����A�]�����}�a�F�Ҳժ��ʸ˩� 
#include <stdio.h>

// �w�q�@�ӥ����ܼ�
int sharedData = 0;

// ��� A �ק�����ܼ�
void functionA() {
    sharedData = 5;
    printf("Function A updated sharedData to %d\n", sharedData);
}

// ��� B Ū�������ܼ�
void functionB() {
    printf("Function B reads sharedData as %d\n", sharedData);
}

int main() {
    functionA(); // �եΨ�� A
    functionB(); // �եΨ�� B

    return 0;
}


////���e���X�O���X�{�׳̰����@�اΦ��A���o�ͦb�@�ӼҲժ����X�ݩέק�t�@�ӼҲժ������ƾکα���y�{
#include <stdio.h>

void functionB(); // ���e�n�� functionB

// functionA ��������� functionB ������
void functionA() {
    printf("Function A is called\n");
    goto functionB_internal; // ��������� functionB ������

    return; // �û����|�����o��

    functionB_internal: ; // �o�O functionB ����������
}

// functionB ����{
void functionB() {
    printf("Entering Function B\n");
    functionB_internal:
    printf("Function B is executing\n");
}

int main() {
    functionA();
    functionB();

    return 0;
}
 
 
 
