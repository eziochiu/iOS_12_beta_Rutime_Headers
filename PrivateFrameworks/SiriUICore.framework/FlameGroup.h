/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface FlameGroup : NSObject {
    float  _globalAlpha;
    bool  _isAura;
    bool  _isDyingOff;
    void _stateModifiers;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _stateModifiersPtr;
    float  _stateTime;
    float  _transitionPhase;
    float * _transitionPhasePtr;
    float  _zTime;
}

@property (nonatomic) float globalAlpha;
@property (nonatomic) bool isAura;
@property (nonatomic) bool isDyingOff;
@property (nonatomic) void stateModifiers;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**stateModifiersPtr;
@property (nonatomic) float stateTime;
@property (nonatomic) float transitionPhase;
@property (nonatomic) float*transitionPhasePtr;
@property (nonatomic) float zTime;

- (id)description;
- (float)globalAlpha;
- (id)init;
- (bool)isAura;
- (bool)isDyingOff;
- (void)setGlobalAlpha:(float)arg1;
- (void)setIsAura:(bool)arg1;
- (void)setIsDyingOff:(bool)arg1;
- (void)setStateModifiers;
- (void)setStateModifiersPtr:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)setStateTime:(float)arg1;
- (void)setTransitionPhase:(float)arg1;
- (void)setTransitionPhasePtr:(float*)arg1;
- (void)setZTime:(float)arg1;
- (void)stateModifiers;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)stateModifiersPtr;
- (float)stateTime;
- (float)transitionPhase;
- (float*)transitionPhasePtr;
- (float)zTime;

@end
