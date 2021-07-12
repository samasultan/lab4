//
//  Question.m
//  Lab3
//
//  Created by user169313 on 2021-07-10.
//

#import "Question.h"

@implementation Question

- (void) generateQuestion {
}

- (BOOL)checkAnswer: (int)answer {
    NSString *key = _answerSet[answer-1];
    NSNumber *choosenAnswer = _answerChoices[key];
    _endTime = [NSDate date];
    return ([choosenAnswer intValue] == 1);
}

- (NSString *)getAnswers {
    NSMutableArray *answers = [_answerSet mutableCopy];
    for (int i=0; i<[_answerSet count]; i++) {
        NSString *answer = _answerSet[i];
        [answers replaceObjectAtIndex:i withObject:[NSString stringWithFormat:@"%d)%@", i+1, answer]];
    }
    
    return [answers componentsJoinedByString:@" "];
}

- (NSString *)getQuestion {
    _startTime = [NSDate date];
    return _questionText;
}
@end
