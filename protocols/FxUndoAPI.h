/* made by EzioChiu.
 */

@protocol FxUndoAPI

@required

- (bool)endUndoGroup;
- (bool)startUndoGroup:(NSString *)arg1;

@end
