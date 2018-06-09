/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFLSMResult : NSObject {
    NSMutableArray * categoryJudgements;
    NSNumber * threshold;
}

@property (copy) NSNumber *threshold;

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;
+ (id)extractScoresFromLSMResults:(struct __LSMResult { }*)arg1;

- (long long)bestMatchingCategory;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithLSMResultRef:(struct __LSMResult { }*)arg1 threshold:(id)arg2;
- (bool)isRestricted;
- (long long)numberOfCategories;
- (float)scoreForCategory:(long long)arg1;
- (void)setScore:(float)arg1 forCategory:(long long)arg2;
- (void)setThreshold:(id)arg1;
- (id)threshold;

@end
