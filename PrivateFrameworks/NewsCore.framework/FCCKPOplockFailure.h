/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPOplockFailure : PBCodable <NSCopying> {
    FCCKPRecord * _recordForOplockFailure;
}

@property (nonatomic, readonly) bool hasRecordForOplockFailure;
@property (nonatomic, retain) FCCKPRecord *recordForOplockFailure;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
