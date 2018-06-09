/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemOffer : NSObject <NSCopying> {
    SSItem * _item;
    NSMutableDictionary * _offerDictionary;
    NSString * _offerIdentifier;
    NSArray * _supportedDevices;
}

@property (getter=_offerItem, setter=_setOfferItem:, nonatomic) SSItem *_offerItem;
@property (nonatomic, readonly) NSSet *accountIdentifiers;
@property (nonatomic, readonly) NSString *actionDisplayName;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) SSDialog *confirmationDialog;
@property (nonatomic, readonly) long long estimatedDiskSpaceNeeded;
@property (nonatomic, readonly) SSNetworkConstraints *networkConstraints;
@property (nonatomic, readonly) NSString *offerIdentifier;
@property (nonatomic, readonly) SSItemMedia *offerMedia;
@property (getter=isOneTapOffer, nonatomic, readonly) bool oneTapOffer;
@property (getter=isPreorder, nonatomic, readonly) bool preorder;
@property (nonatomic, readonly) NSString *priceDisplay;
@property (nonatomic, readonly) id requiredSoftwareCapabilities;
@property (nonatomic, readonly) bool shouldShowPlusIcon;
@property (nonatomic, readonly) SSDialog *successDialog;
@property (nonatomic, readonly) NSArray *supportedDevices;

+ (id)_preferredOfferIdentifiers;

- (id)_offerItem;
- (void)_setOfferItem:(id)arg1;
- (id)accountIdentifiers;
- (id)actionDisplayName;
- (id)actionType;
- (id)allowedToneStyles;
- (id)buyParameters;
- (id)confirmationDialog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (id)documentUTI;
- (long long)estimatedDiskSpaceNeeded;
- (id)init;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (bool)isOneTapOffer;
- (bool)isPreorder;
- (id)networkConstraints;
- (id)offerIdentifier;
- (id)offerMedia;
- (id)playableMedia;
- (id)priceDisplay;
- (id)requiredSoftwareCapabilities;
- (void)setActionDisplayName:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setOneTapOffer:(bool)arg1;
- (void)setPriceDisplay:(id)arg1;
- (bool)shouldShowPlusIcon;
- (id)successDialog;
- (id)supportedDevices;
- (id)valueForProperty:(id)arg1;

@end
