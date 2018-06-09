/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {
    PKSuperscriptedCurrencyAmountLabel * _amountLabel;
    CNAvatarViewController * _avatarViewController;
    NSString * _contactName;
    PKActivityEventPeerPaymentTransaction * _event;
    UILabel * _subtitleView;
    UILabel * _timeView;
    UILabel * _titleView;
    UIImageView * _unreadIndicatorView;
}

@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) NSString *contactName;
@property (nonatomic, retain) PKActivityEventPeerPaymentTransaction *event;

+ (double)height;
+ (double)separatorLeadingInset;
+ (id)unreadIndicatorImage;

- (void).cxx_destruct;
- (void)_updateViews;
- (id)avatarViewController;
- (id)contactName;
- (void)dealloc;
- (id)event;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAvatarViewController:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEvent:(id)arg1;

@end
