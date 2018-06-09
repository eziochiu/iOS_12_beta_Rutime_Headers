/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface CutawayClip : MovieClip {
    int  forcedDuration;
    bool  forcedNoFadeIn;
    bool  forcedNoFadeOut;
    bool  startOffsetValidated;
}

@property (nonatomic, readonly) int animateInDuration;
@property (nonatomic, readonly) int animateOutDuration;
@property (nonatomic) int cutawayDirection;
@property (nonatomic, retain) NSString *cutawayName;
@property (nonatomic) struct CGPoint { double x1; double x2; } cutawayOffset;
@property (nonatomic) int cutawayType;
@property (nonatomic) int forcedDuration;
@property (nonatomic) bool forcedNoFadeIn;
@property (nonatomic) bool forcedNoFadeOut;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pipRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pipRectWithAspectRatio;
@property (nonatomic) bool startOffsetValidated;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) struct CGPoint { double x1; double x2; } underlayOffset;

+ (id)cutawayWithClip:(id)arg1 type:(int)arg2;

- (int)animateInDuration;
- (int)animateOutDuration;
- (double)aspectRatio;
- (int)clipType;
- (float)clipValue:(float)arg1 toMax:(float)arg2;
- (int)cutawayDirection;
- (id)cutawayName;
- (struct CGPoint { double x1; double x2; })cutawayOffset;
- (int)cutawayType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultPIPRect;
- (void)didFinishTrimming;
- (int)duration;
- (int)forcedDuration;
- (bool)forcedNoFadeIn;
- (bool)forcedNoFadeOut;
- (float)maxTranslateX;
- (float)maxTranslateY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pipRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pipRectWithAspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)scaleFactor;
- (void)setCutawayDirection:(int)arg1;
- (void)setCutawayName:(id)arg1;
- (void)setCutawayOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCutawayType:(int)arg1;
- (void)setForcedDuration:(int)arg1;
- (void)setForcedNoFadeIn:(bool)arg1;
- (void)setForcedNoFadeOut:(bool)arg1;
- (void)setPipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartOffset:(int)arg1;
- (void)setStartOffsetValidated:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setUnderlayOffset:(struct CGPoint { double x1; double x2; })arg1;
- (int)startOffset;
- (bool)startOffsetValidated;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (float)translateX;
- (float)translateY;
- (struct CGPoint { double x1; double x2; })underlayOffset;

@end
