/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexSongProxy : NSObject <FlexSongProtocol> {
    NSString * _artistName;
    NSArray * _assets;
    NSString * _audioEncoderPresetName;
    UIImage * _cachedArtwork;
    bool  _hidden;
    NSSet * _keywords;
    long long  _metadataVersion;
    bool  _recalled;
    NSString * _songName;
    NSSet * _tagIDs;
    NSString * _uid;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) UIImage *artwork;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSString *audioEncoderPresetName;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) long long metadataVersion;
@property (nonatomic, readonly) bool recalled;
@property (nonatomic, readonly) NSString *songName;
@property (nonatomic, readonly) NSSet *tagIDs;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (id)_loadArtworkImage;
- (id)artistName;
- (id)artwork;
- (id)assetWithID:(id)arg1;
- (id)assets;
- (id)audioEncoderPresetName;
- (bool)canPlay;
- (id)customOptions;
- (bool)hidden;
- (id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(bool)arg6 recalled:(bool)arg7 assets:(id)arg8 audioEncoderPresetName:(id)arg9 metadataVersion:(long long)arg10;
- (id)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 usePreRenderedFades:(bool)arg3 testingContext:(id)arg4;
- (long long)sampleRate;
- (id)songName;
- (id)tagIDs;
- (id)uid;
- (void)updateAssets:(id)arg1;

@end
