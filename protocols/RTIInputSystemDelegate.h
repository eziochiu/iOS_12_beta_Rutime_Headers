/* made by EzioChiu.
 */

@protocol RTIInputSystemDelegate <NSObject>

@required

- (void)inputSystemService:(RTIInputSystemService *)arg1 didCreateInputSession:(RTIInputSystemServiceSession *)arg2;

@optional

- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidPause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidUnpause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDocumentDidChange:(RTIInputSystemServiceSession *)arg2;

@end
