/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {
    long long  _authorizationStatus;
    struct { 
        unsigned int authorizationStatus : 1; 
        unsigned int modificationDate : 1; 
    }  _has;
    double  _modificationDate;
    NSData * _sourceUUID;
}

@property (nonatomic) long long authorizationStatus;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasSourceUUID;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSData *sourceUUID;

- (void).cxx_destruct;
- (long long)authorizationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationStatus;
- (bool)hasModificationDate;
- (bool)hasSourceUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setSourceUUID:(id)arg1;
- (id)sourceUUID;
- (void)writeTo:(id)arg1;

@end
