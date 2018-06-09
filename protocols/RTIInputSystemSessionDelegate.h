/* made by EzioChiu.
 */

@protocol RTIInputSystemSessionDelegate <NSObject>

@optional

- (void)inputSession:(RTIInputSystemSession *)arg1 didChangePause:(bool)arg2 withReason:(NSString *)arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentStateDidChange:(RTIDocumentState *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidDie:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1;

@end
