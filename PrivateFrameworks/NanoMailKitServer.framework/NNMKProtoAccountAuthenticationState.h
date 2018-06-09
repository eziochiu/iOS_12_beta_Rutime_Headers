/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {
    NSString * _accountId;
    struct { 
        unsigned int standaloneState : 1; 
    }  _has;
    unsigned int  _standaloneState;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic) bool hasStandaloneState;
@property (nonatomic) unsigned int standaloneState;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (bool)hasStandaloneState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setHasStandaloneState:(bool)arg1;
- (void)setStandaloneState:(unsigned int)arg1;
- (unsigned int)standaloneState;
- (void)writeTo:(id)arg1;

@end
