/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NoteTextView : _UICompatibilityTextView <UIGestureRecognizerDelegate> {
    <NoteTextViewActionDelegate> * _actionDelegate;
    NSLayoutConstraint * _contentSizeHeightConstraint;
    NSLayoutConstraint * _contentSizeWidthConstraint;
    <NoteTextViewLayoutDelegate> * _layoutDelegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
}

@property (nonatomic) <NoteTextViewActionDelegate> *actionDelegate;
@property (nonatomic, retain) NSLayoutConstraint *contentSizeHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentSizeWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NoteTextViewLayoutDelegate> *layoutDelegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilitySpeakSelectionAssociatedScrollView;
- (id)_contentAsPasteboardItemsForWebArchive:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_enclosingScrollerIncludingSelf;
- (bool)_forwardsToParentScroller;
- (void)_showTextStyleOptions:(id)arg1;
- (id)actionDelegate;
- (void)addGestureRecognizer:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentAsPasteboardItems;
- (id)contentSizeHeightConstraint;
- (id)contentSizeWidthConstraint;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)htmlDocument;
- (void)increaseSize:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (void)insertImage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutDelegate;
- (id)longPressGestureRecognizer;
- (void)menuControllerWillHideNotification:(id)arg1;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)paste:(id)arg1;
- (id)selectedContentAsPasteboardItems;
- (id)selectedDOMRange;
- (void)setActionDelegate:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSizeHeightConstraint:(id)arg1;
- (void)setContentSizeWidthConstraint:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setGestureRecognizersPriorities;
- (void)setLayoutDelegate:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)strikethrough:(id)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateMenuController;
- (id)webArchive;

@end
