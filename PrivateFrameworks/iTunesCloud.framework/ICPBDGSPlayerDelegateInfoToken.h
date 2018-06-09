/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    double  _expirationTimeInterval;
    struct { 
        unsigned int expirationTimeInterval : 1; 
        unsigned int sessionID : 1; 
    }  _has;
    unsigned long long  _sessionID;
    NSString * _storefrontIdentifier;
    NSData * _token;
}

@property (nonatomic) double expirationTimeInterval;
@property (nonatomic) bool hasExpirationTimeInterval;
@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasStorefrontIdentifier;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic, retain) NSString *storefrontIdentifier;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationTimeInterval;
- (bool)hasExpirationTimeInterval;
- (bool)hasSessionID;
- (bool)hasStorefrontIdentifier;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionID;
- (void)setExpirationTimeInterval:(double)arg1;
- (void)setHasExpirationTimeInterval:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (void)setToken:(id)arg1;
- (id)storefrontIdentifier;
- (id)token;
- (void)writeTo:(id)arg1;

@end
