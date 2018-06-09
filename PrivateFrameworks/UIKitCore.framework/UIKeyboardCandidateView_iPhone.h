/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    UIKeyboardCandidateGridHeader * _header;
    bool  _keyboardIsHidden;
    bool  _showingSortControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;

- (void).cxx_destruct;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (void)_setupKeyboardInteraction;
- (bool)_shouldShowHideKeyboard;
- (bool)_shouldUseFullMetrics;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extendedViewInsets;
- (double)extendedViewTop;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)shouldAutomaticallyHideAndShowSortControl;
- (void)showSortControl:(bool)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sortControlInsets;

@end
