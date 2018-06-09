/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell <UITextViewDelegate> {
    UIButton * _actionButton;
    UITextView * _callToActionTextView;
    UIView * _spacerView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UITextView *callToActionTextView;
@property (nonatomic, readonly) NSAttributedString *callToActionTextViewString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *spacerView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)actionButton;
- (id)callToActionTextView;
- (id)callToActionTextViewString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionButton:(id)arg1;
- (void)setCallToActionTextView:(id)arg1;
- (void)setSpacerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)spacerView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleLabel;

@end
