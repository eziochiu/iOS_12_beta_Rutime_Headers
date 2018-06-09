/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSignatureRequest : PBRequest <NSCopying> {
    NSData * _mescalData;
}

@property (nonatomic, readonly) bool hasMescalData;
@property (nonatomic, retain) NSData *mescalData;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMescalData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mescalData;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setMescalData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
