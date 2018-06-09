/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSMutableArray * _initialMessagesSyncs;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, retain) NSMutableArray *initialMessagesSyncs;

+ (Class)initialMessagesSyncType;

- (void).cxx_destruct;
- (void)addInitialMessagesSync:(id)arg1;
- (void)clearInitialMessagesSyncs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (id)initialMessagesSyncAtIndex:(unsigned long long)arg1;
- (id)initialMessagesSyncs;
- (unsigned long long)initialMessagesSyncsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setInitialMessagesSyncs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
