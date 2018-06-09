/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {
    NSString * _etag;
    CKDPRecord * _serverFields;
    CKDPDateStatistics * _timeStatistics;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasServerFields;
@property (nonatomic, readonly) bool hasTimeStatistics;
@property (nonatomic, retain) CKDPRecord *serverFields;
@property (nonatomic, retain) CKDPDateStatistics *timeStatistics;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasServerFields;
- (bool)hasTimeStatistics;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverFields;
- (void)setEtag:(id)arg1;
- (void)setServerFields:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (id)timeStatistics;
- (void)writeTo:(id)arg1;

@end
