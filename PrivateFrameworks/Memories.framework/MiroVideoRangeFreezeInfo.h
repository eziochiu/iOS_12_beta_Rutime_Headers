/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo {
    bool  _added;
    float  _dimmedGain;
    double  _duration;
    unsigned long long  _mute;
    float  _normalGain;
    bool  _removed;
    double  _start;
    bool  _trimmed;
    bool  _used;
    bool  _userModified;
}

@property (nonatomic) bool added;
@property (nonatomic) float dimmedGain;
@property (nonatomic) double duration;
@property (nonatomic, readonly) float gain;
@property (nonatomic) unsigned long long mute;
@property (nonatomic) float normalGain;
@property (nonatomic) bool removed;
@property (nonatomic) double start;
@property (nonatomic) bool trimmed;
@property (nonatomic) bool used;
@property (nonatomic) bool userModified;

- (bool)added;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (float)dimmedGain;
- (double)duration;
- (float)gain;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)mute;
- (float)normalGain;
- (bool)removed;
- (void)setAdded:(bool)arg1;
- (void)setDimmedGain:(float)arg1;
- (void)setDuration:(double)arg1;
- (void)setMute:(unsigned long long)arg1;
- (void)setNormalGain:(float)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setStart:(double)arg1;
- (void)setTrimmed:(bool)arg1;
- (void)setUsed:(bool)arg1;
- (void)setUserModified:(bool)arg1;
- (double)start;
- (bool)trimmed;
- (bool)used;
- (bool)userModified;

@end
