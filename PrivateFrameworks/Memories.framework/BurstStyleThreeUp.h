/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstStyleThreeUp : BurstClipStylePhoto {
    UIColor * _gapColor;
    UIColor * _popBackgroundColor;
}

@property (nonatomic, retain) UIColor *gapColor;
@property (nonatomic, retain) UIColor *popBackgroundColor;
@property (nonatomic) int transitionFrameDuration;

- (void).cxx_destruct;
- (unsigned long long)_idealNumberOfContainedClips;
- (unsigned long long)_maximumNumberOfContainedClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (id)gapColor;
- (double)idealContainedClipDuration;
- (double)idealDuration;
- (bool)isSupported;
- (double)maximumContainedClipDuration;
- (double)maximumDuration;
- (double)minimumContainedClipDuration;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)numberOfPossibleClips;
- (id)popBackgroundColor;
- (void)setGapColor:(id)arg1;
- (void)setPopBackgroundColor:(id)arg1;
- (id)transitionName;

@end
