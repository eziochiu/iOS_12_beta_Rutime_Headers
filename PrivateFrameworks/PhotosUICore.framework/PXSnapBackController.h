/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSnapBackController : NSObject <UIGestureRecognizerDelegate> {
    bool  _enabled;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backButtonView;
- (void)_enumerateDestinationViewControllersUsingBlock:(id /* block */)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_loadGestureRecognizer;
- (void)_presentHistory;
- (void)_unloadGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (bool)isEnabled;
- (id)longPressGestureRecognizer;
- (id)navigationController;
- (void)setEnabled:(bool)arg1;

@end
