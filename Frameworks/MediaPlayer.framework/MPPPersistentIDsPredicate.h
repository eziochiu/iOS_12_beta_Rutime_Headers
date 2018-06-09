/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldContain : 1; 
    }  _has;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _persistentIDs;
    bool  _shouldContain;
}

@property (nonatomic) bool hasShouldContain;
@property (nonatomic, readonly) long long*persistentIDs;
@property (nonatomic, readonly) unsigned long long persistentIDsCount;
@property (nonatomic) bool shouldContain;

- (void)addPersistentIDs:(long long)arg1;
- (void)clearPersistentIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldContain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long*)persistentIDs;
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)persistentIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldContain:(bool)arg1;
- (void)setPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setShouldContain:(bool)arg1;
- (bool)shouldContain;
- (void)writeTo:(id)arg1;

@end
