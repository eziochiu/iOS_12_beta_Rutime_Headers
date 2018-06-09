/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {
    bool  mAllowsAirPlayVideo;
    bool  mAudioOnly;
    TSPData * mAudioOnlyImageData;
    int  mControlStyle;
    double  mEndTime;
    TSPData * mImportedAuxiliaryMovieData;
    unsigned long long  mLoopOption;
    TSPData * mMovieData;
    NSURL * mMovieRemoteURL;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    TSPData * mPosterImageData;
    double  mPosterTime;
    double  mStartTime;
    bool  mStreaming;
    TSDMediaStyle * mStyle;
    NSURL * mURLForMPMPC;
    bool  mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    float  mVolume;
}

@property (nonatomic) bool allowsAirPlayVideo;
@property (getter=isAudioOnly, nonatomic) bool audioOnly;
@property (nonatomic, retain) TSPData *audioOnlyImageData;
@property (nonatomic) int controlStyle;
@property (nonatomic) double endTime;
@property (nonatomic, retain) TSPData *importedAuxiliaryMovieData;
@property (nonatomic) unsigned long long loopOption;
@property (nonatomic, retain) TSPData *movieData;
@property (nonatomic, retain) NSURL *movieRemoteURL;
@property (nonatomic, retain) TSPData *posterImageData;
@property (nonatomic) double posterTime;
@property (nonatomic) double startTime;
@property (getter=isStreaming, nonatomic) bool streaming;
@property (nonatomic, retain) NSURL *urlForMPMPC;
@property (nonatomic) bool usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (nonatomic) float volume;

+ (double)defaultPosterTimeForDuration:(double)arg1;
+ (id)presetKinds;

- (void)acceptVisitor:(id)arg1;
- (bool)allowsAirPlayVideo;
- (id)animationFilters;
- (id)audioOnlyImageData;
- (bool)canChangeWrapType;
- (bool)containsProperty:(int)arg1;
- (int)controlStyle;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 stylesheet:(id)arg2;
- (void)dealloc;
- (double)doubleValueForProperty:(int)arg1;
- (Class)editorClass;
- (double)endTime;
- (float)floatValueForProperty:(int)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)importedAuxiliaryMovieData;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (int)intValueForProperty:(int)arg1;
- (bool)isAudioOnly;
- (bool)isStreaming;
- (Class)layoutClass;
- (unsigned long long)loopOption;
- (id)makeAVAsset;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)movieData;
- (id)movieRemoteURL;
- (id)objectForProperty:(int)arg1;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (id)posterImageData;
- (double)posterTime;
- (id)presetKind;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (Class)repClass;
- (void)setAllowsAirPlayVideo:(bool)arg1;
- (void)setAudioOnly:(bool)arg1;
- (void)setAudioOnlyImageData:(id)arg1;
- (void)setControlStyle:(int)arg1;
- (void)setEndTime:(double)arg1;
- (void)setImportedAuxiliaryMovieData:(id)arg1;
- (void)setLoopOption:(unsigned long long)arg1;
- (void)setMovieData:(id)arg1;
- (void)setMovieRemoteURL:(id)arg1;
- (void)setPosterImageData:(id)arg1;
- (void)setPosterTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setUrlForMPMPC:(id)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(bool)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (id)style;
- (Class)styleClass;
- (bool)supportsAttachedComments;
- (bool)supportsHyperlinks;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)urlForMPMPC;
- (bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (float)volume;

@end
