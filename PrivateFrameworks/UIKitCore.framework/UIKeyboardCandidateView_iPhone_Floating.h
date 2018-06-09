/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {
    bool  _handleShowHide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_collapse:(id)arg1;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (bool)_needsBackdrop;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (bool)_shouldShowHideKeyboard;
- (bool)_shouldUseFullMetrics;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCandidateViewExtended:(bool)arg1;

@end
