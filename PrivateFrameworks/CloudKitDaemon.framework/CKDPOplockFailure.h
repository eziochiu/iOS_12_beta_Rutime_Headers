/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPOplockFailure : PBCodable <NSCopying> {
    CKDPRecord * _recordForOplockFailure;
}

@property (nonatomic, readonly) bool hasRecordForOplockFailure;
@property (nonatomic, retain) CKDPRecord *recordForOplockFailure;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordForOplockFailure;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordForOplockFailure;
- (void)setRecordForOplockFailure:(id)arg1;
- (void)writeTo:(id)arg1;

@end
