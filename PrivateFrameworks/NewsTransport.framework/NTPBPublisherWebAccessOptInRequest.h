/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying> {
    NSString * _channelId;
    NSString * _country;
    NSString * _email;
    NSString * _iapId;
    NSString * _language;
    NSString * _purchaseReceipt;
}

@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, readonly) bool hasChannelId;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasEmail;
@property (nonatomic, readonly) bool hasIapId;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasPurchaseReceipt;
@property (nonatomic, retain) NSString *iapId;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *purchaseReceipt;

- (void).cxx_destruct;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)dictionaryRepresentation;
- (id)email;
- (bool)hasChannelId;
- (bool)hasCountry;
- (bool)hasEmail;
- (bool)hasIapId;
- (bool)hasLanguage;
- (bool)hasPurchaseReceipt;
- (unsigned long long)hash;
- (id)iapId;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)purchaseReceipt;
- (bool)readFrom:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setIapId:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPurchaseReceipt:(id)arg1;
- (void)writeTo:(id)arg1;

@end
