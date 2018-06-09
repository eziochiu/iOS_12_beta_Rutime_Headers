/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface> {
    <_SBUIPopoverExtensionHostDelegate> * _delegate;
}

@property (nonatomic) <_SBUIPopoverExtensionHostDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_extensionRequestsDismiss;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
