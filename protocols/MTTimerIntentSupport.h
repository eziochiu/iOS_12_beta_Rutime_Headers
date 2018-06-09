/* made by EzioChiu.
 */

@protocol MTTimerIntentSupport <NSObject>

@required

- (bool)conflictsWithTimer:(NSObject<MTTimerIntentSupport> *)arg1;
- (double)duration;
- (INTimer *)intentsTimer;
- (long long)intentsTimerState;
- (NSDate *)lastModifiedDate;
- (bool)matchesIntentsTimer:(INTimer *)arg1 ignoreRemainingTime:(bool)arg2;
- (double)remainingTime;
- (unsigned long long)state;
- (NSUUID *)timerID;
- (NSString *)title;

@end
