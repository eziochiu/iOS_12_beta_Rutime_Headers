/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {
    UIView * mInputView;
    bool  mNumberHasDecimal;
    <UITextViewDelegate> * mSavedDelegate;
    TSKPlaceholderTextView * mTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *string;
@property (readonly) Class superclass;

- (void)beginEditing;
- (void)dealloc;
- (void)deleteBackward;
- (void)endEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)insertDecimalSeparator;
- (void)insertNumber:(long long)arg1;
- (bool)isNegative;
- (void)layoutSubviews;
- (void)p_insertString:(id)arg1;
- (void)p_parseText:(id)arg1;
- (void)parseText;
- (void)setInputView:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTextDelegate:(id)arg1;
- (void)setTextTag:(long long)arg1;
- (id)string;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (void)tintColorDidChange;
- (void)toggleNegative;

@end
