/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAExecutableAggregator : PASampleAggregator

- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end
