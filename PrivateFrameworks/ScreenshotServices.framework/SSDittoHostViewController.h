/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface> {
    <SSDittoHostViewControllerDelegate> * _delegate;
}

@property (nonatomic) <SSDittoHostViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_serviceProxy;
- (bool)becomeFirstResponder;
- (id)delegate;
- (void)dismiss;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
