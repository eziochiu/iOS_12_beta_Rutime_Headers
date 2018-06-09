/* made by EzioChiu.
 */

@protocol BSUIDateLabel <NSObject>

@required

- (<BSUIDateLabelDelegate> *)delegate;
- (bool)isAllDay;
- (bool)isTimestamp;
- (long long)labelType;
- (void)prepareForReuse;
- (void)setAllDay:(bool)arg1;
- (void)setDelegate:(id <BSUIDateLabelDelegate>)arg1;
- (void)setEndDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)setIsTimestamp:(bool)arg1;
- (void)setLabelType:(long long)arg1;
- (void)setStartDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;

@end
