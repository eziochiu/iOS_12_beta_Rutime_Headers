/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKScrollViewController : CKViewController {
    double  _bottomInsetPadding;
    bool  _keyboardInteractionCancelled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardScreenFrame;
    bool  _keyboardVisible;
    double  _minimumBottomInset;
    UIScrollView * _scrollView;
    bool  _topInsetIncludesPalette;
    double  _topInsetPadding;
    IMScheduledUpdater * _updater;
}

@property (nonatomic, readonly) double bottomInsetPadding;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) bool keyboardInteractionCancelled;
@property (getter=isKeyboardOnscreenWithoutAccessoryView, nonatomic, readonly) bool keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardScreenFrame;
@property (getter=isKeyboardUndocked, nonatomic, readonly) bool keyboardUndocked;
@property (getter=isKeyboardVisible, nonatomic) bool keyboardVisible;
@property (nonatomic, readonly) double minimumBottomInset;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) bool topInsetIncludesPalette;
@property (nonatomic, readonly) double topInsetPadding;
@property (nonatomic, retain) IMScheduledUpdater *updater;

- (void).cxx_destruct;
- (double)_bottomRotatingFooterHeight;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_updateScrollGeometryWithDuration:(double)arg1;
- (double)_visibleKeyboardHeight;
- (double)accessoryViewHeight;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (double)bottomInsetPadding;
- (double)bottomInsetWithoutAccessoryView;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)dealloc;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (id)init;
- (bool)isHoldingScrollGeometryUpdates;
- (bool)isKeyboardOnscreenWithoutAccessoryView;
- (bool)isKeyboardUndocked;
- (bool)isKeyboardVisible;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidShowOrHide:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (bool)keyboardInteractionCancelled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardScreenFrame;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)keyboardWillShowOrHide:(id)arg1;
- (double)minimumBottomInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (id)scrollView;
- (void)setKeyboardInteractionCancelled:(bool)arg1;
- (void)setKeyboardScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setUpdater:(id)arg1;
- (bool)topInsetIncludesPalette;
- (double)topInsetPadding;
- (void)updateScrollGeometry;
- (id)updater;
- (double)visibleHeightAboveKeyboard;

@end
