/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariDedupedDAVBookmarksEvent : PBCodable <NSCopying> {
    unsigned long long  _dedupeCount;
    unsigned long long  _foldersWithDupesCount;
    struct { 
        unsigned int dedupeCount : 1; 
        unsigned int foldersWithDupesCount : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long dedupeCount;
@property (nonatomic) unsigned long long foldersWithDupesCount;
@property (nonatomic) bool hasDedupeCount;
@property (nonatomic) bool hasFoldersWithDupesCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dedupeCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)foldersWithDupesCount;
- (bool)hasDedupeCount;
- (bool)hasFoldersWithDupesCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDedupeCount:(unsigned long long)arg1;
- (void)setFoldersWithDupesCount:(unsigned long long)arg1;
- (void)setHasDedupeCount:(bool)arg1;
- (void)setHasFoldersWithDupesCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
