/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRemoveControl : UIView {
    id  _delegate;
    NSString * _label;
    UIRemoveControlMinusButton * _minusButton;
    UIView * _removeConfirmationButton;
    struct { 
        unsigned int removeButtonVisible : 1; 
        unsigned int removeConfirmationVisible : 1; 
        unsigned int removedFromTargetWhenHidden : 1; 
        unsigned int disableToggleRotate : 1; 
        unsigned int alwaysHideRemoveButton : 1; 
        unsigned int editingStyle : 3; 
        unsigned int reserved : 23; 
    }  _removeControlFlags;
    UIView * _target;
}

+ (void)hideAllRemoveConfirmationsInView:(id)arg1;
+ (float)removeButtonWidth;
+ (bool)removeConfirmationsVisibleInView:(id)arg1;

- (void)_confirmationAnimationDidEnd;
- (void)_doInsert:(id)arg1;
- (void)_doRemove:(id)arg1;
- (void)_hideRemoveAnimationDone;
- (void)_hideRemoveConfirmation;
- (id)_interceptEvent:(id)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (bool)_isInsertControl;
- (void)_minusButtonFadeAnimationStopped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_removeConfirmationEndingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_removeConfirmationStartingFrame;
- (void)_setInsertControl:(bool)arg1;
- (void)_setInterceptMouseEvent:(bool)arg1;
- (void)_setRemoveConfirmationShowing:(bool)arg1 animated:(bool)arg2;
- (void)_setTableViewCellEditingStyle:(long long)arg1;
- (void)_shouldRemoveTarget;
- (void)_showDeleteConfirmation:(id)arg1;
- (float)_verticalOffsetFromTarget;
- (void)addConfirmationButtonSubview:(id)arg1 withWidth:(float)arg2 target:(id)arg3;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultRemoveButtonEndingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultRemoveButtonStartingFrame;
- (id)delegate;
- (void)hideControlsUsingRemoveAnimation;
- (id)initWithTarget:(id)arg1;
- (bool)isHighlighted;
- (bool)isRemoveButtonVisible;
- (bool)isRemoveConfirmationVisible;
- (void)layoutSubviews;
- (void)minusButtonDidHide:(id)arg1;
- (float)removeButtonAnimationDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })removeButtonEndingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })removeButtonStartingFrame;
- (id)removeConfirmationButton;
- (id)removeConfirmationView;
- (void)removeFromSuperview;
- (bool)removedFromTargetWhenHidden;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysHideRemoveButton:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setRemoveConfirmationLabel:(id)arg1;
- (void)setRemoveConfirmationVisible:(bool)arg1;
- (void)setRemoveConfirmationVisible:(bool)arg1 animated:(bool)arg2;
- (void)setRemovedFromTargetWhenHidden:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)showRemoveButton:(bool)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetContentBounds;

@end
