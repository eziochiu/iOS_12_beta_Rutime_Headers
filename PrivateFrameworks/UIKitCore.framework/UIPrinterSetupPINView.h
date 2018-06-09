/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {
    UILabel * _enterLabel;
    long long  _failedAttemptCount;
    UIImageView * _failedBackground;
    UILabel * _failedLabel;
    UIPasscodeField * _passcodeField;
    UITextField * _textEntryField;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *enterLabel;
@property (nonatomic) long long failedAttemptCount;
@property (nonatomic, retain) UIImageView *failedBackground;
@property (nonatomic, retain) UILabel *failedLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPasscodeField *passcodeField;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textEntryField;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)PIN;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (void)dealloc;
- (id)enterLabel;
- (long long)failedAttemptCount;
- (id)failedBackground;
- (id)failedLabel;
- (id)initWithPrinterName:(id)arg1;
- (void)layoutSubviews;
- (id)passcodeField;
- (void)setEnterLabel:(id)arg1;
- (void)setFailedAttemptCount:(long long)arg1;
- (void)setFailedBackground:(id)arg1;
- (void)setFailedLabel:(id)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setTextEntryField:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showSuccess:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startPINInput;
- (void)stopPINInput;
- (void)textDidChange:(id)arg1;
- (id)textEntryField;
- (id)titleLabel;

@end
