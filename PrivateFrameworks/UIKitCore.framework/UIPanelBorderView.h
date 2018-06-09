/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPanelBorderView : UIView {
    NSString * _backdropGroupName;
    bool  _observesTime;
    UIPanelBorderReplicatingView * _replicatingView;
    long long  _statusBarAvoidance;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic) bool observesTime;
@property (nonatomic, retain) UIPanelBorderReplicatingView *replicatingView;
@property (nonatomic) long long statusBarAvoidance;

- (void).cxx_destruct;
- (id)_cachedBackdropGroupName;
- (void)_statusBarTimeDidChange:(id)arg1;
- (void)_updateObservationOfTime;
- (id)backdropGroupName;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (bool)observesTime;
- (id)replicatingView;
- (void)setBackdropGroupName:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setObservesTime:(bool)arg1;
- (void)setReplicatingView:(id)arg1;
- (void)setStatusBarAvoidance:(long long)arg1;
- (long long)statusBarAvoidance;

@end
