/* made by EzioChiu.
 */

@protocol NTWritablePrivateDataStorage <NSObject>

@required

- (void)writeReadHistoryItem:(id <FCTodayReadHistoryItem>)arg1;
- (void)writeSeenHistoryItems:(NSArray *)arg1;

@end
