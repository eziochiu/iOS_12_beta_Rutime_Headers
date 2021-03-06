/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaybackContext : MPPlaybackContext {
    NSDictionary * _assetStoreFronts;
    NSDictionary * _endTimeModifications;
    id  _playbackRequestEnvironment;
    MPModelRequest * _request;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, copy) NSDictionary *assetStoreFronts;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, copy) id playbackRequestEnvironment;
@property (nonatomic, copy) MPModelRequest *request;
@property (nonatomic, copy) MPIdentifierSet *startItemIdentifiers;
@property (nonatomic, copy) NSDictionary *startTimeModifications;

+ (Class)queueFeederClass;
+ (id)requiredPropertiesForStaticMediaClips;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetStoreFronts;
- (id)endTimeModifications;
- (id)init;
- (id)playbackRequestEnvironment;
- (id)request;
- (void)setAssetStoreFronts:(id)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartItemIdentifiers:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (id)startItemIdentifiers;
- (id)startTimeModifications;

@end
