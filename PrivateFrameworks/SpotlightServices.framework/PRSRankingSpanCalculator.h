/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingSpanCalculator : NSObject {
    float  _firstTermPosition;
    float  _normCount;
    float  _ordered;
    float  _pairDist;
    float  _unordered;
}

@property (nonatomic) float firstTermPosition;
@property (nonatomic) float normCount;
@property (nonatomic) float ordered;
@property (nonatomic) float pairDist;
@property (nonatomic) float unordered;

+ (bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long*)arg5;
+ (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long*)arg6 minimumDistancePair:(long long*)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;

- (id)description;
- (float)firstTermPosition;
- (float)normCount;
- (float)ordered;
- (float)pairDist;
- (void)reset;
- (void)setFirstTermPosition:(float)arg1;
- (void)setNormCount:(float)arg1;
- (void)setOrdered:(float)arg1;
- (void)setPairDist:(float)arg1;
- (void)setUnordered:(float)arg1;
- (float)unordered;
- (void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2;

@end
