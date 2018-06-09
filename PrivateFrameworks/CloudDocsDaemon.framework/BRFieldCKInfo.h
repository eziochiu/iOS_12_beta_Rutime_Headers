/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldCKInfo : PBCodable <NSCopying, PQLValuable> {
    NSString * _etag;
    NSString * _etagBeforeCrossZoneMove;
    struct { 
        unsigned int knownToServer : 1; 
        unsigned int wasCached : 1; 
    }  _has;
    bool  _knownToServer;
    bool  _wasCached;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *etagBeforeCrossZoneMove;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasEtagBeforeCrossZoneMove;
@property (nonatomic) bool hasKnownToServer;
@property (nonatomic) bool hasWasCached;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool knownToServer;
@property (readonly) Class superclass;
@property (nonatomic) bool wasCached;

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)etagBeforeCrossZoneMove;
- (bool)hasEtag;
- (bool)hasEtagBeforeCrossZoneMove;
- (bool)hasKnownToServer;
- (bool)hasWasCached;
- (unsigned long long)hash;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)knownToServer;
- (void)markMovedToCloudDocsZone;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setEtagBeforeCrossZoneMove:(id)arg1;
- (void)setHasKnownToServer:(bool)arg1;
- (void)setHasWasCached:(bool)arg1;
- (void)setKnownToServer:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (bool)wasCached;
- (void)writeTo:(id)arg1;

@end