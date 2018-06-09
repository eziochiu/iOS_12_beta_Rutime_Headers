/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICScrollViewKeyboardResizer : NSObject {
    bool  _autoResizing;
    <ICScrollViewKeyboardResizerDelegate> * _delegate;
    bool  _didResizeScrollView;
    bool  _observingKeyboardNotifications;
    bool  _showingKeyboard;
}

@property (getter=isAutoResizing, nonatomic) bool autoResizing;
@property (nonatomic) <ICScrollViewKeyboardResizerDelegate> *delegate;
@property (nonatomic) bool didResizeScrollView;
@property (getter=isObservingKeyboardNotifications, nonatomic) bool observingKeyboardNotifications;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) bool showingKeyboard;

- (void).cxx_destruct;
- (void)applyInsetsFromKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 duration:(double)arg2;
- (void)clearInsetsWithDuration:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)didResizeScrollView;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isAutoResizing;
- (bool)isObservingKeyboardNotifications;
- (id)scrollView;
- (void)setAutoResizing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidResizeScrollView:(bool)arg1;
- (void)setObservingKeyboardNotifications:(bool)arg1;
- (void)setShowingKeyboard:(bool)arg1;
- (bool)showingKeyboard;
- (void)startAutoResizing;
- (void)stopAutoResizing;

@end