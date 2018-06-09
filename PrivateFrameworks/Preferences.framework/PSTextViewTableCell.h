/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {
    PSTextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSTextView *textView;

- (void).cxx_destruct;
- (void)_adjustTextView:(id)arg1 updateTable:(bool)arg2 withSpecifier:(id)arg3;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)cellRemovedFromView;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setTextView:(id)arg1;
- (void)setValue:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (void)textContentViewDidEndEditing:(id)arg1;
- (id)textView;

@end
