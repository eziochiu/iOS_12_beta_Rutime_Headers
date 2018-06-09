/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController * _alertController;
}

@property (nonatomic, readonly, retain) UIAlertController *alertController;

- (void).cxx_destruct;
- (id)_presentationViewController;
- (id)alertController;
- (id)init;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;

@end
