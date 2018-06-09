/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisClip : CompoundClip <CompoundClipInformation, KonaClipMiroAutoEditAdditions, NSCopying> {
    NSArray * _containedClips;
    IrisMovieClip * _introClip;
    IrisClipStyle * _irisClipStyle;
    unsigned long long  _irisStyle;
    IrisMovieClip * _outroClip;
}

@property (nonatomic, retain) NSArray *containedClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic, retain) IrisMovieClip *introClip;
@property (nonatomic, readonly) bool introClipAvailable;
@property (nonatomic, retain) IrisClipStyle *irisClipStyle;
@property (nonatomic) unsigned long long irisStyle;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) double minimumDuration;
@property (nonatomic, retain) IrisMovieClip *outroClip;
@property (nonatomic, readonly) bool outroClipAvailable;
@property (readonly) Class superclass;

+ (id)allowedTransitions;

- (void).cxx_destruct;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (id)containedClips;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)idealDuration;
- (id)introClip;
- (bool)introClipAvailable;
- (id)irisClipStyle;
- (unsigned long long)irisStyle;
- (bool)isIris;
- (int)maxDuration;
- (double)maximumDuration;
- (double)minimumDuration;
- (id)outroClip;
- (bool)outroClipAvailable;
- (id)plistRepresentationFromProject:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredOutTransitionDurationRange;
- (void)setAltClip:(id)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setContainedClips:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setIdealPhotoDuration:(double)arg1;
- (void)setIntroClip:(id)arg1;
- (void)setIrisClipStyle:(id)arg1;
- (void)setIrisStyle:(unsigned long long)arg1;
- (void)setMaximumPhotoDuration:(double)arg1;
- (void)setMinimumPhotoDuration:(double)arg1;
- (void)setOutroClip:(id)arg1;

@end
