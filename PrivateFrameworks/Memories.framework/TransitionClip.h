/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface TransitionClip : KonaClip {
    bool  _forcedNoOverlap;
    NSDictionary * _transitionEffectSettings;
}

@property (nonatomic) int audioEnabledType;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } effectRange;
@property (nonatomic) float effectRangeBias;
@property (nonatomic) bool forcedNoOverlap;
@property (nonatomic, readonly) int overlapType;
@property (nonatomic) int transitionDirection;
@property (nonatomic, copy) NSDictionary *transitionEffectSettings;
@property (nonatomic, retain) NSString *transitionName;
@property (nonatomic) int type;

+ (int)overlapTypeForName:(id)arg1;

- (void).cxx_destruct;
- (bool)audioEnabled;
- (int)audioEnabledType;
- (int)biasedDuration;
- (int)biasedStartOffset;
- (int)clipType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })effectRange;
- (float)effectRangeBias;
- (bool)forcedNoOverlap;
- (bool)overlapIsCurrentlyForced;
- (int)overlapType;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setAudioEnabledType:(int)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setEffectRangeBias:(float)arg1;
- (void)setForcedNoOverlap:(bool)arg1;
- (void)setTransitionDirection:(int)arg1;
- (void)setTransitionEatLeft:(int)arg1;
- (void)setTransitionEatRight:(int)arg1;
- (void)setTransitionEffectSettings:(id)arg1;
- (void)setTransitionName:(id)arg1;
- (void)setType:(int)arg1;
- (int)transitionDirection;
- (int)transitionEatLeft;
- (int)transitionEatRight;
- (id)transitionEffectSettings;
- (id)transitionIDFromName:(id)arg1;
- (id)transitionName;
- (int)type;

@end
