/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPanelInternalState : NSObject <NSCopying> {
    _UIPanelAnimationState * _animationState;
    long long  _collapsedSecondaryIndex;
    long long  _collapsedState;
    UIViewController * _collapsedViewController;
    UISlidingBarConfiguration * _configuration;
    <UIPanelControllerDelegate> * _delegate;
    long long  _externallyAnimatingAffectedSides;
    UISlidingBarStateRequest * _externallyAnimatingStateRequest;
    double  _keyboardAdjustment;
    UIViewController * _leadingViewController;
    UIViewController * _mainViewController;
    UISlidingBarStateRequest * _stateRequest;
    UIViewController * _trailingViewController;
}

@property (nonatomic, retain) _UIPanelAnimationState *animationState;
@property (nonatomic) long long collapsedSecondaryIndex;
@property (nonatomic) long long collapsedState;
@property (nonatomic, retain) UIViewController *collapsedViewController;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic) <UIPanelControllerDelegate> *delegate;
@property (nonatomic) long long externallyAnimatingAffectedSides;
@property (nonatomic, copy) UISlidingBarStateRequest *externallyAnimatingStateRequest;
@property (nonatomic) double keyboardAdjustment;
@property (nonatomic, retain) UIViewController *leadingViewController;
@property (nonatomic, retain) UIViewController *mainViewController;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, retain) UIViewController *trailingViewController;

- (void).cxx_destruct;
- (id)_allowedLeadingWidthsForParentWidth:(double)arg1;
- (id)_allowedTrailingWidthsForParentWidth:(double)arg1;
- (id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2;
- (id)_closestEqualOrLargerStateToRequest:(id)arg1 inPossibleStates:(id)arg2 returningDistance:(double*)arg3;
- (id)_closestStateToRequest:(id)arg1 inPossibleStates:(id)arg2;
- (id)_closestStateToRequest:(id)arg1 inPossibleStates:(id)arg2 returningDistance:(double*)arg3;
- (double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2;
- (id)_matchingStateToRequest:(id)arg1 inPossibleStates:(id)arg2;
- (id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3;
- (id)animationState;
- (long long)collapsedSecondaryIndex;
- (long long)collapsedState;
- (id)collapsedViewController;
- (id)computePossibleStatesGivenParentView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (long long)externallyAnimatingAffectedSides;
- (id)externallyAnimatingStateRequest;
- (double)keyboardAdjustment;
- (id)leadingViewController;
- (id)mainViewController;
- (void)setAnimationState:(id)arg1;
- (void)setCollapsedSecondaryIndex:(long long)arg1;
- (void)setCollapsedState:(long long)arg1;
- (void)setCollapsedViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternallyAnimatingAffectedSides:(long long)arg1;
- (void)setExternallyAnimatingStateRequest:(id)arg1;
- (void)setKeyboardAdjustment:(double)arg1;
- (void)setLeadingViewController:(id)arg1;
- (void)setMainViewController:(id)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setTrailingViewController:(id)arg1;
- (id)stateRequest;
- (id)trailingViewController;

@end
