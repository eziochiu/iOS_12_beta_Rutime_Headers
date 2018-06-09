/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlayMediaIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPlayMediaIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _buckets;
    _INPBTimestamp * _expirationDate;
    struct { 
        unsigned int playShuffled : 1; 
        unsigned int playbackRepeatMode : 1; 
        unsigned int resumePlayback : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBMediaItemValue * _mediaContainer;
    NSArray * _mediaItems;
    bool  _playShuffled;
    int  _playbackRepeatMode;
    NSString * _recoID;
    bool  _resumePlayback;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSArray *buckets;
@property (nonatomic, readonly) unsigned long long bucketsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMediaContainer;
@property (nonatomic) bool hasPlayShuffled;
@property (nonatomic) bool hasPlaybackRepeatMode;
@property (nonatomic, readonly) bool hasRecoID;
@property (nonatomic) bool hasResumePlayback;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBMediaItemValue *mediaContainer;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (nonatomic) bool playShuffled;
@property (nonatomic) int playbackRepeatMode;
@property (nonatomic, copy) NSString *recoID;
@property (nonatomic) bool resumePlayback;
@property (readonly) Class superclass;

+ (Class)bucketType;
+ (Class)mediaItemsType;

- (void).cxx_destruct;
- (int)StringAsPlaybackRepeatMode:(id)arg1;
- (void)addBucket:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (id)associatedCodableAttribute;
- (id)bucketAtIndex:(unsigned long long)arg1;
- (id)buckets;
- (unsigned long long)bucketsCount;
- (void)clearBuckets;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasIntentMetadata;
- (bool)hasMediaContainer;
- (bool)hasPlayShuffled;
- (bool)hasPlaybackRepeatMode;
- (bool)hasRecoID;
- (bool)hasResumePlayback;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)mediaContainer;
- (id)mediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (bool)playShuffled;
- (int)playbackRepeatMode;
- (id)playbackRepeatModeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recoID;
- (bool)resumePlayback;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBuckets:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasPlayShuffled:(bool)arg1;
- (void)setHasPlaybackRepeatMode:(bool)arg1;
- (void)setHasResumePlayback:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setPlayShuffled:(bool)arg1;
- (void)setPlaybackRepeatMode:(int)arg1;
- (void)setRecoID:(id)arg1;
- (void)setResumePlayback:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
