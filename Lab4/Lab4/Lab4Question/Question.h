//
//  Question.h
//  Lab3
//
//  Created by user169313 on 2021-07-10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Question : NSObject

@property (nonatomic, copy) NSString *questionText;
@property (nonatomic) NSArray *answerSet;
@property (nonatomic) NSDictionary *answerChoices;
@property (nonatomic, strong) NSDate *startTime;
@property (nonatomic, strong) NSDate *endTime;

- (void) generateQuestion;
- (BOOL) checkAnswer: (int)answer;
- (NSString *)getAnswers;
- (NSString *)getQuestion;

@end

NS_ASSUME_NONNULL_END
