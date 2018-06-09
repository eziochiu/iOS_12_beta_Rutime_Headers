/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface _GKBubbleFlowPathTransitionInfo : NSObject {
    NSDictionary * _auxiliaryInfo;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _bubbleEndPositionsByType;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _bubbleStartPositionsByType;
    GKBubbleSet * _bubbles;
    bool  _couldUseFallbackAnimator;
    double  _duration;
    UIView * _effectiveView;
    long long  _focusBubbleType;
    long long  _newlyVisibleBubbles;
    double  _startTime;
}

@property (nonatomic, retain) NSDictionary *auxiliaryInfo;
@property (nonatomic) GKBubbleSet *bubbles;
@property (nonatomic) bool couldUseFallbackAnimator;
@property (nonatomic) double duration;
@property (nonatomic) UIView *effectiveView;
@property (nonatomic) long long focusBubbleType;
@property (nonatomic) long long newlyVisibleBubbles;
@property (nonatomic) double startTime;

- (id)auxiliaryInfo;
- (id)bubbles;
- (bool)couldUseFallbackAnimator;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)effectiveView;
- (long long)focusBubbleType;
- (id)init;
- (long long)newlyVisibleBubbles;
- (void)setAuxiliaryInfo:(id)arg1;
- (void)setBubbles:(id)arg1;
- (void)setCouldUseFallbackAnimator:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEffectiveView:(id)arg1;
- (void)setFocusBubbleType:(long long)arg1;
- (void)setNewlyVisibleBubbles:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
