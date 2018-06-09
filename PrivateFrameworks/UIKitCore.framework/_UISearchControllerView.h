/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchControllerView : UIView {
    bool  __disableSearchBarContainerViewOrdering;
}

@property (nonatomic) bool _disableSearchBarContainerViewOrdering;

- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (bool)_disableSearchBarContainerViewOrdering;
- (void)_ensureContainerIsOnTop;
- (void)bringSubviewToFront:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)sendSubviewToBack:(id)arg1;
- (void)set_disableSearchBarContainerViewOrdering:(bool)arg1;

@end
