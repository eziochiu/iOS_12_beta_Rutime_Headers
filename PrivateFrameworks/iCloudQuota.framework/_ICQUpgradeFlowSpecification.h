/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    bool  _needsWiFi;
    long long  _offerType;
    NSDictionary * _serverDict;
}

@property (nonatomic) bool needsWiFi;
@property (nonatomic) long long offerType;
@property (nonatomic, readonly) NSDictionary *serverDict;

+ (id)_upgradePageIdentifierForError:(id)arg1;
+ (id)sanitizedUpgradeFlowServerDict:(id)arg1;
+ (id)upgradeFlowSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (bool)needsWiFi;
- (long long)offerType;
- (id)serverDict;
- (void)setNeedsWiFi:(bool)arg1;
- (void)setOfferType:(long long)arg1;
- (id)upgradeFailurePage;
- (id)upgradeFailurePageForNetwork;
- (id)upgradePageForError:(id)arg1;
- (id)upgradePageForSuccess:(bool)arg1;
- (id)upgradeSuccessPage;
- (id)upgradeSuccessPageForWiFi;

@end
