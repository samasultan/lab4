//
//  ScoreKeeper.h
//  Lab3
//
//  Created by user169313 on 2021-07-10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ScoreKeeper : NSObject {
    int wrongCount;
    int rightCount;
    NSMutableArray *answerTime;
}

- (id)init;
- (void) updateScore: (BOOL)isRightAnswer;
- (void) calculateTime: (NSDate *)startTime end:(NSDate *)endTime;
- (void) getAverageTime;

@end

NS_ASSUME_NONNULL_END
