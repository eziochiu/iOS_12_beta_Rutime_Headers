/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIProudLockContainerView : UIView {
    _UILegibilitySettings * _legibilitySettings;
    SBUIProudLockIconView * _proudLockIconView;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBUIProudLockIconView *proudLockIconView;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_proudLocktransformForCurrentCondition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)proudLockIconView;
- (void)setLegibilitySettings:(id)arg1;
- (void)setProudLockIconView:(id)arg1;

@end
