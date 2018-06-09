/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIQueuingScrollViewState : _UITransitionState {
    bool  _manual;
    UIView * _view;
    UIViewController * _viewController;
}

@property (getter=isManual, nonatomic, readonly) bool manual;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(bool)arg3 completion:(id /* block */)arg4;
- (bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (bool)isManual;
- (id)view;

@end
