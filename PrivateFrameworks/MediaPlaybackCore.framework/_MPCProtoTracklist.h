/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray * _accountInfos;
    NSMutableArray * _containers;
    struct { 
        unsigned int shuffleMode : 1; 
    }  _has;
    int  _shuffleMode;
    _MPCProtoTracklistIndexPath * _startingItemIndexPath;
}

@property (nonatomic, retain) NSMutableArray *accountInfos;
@property (nonatomic, retain) NSMutableArray *containers;
@property (nonatomic) bool hasShuffleMode;
@property (nonatomic, readonly) bool hasStartingItemIndexPath;
@property (nonatomic) int shuffleMode;
@property (nonatomic, retain) _MPCProtoTracklistIndexPath *startingItemIndexPath;

+ (Class)accountInfoType;
+ (Class)containerType;

- (void).cxx_destruct;
- (id)accountInfoAtIndex:(unsigned long long)arg1;
- (id)accountInfos;
- (unsigned long long)accountInfosCount;
- (void)addAccountInfo:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)clearAccountInfos;
- (void)clearContainers;
- (id)containerAtIndex:(unsigned long long)arg1;
- (id)containers;
- (unsigned long long)containersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShuffleMode;
- (bool)hasStartingItemIndexPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountInfos:(id)arg1;
- (void)setContainers:(id)arg1;
- (void)setHasShuffleMode:(bool)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setStartingItemIndexPath:(id)arg1;
- (int)shuffleMode;
- (id)startingItemIndexPath;
- (void)writeTo:(id)arg1;

@end
