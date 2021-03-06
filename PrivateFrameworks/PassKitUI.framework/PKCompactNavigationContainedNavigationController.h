/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {
    _UIBackdropView * _backdropView;
    NSHashTable * _observers;
    NSLock * _observersLock;
    bool  _overridesContentOverlayInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool overridesContentOverlayInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_observers;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)addContentContainerObserver:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)overridesContentOverlayInsets;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)removeContentContainerObserver:(id)arg1;
- (void)setOverridesContentOverlayInsets:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
