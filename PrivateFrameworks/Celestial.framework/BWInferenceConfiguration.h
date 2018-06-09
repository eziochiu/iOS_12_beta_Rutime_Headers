/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceConfiguration : NSObject {
    int  _inferenceType;
    float  _maximumFramesPerSecond;
    unsigned int  _priority;
    NSDictionary * _tuningParameters;
}

@property (nonatomic, readonly) int inferenceType;
@property (nonatomic) float maximumFramesPerSecond;
@property (nonatomic) unsigned int priority;
@property (nonatomic, copy) NSDictionary *tuningParameters;

- (void)dealloc;
- (int)inferenceType;
- (id)init;
- (id)initWithInferenceType:(int)arg1;
- (float)maximumFramesPerSecond;
- (unsigned int)priority;
- (void)setMaximumFramesPerSecond:(float)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setTuningParameters:(id)arg1;
- (id)tuningParameters;

@end
