/* made by EzioChiu.
 */

@protocol MFMailboxPredictor <NSObject>

@required

- (NSArray *)predictMailboxIDsForMessages:(NSArray *)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3;

@end
