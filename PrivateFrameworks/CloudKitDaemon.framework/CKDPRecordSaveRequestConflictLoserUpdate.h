/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying> {
    NSMutableArray * _conflictLoserEtags;
}

@property (nonatomic, retain) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (void).cxx_destruct;
- (void)addConflictLoserEtags:(id)arg1;
- (void)clearConflictLoserEtags;
- (id)conflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)writeTo:(id)arg1;

@end
