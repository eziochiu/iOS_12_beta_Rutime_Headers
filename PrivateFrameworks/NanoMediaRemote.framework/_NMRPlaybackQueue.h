/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    struct { 
        unsigned int location : 1; 
    }  _has;
    int  _location;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic) bool hasLocation;
@property (nonatomic) int location;

+ (Class)contentItemType;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)arg1;
- (id)contentItems;
- (unsigned long long)contentItemsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentItems:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setLocation:(int)arg1;
- (void)writeTo:(id)arg1;

@end
