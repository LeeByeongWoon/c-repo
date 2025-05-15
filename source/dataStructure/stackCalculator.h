//
// Created by 이병운 on 25. 5. 7.
//

#ifndef C_ALGORITHM_STACKCALCULATOR_H
#define C_ALGORITHM_STACKCALCULATOR_H
typedef struct CalcNode {
    char data[100];
    struct CalcNode *next;
} CalcNode;

typedef struct CalcStack {
    CalcNode *top;
} CalcStack;

char *pop(CalcStack *stack);

void push(CalcStack *stack, char *data);

char *getTop(CalcStack *stack);

int getPriority(char *i);

char *transition(CalcStack *stack, char **s, int size, char *result_buffer, size_t buffer_size);

void calculate(CalcStack *stack, char **s, int size);

#endif //C_ALGORITHM_STACKCALCULATOR_H
