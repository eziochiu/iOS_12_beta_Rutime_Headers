/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAtomFieldEditor : UITextView

- (void)_define:(id)arg1;
- (id)_enclosingScrollView;
- (id)_hostView;
- (void)_lookup:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_share:(id)arg1;
- (id)_textInputTraits;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertGlyphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)textInputTraits;
- (id)undoManager;

@end
