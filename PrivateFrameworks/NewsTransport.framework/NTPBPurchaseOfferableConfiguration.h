/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying> {
    bool  _allowsPublisherPadApp;
    bool  _allowsPublisherPhoneApp;
    bool  _allowsPublisherWebSite;
    struct { 
        unsigned int allowsPublisherPadApp : 1; 
        unsigned int allowsPublisherPhoneApp : 1; 
        unsigned int allowsPublisherWebSite : 1; 
        unsigned int preferredOffer : 1; 
    }  _has;
    bool  _preferredOffer;
    NSString * _purchaseId;
}

@property (nonatomic) bool allowsPublisherPadApp;
@property (nonatomic) bool allowsPublisherPhoneApp;
@property (nonatomic) bool allowsPublisherWebSite;
@property (nonatomic) bool hasAllowsPublisherPadApp;
@property (nonatomic) bool hasAllowsPublisherPhoneApp;
@property (nonatomic) bool hasAllowsPublisherWebSite;
@property (nonatomic) bool hasPreferredOffer;
@property (nonatomic, readonly) bool hasPurchaseId;
@property (nonatomic) bool preferredOffer;
@property (nonatomic, retain) NSString *purchaseId;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (bool)allowsPublisherPadApp;
- (bool)allowsPublisherPhoneApp;
- (bool)allowsPublisherWebSite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsPublisherPadApp;
- (bool)hasAllowsPublisherPhoneApp;
- (bool)hasAllowsPublisherWebSite;
- (bool)hasPreferredOffer;
- (bool)hasPurchaseId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)preferredOffer;
- (id)purchaseId;
- (bool)readFrom:(id)arg1;
- (void)setAllowsPublisherPadApp:(bool)arg1;
- (void)setAllowsPublisherPhoneApp:(bool)arg1;
- (void)setAllowsPublisherWebSite:(bool)arg1;
- (void)setHasAllowsPublisherPadApp:(bool)arg1;
- (void)setHasAllowsPublisherPhoneApp:(bool)arg1;
- (void)setHasAllowsPublisherWebSite:(bool)arg1;
- (void)setHasPreferredOffer:(bool)arg1;
- (void)setPreferredOffer:(bool)arg1;
- (void)setPurchaseId:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)purchaseOfferableConfigurationsFromJSON:(id)arg1;

@end
