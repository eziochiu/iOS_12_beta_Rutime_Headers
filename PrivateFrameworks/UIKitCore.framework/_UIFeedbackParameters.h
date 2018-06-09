/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackParameters : NSObject <NSCopying> {
    float  _attackTime;
    float  _decayTime;
    _UIFeedback * _feedback;
    _UIFeedbackParameters * _parentParameters;
    float  _rate;
    float  _releaseTime;
    float  _transposition;
    float  _volume;
}

@property (nonatomic) float attackTime;
@property (getter=_isAudio, nonatomic, readonly) bool audio;
@property (nonatomic) float decayTime;
@property (getter=_effectiveVolume, nonatomic, readonly) float effectiveVolume;
@property (nonatomic) _UIFeedback *feedback;
@property (nonatomic) _UIFeedbackParameters *parentParameters;
@property (nonatomic) float rate;
@property (nonatomic) float releaseTime;
@property (nonatomic) float transposition;
@property (nonatomic) float volume;

+ (id)parameters;

- (void).cxx_destruct;
- (float)_effectiveValueForParameterWithKey:(id)arg1;
- (float)_effectiveVolume;
- (bool)_isAudio;
- (void)_updateParameterWithKey:(id)arg1;
- (float)attackTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)decayTime;
- (id)dictionaryRepresentation;
- (id)feedback;
- (id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2;
- (id)initWithFeedback:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parentParameters;
- (float)rate;
- (float)releaseTime;
- (void)setAttackTime:(float)arg1;
- (void)setDecayTime:(float)arg1;
- (void)setFeedback:(id)arg1;
- (void)setParentParameters:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setReleaseTime:(float)arg1;
- (void)setTransposition:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)transposition;
- (float)volume;

@end
