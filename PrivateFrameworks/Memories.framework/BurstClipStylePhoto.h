/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstClipStylePhoto : BurstClipStyle {
    int  _transitionFrameDuration;
    NSString * _transitionName;
}

@property (nonatomic) int transitionFrameDuration;
@property (nonatomic, copy) NSString *transitionName;

- (void).cxx_destruct;
- (unsigned long long)_idealNumberOfContainedClips;
- (unsigned long long)_maximumNumberOfContainedClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)containedClipsWithoutTransitions;
- (double)idealContainedClipDuration;
- (double)idealDuration;
- (bool)isSupported;
- (double)maximumContainedClipDuration;
- (double)maximumDuration;
- (double)minimumContainedClipDuration;
- (double)minimumDuration;
- (unsigned long long)numberOfAvailableClips;
- (void)setTransitionFrameDuration:(int)arg1;
- (void)setTransitionName:(id)arg1;
- (int)transitionFrameDuration;
- (id)transitionName;

@end
