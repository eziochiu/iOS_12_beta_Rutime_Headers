/* made by EzioChiu.
 */

@protocol BRCOperationSubclass <NSObject>

@required

- (void)main;
- (bool)shouldRetryForError:(NSError *)arg1;

@end
