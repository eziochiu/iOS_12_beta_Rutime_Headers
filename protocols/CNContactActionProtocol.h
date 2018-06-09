/* made by EzioChiu.
 */

@protocol CNContactActionProtocol

@required

- (bool)canPerformAction;
- (void)performActionWithSender:(id)arg1;
- (NSString *)title;

@end
