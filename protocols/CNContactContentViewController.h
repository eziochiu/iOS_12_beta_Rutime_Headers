/* made by EzioChiu.
 */

@protocol CNContactContentViewController <CNContactViewServiceProtocol>

@required

- (<CNContactViewHostProtocol> *)delegate;
- (<CNContactViewControllerPPTDelegate> *)pptDelegate;
- (void)setDelegate:(id <CNContactViewHostProtocol>)arg1;
- (void)setPptDelegate:(id <CNContactViewControllerPPTDelegate>)arg1;

@end
