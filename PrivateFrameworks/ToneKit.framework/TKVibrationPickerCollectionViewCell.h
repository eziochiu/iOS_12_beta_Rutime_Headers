/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationPickerCollectionViewCell : TKPickerCollectionViewCell <UITextFieldDelegate> {
    <TKVibrationPickerCollectionViewCellDelegate> * _delegate;
    bool  _editable;
    UIColor * _persistentBackgroundColor;
    UIColor * _regularTextColor;
    UITextField * _removableTextField;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TKVibrationPickerCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic, retain) UIColor *persistentBackgroundColor;
@property (nonatomic, retain) NSString *placeholderText;
@property (nonatomic, retain) UIColor *regularTextColor;
@property (nonatomic, retain) UIFont *regularTextFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPersistentBackgroundColor;
- (bool)_isDisplayingRemovableTextField;
- (void)_layoutRemovableTextField;
- (void)_makeRemovableTextFieldEditable:(bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)delegate;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChecked;
- (bool)isEditable;
- (id)labelText;
- (void)layoutSubviews;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (id)persistentBackgroundColor;
- (id)placeholderText;
- (id)regularTextColor;
- (id)regularTextFont;
- (void)setChecked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setPersistentBackgroundColor:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setRegularTextColor:(id)arg1;
- (void)setRegularTextFont:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
