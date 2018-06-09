/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeOfferViewController : ICQViewController

@property (getter=isCancelEnabled, nonatomic) bool cancelEnabled;
@property (nonatomic, readonly) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;

+ (bool)supportsPageClassIdentifier:(id)arg1;

- (void)cancel:(id)arg1;
- (id)initWithPageSpecification:(id)arg1;
- (id)initWithUpgradeOfferPageSpecification:(id)arg1;
- (bool)isCancelEnabled;
- (void)loadView;
- (void)setCancelEnabled:(bool)arg1;
- (id)upgradeOfferPageSpecification;

@end
