/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying> {
    CKDPTokenRegistrationBody * _tokenRegistrationBody;
}

@property (nonatomic, readonly) bool hasTokenRegistrationBody;
@property (nonatomic, retain) CKDPTokenRegistrationBody *tokenRegistrationBody;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTokenRegistrationBody;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setTokenRegistrationBody:(id)arg1;
- (id)tokenRegistrationBody;
- (void)writeTo:(id)arg1;

@end
