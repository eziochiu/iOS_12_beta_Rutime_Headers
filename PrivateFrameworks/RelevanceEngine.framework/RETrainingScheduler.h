/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETrainingScheduler : NSObject

+ (id)schedulerWithBehavior:(unsigned long long)arg1;

- (void)cancelPendindTasks;
- (void)performTask:(id /* block */)arg1;

@end
