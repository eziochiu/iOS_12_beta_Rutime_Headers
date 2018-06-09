/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification {
    NSString * _altMessage;
    NSArray * _altMessageLinks;
    ICQLink * _bottomLink;
    NSString * _bottomLinkVisibleKey;
    NSString * _fineprintFormat;
    NSArray * _fineprintLinks;
    NSString * _iconBundleIdentifier;
    NSString * _message;
    NSArray * _messageLinks;
    ICQLink * _purchase2Link;
    NSString * _purchase2LinkVisibleKey;
    ICQLink * _purchaseLink;
    NSDictionary * _serverDict;
    NSString * _title;
}

@property (nonatomic, retain) NSString *altMessage;
@property (nonatomic, retain) NSArray *altMessageLinks;
@property (nonatomic, retain) ICQLink *bottomLink;
@property (nonatomic, retain) NSString *bottomLinkVisibleKey;
@property (nonatomic, retain) NSString *fineprintFormat;
@property (nonatomic, retain) NSArray *fineprintLinks;
@property (nonatomic, retain) NSString *iconBundleIdentifier;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSArray *messageLinks;
@property (nonatomic, retain) ICQLink *purchase2Link;
@property (nonatomic, retain) NSString *purchase2LinkVisibleKey;
@property (nonatomic, retain) ICQLink *purchaseLink;
@property (nonatomic, readonly) NSDictionary *serverDict;
@property (nonatomic, retain) NSString *title;

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)altMessage;
- (id)altMessageLinks;
- (id)bottomLink;
- (id)bottomLinkVisibleKey;
- (id)copy;
- (id)copyWithBindings:(id)arg1;
- (id)debugDescription;
- (id)fineprintFormat;
- (id)fineprintLinks;
- (id)iconBundleIdentifier;
- (id)initWithServerDictionary:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2;
- (id)message;
- (id)messageLinks;
- (id)purchase2Link;
- (id)purchase2LinkVisibleKey;
- (id)purchaseLink;
- (id)serverDict;
- (void)setAltMessage:(id)arg1;
- (void)setAltMessageLinks:(id)arg1;
- (void)setBottomLink:(id)arg1;
- (void)setBottomLinkVisibleKey:(id)arg1;
- (void)setFineprintFormat:(id)arg1;
- (void)setFineprintLinks:(id)arg1;
- (void)setIconBundleIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLinks:(id)arg1;
- (void)setPurchase2Link:(id)arg1;
- (void)setPurchase2LinkVisibleKey:(id)arg1;
- (void)setPurchaseLink:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
