/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface> {
    UIViewController<SBUIPopoverExtension> * _extensionViewController;
    <_SBUIPopoverExtensionHostInterface> * _hostService;
}

@property (nonatomic, retain) UIViewController<SBUIPopoverExtension> *extensionViewController;
@property (nonatomic, retain) <_SBUIPopoverExtensionHostInterface> *hostService;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_setupChildViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)extensionViewController;
- (id)hostService;
- (id)popoverExtensionContext;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setHostService:(id)arg1;

@end
