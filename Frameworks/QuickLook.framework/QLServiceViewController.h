/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLServiceViewController : UIViewController {
    bool  _isAccessoryView;
    UIViewController * _mainViewController;
    NSUUID * _uuid;
}

@property (readonly) UIViewController *mainViewController;
@property (readonly) NSUUID *uuid;

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;

- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)init;
- (void)invalidateService;
- (id)mainViewController;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)arg1;
- (id)uuid;

@end
