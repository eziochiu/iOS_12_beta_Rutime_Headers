/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo * _accountInfo;
    _MPCProtoRadioContentReference * _nowPlayingContentReference;
    NSString * _playActivityFeatureName;
    NSString * _radioStationID;
    NSString * _radioStationURLString;
    _MPCProtoRadioContentReference * _seedContentReference;
}

@property (nonatomic, retain) _MPCProtoDelegateInfo *accountInfo;
@property (nonatomic, readonly) bool hasAccountInfo;
@property (nonatomic, readonly) bool hasNowPlayingContentReference;
@property (nonatomic, readonly) bool hasPlayActivityFeatureName;
@property (nonatomic, readonly) bool hasRadioStationID;
@property (nonatomic, readonly) bool hasRadioStationURLString;
@property (nonatomic, readonly) bool hasSeedContentReference;
@property (nonatomic, retain) _MPCProtoRadioContentReference *nowPlayingContentReference;
@property (nonatomic, retain) NSString *playActivityFeatureName;
@property (nonatomic, retain) NSString *radioStationID;
@property (nonatomic, retain) NSString *radioStationURLString;
@property (nonatomic, retain) _MPCProtoRadioContentReference *seedContentReference;

- (void).cxx_destruct;
- (id)accountInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountInfo;
- (bool)hasNowPlayingContentReference;
- (bool)hasPlayActivityFeatureName;
- (bool)hasRadioStationID;
- (bool)hasRadioStationURLString;
- (bool)hasSeedContentReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingContentReference;
- (id)playActivityFeatureName;
- (id)radioStationID;
- (id)radioStationURLString;
- (bool)readFrom:(id)arg1;
- (id)seedContentReference;
- (void)setAccountInfo:(id)arg1;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setRadioStationID:(id)arg1;
- (void)setRadioStationURLString:(id)arg1;
- (void)setSeedContentReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
