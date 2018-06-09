/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FMSongRendition : NSObject {
    long long  _duration;
    long long  _durationOfFullOutro;
    long long  _durationOfMusic;
    long long  _durationOfSilence;
    long long  _durationOfUsedOutro;
    NSDictionary * _options;
    NSArray * _segments;
    FlexSong * _song;
    FMTrack * _trackA;
    FMTrack * _trackB;
    bool  _usePreRenderedFades;
}

@property (nonatomic, readonly) long long duration;
@property (nonatomic, readonly) long long durationOfFullOutro;
@property (nonatomic, readonly) long long durationOfMusic;
@property (nonatomic, readonly) long long durationOfSilence;
@property (nonatomic, readonly) long long durationOfUsedOutro;
@property (readonly) NSDictionary *options;
@property (readonly) NSArray *segments;
@property (readonly) FlexSong *song;
@property (readonly) FMTrack *trackA;
@property (readonly) FMTrack *trackB;
@property (readonly) bool usePreRenderedFades;

+ (long long)_durationOfOutroForPlaylist:(id)arg1 onlyUsedDuration:(bool)arg2;
+ (id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2;

- (void).cxx_destruct;
- (void)_buildTracksFromSegments:(id)arg1 usePreRenderedFades:(bool)arg2;
- (id)avCompositionWithAudioMix:(id*)arg1 includeShortenedOutroFadeOut:(bool)arg2;
- (id)description;
- (long long)duration;
- (long long)durationOfFullOutro;
- (long long)durationOfMusic;
- (long long)durationOfSilence;
- (long long)durationOfUsedOutro;
- (id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3 usePreRenderedFades:(bool)arg4;
- (id)options;
- (id)segments;
- (id)song;
- (id)timedMetadataItemsWithIdentifier:(id)arg1;
- (id)trackA;
- (id)trackB;
- (bool)usePreRenderedFades;

@end
