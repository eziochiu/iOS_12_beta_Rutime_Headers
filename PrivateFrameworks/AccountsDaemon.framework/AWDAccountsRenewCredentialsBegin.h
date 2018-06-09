/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface AWDAccountsRenewCredentialsBegin : PBCodable <NSCopying> {
    NSString * _accountType;
    bool  _avoidUI;
    NSString * _clientBundleID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int avoidUI : 1; 
        unsigned int shouldForce : 1; 
    }  _has;
    bool  _shouldForce;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *accountType;
@property (nonatomic) bool avoidUI;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, readonly) bool hasAccountType;
@property (nonatomic) bool hasAvoidUI;
@property (nonatomic, readonly) bool hasClientBundleID;
@property (nonatomic) bool hasShouldForce;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool shouldForce;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)accountType;
- (bool)avoidUI;
- (id)clientBundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountType;
- (bool)hasAvoidUI;
- (bool)hasClientBundleID;
- (bool)hasShouldForce;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setAvoidUI:(bool)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setHasAvoidUI:(bool)arg1;
- (void)setHasShouldForce:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setShouldForce:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)shouldForce;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
