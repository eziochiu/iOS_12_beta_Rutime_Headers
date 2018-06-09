/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
    NSString * _pushToken;
    NSData * _registrationDataBytes;
}

@property (nonatomic) bool hasPending;
@property (nonatomic, readonly) bool hasPushToken;
@property (nonatomic, readonly) bool hasRegistrationDataBytes;
@property (nonatomic) bool pending;
@property (nonatomic, retain) NSString *pushToken;
@property (nonatomic, retain) NSData *registrationDataBytes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (bool)hasPushToken;
- (bool)hasRegistrationDataBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (id)pushToken;
- (bool)readFrom:(id)arg1;
- (id)registrationDataBytes;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegistrationDataBytes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
