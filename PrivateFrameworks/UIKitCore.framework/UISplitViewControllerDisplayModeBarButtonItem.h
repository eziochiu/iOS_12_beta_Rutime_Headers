/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem {
    <UISplitViewControllerImpl> * _impl;
    bool  _wasAddedToNavigationItem;
}

@property (getter=_hasNavigationItem, nonatomic, readonly) bool hasNavigationItem;
@property (getter=_impl, setter=_setImpl:, nonatomic) <UISplitViewControllerImpl> *impl;
@property (getter=_wasAddedToNavigationItem, setter=_setWasAddedToNavigationItem:, nonatomic) bool wasAddedToNavigationItem;

- (void).cxx_destruct;
- (bool)_hasNavigationItem;
- (id)_impl;
- (void)_setImpl:(id)arg1;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_setWasAddedToNavigationItem:(bool)arg1;
- (bool)_wasAddedToNavigationItem;

@end
