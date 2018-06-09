/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIToolbarContentView : _UIBarContentView {
    NSMapTable * _absorptionTable;
    _UIButtonBar * _buttonBar;
    NSLayoutConstraint * _buttonBarLeadingConstraint;
    NSLayoutConstraint * _buttonBarTrailingConstraint;
    bool  _hitTestingExtensionsAreValid;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _padding;
    double  _standardEdgeSpacing;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_appearanceChanged;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (id)_newButtonBarWithItems:(id)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_updateButtonBarConstraintConstantsForItems:(id)arg1 inView:(id)arg2;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (long long)barMetrics;
- (double)defaultEdgeSpacing;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)reloadWithItems:(id)arg1;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateContent;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end
