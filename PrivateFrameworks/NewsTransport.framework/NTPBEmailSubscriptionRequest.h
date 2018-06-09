/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {
    long long  _dsId;
    struct { 
        unsigned int dsId : 1; 
    }  _has;
    NSString * _languageCode;
    NSString * _userStorefrontId;
}

@property (nonatomic) long long dsId;
@property (nonatomic) bool hasDsId;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *userStorefrontId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)dsId;
- (bool)hasDsId;
- (bool)hasLanguageCode;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDsId:(long long)arg1;
- (void)setHasDsId:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
