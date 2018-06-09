/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActionDonationCell : UITableViewCell {
    UIView * _cardView;
}

@property (nonatomic) UIView *cardView;

- (void).cxx_destruct;
- (id)cardView;
- (void)configureWithDonation:(id)arg1 showingAppName:(bool)arg2;
- (void)configureWithDonation:(id)arg1 showingAppName:(bool)arg2 dimmingIneligibleForPrediction:(bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setCardView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
