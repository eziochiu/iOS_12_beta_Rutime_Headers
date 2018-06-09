/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate> {
    NSNumber * _characterCountLimit;
    <HKSimpleDataEntryCellDelegate> * _delegate;
    bool  _editDisabled;
    UIView * _horizontalSeparator;
    HKCaretOptionalTextField * _inputTextField;
    NSArray * _largeTextConstraints;
    NSString * _lastChangedText;
    NSArray * _regularConstraints;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSimpleDataEntryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKCaretOptionalTextField *inputTextField;
@property (nonatomic, retain) NSString *lastChangedText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_informDelegateForContentChange;
- (void)_setupInputTextFieldWithIntention:(long long)arg1;
- (void)_setupLabels;
- (void)_setupLayoutConstraints;
- (void)_updateForCurrentSizeCategory;
- (void)beginEditing;
- (id)delegate;
- (bool)editDisabled;
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputTextField;
- (id)lastChangedText;
- (void)setDelegate:(id)arg1;
- (void)setEditDisabled:(bool)arg1;
- (void)setInputTextField:(id)arg1;
- (void)setLastChangedText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
