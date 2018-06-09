/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMutableRadioStationPlaybackMetadata : MPCRadioStationPlaybackMetadata

@property (nonatomic, retain) RadioArtworkCollection *artworkCollection;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationName;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, copy) NSURL *stationURL;

- (void)setArtworkCollection:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationName:(id)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStationURL:(id)arg1;

@end
