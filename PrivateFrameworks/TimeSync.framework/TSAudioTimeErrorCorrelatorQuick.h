/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator {
    float * _channelABuffer;
    float * _correlationBuffer;
    float * _interpollationIndiciesBuffer;
    float * _scratchBuffer;
}

- (void)_makeBlock;
- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end
