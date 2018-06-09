/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {
    NSData * _archiveContinuationToken;
    CKDPAssetsToDownload * _assetsToDownload;
    struct { 
        unsigned int limit : 1; 
        unsigned int newestFirst : 1; 
    }  _has;
    unsigned int  _limit;
    bool  _newestFirst;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) NSData *archiveContinuationToken;
@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, readonly) bool hasArchiveContinuationToken;
@property (nonatomic, readonly) bool hasAssetsToDownload;
@property (nonatomic) bool hasLimit;
@property (nonatomic) bool hasNewestFirst;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) unsigned int limit;
@property (nonatomic) bool newestFirst;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)archiveContinuationToken;
- (id)assetsToDownload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArchiveContinuationToken;
- (bool)hasAssetsToDownload;
- (bool)hasLimit;
- (bool)hasNewestFirst;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (bool)newestFirst;
- (bool)readFrom:(id)arg1;
- (void)setArchiveContinuationToken:(id)arg1;
- (void)setAssetsToDownload:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setHasNewestFirst:(bool)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setNewestFirst:(bool)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
