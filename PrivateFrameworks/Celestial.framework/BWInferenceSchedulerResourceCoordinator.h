/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary * _pixelBufferPoolByFormat;
    NSMutableDictionary * _requestedPoolSizeByFormat;
}

+ (void)initialize;

- (void)dealloc;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1;
- (id)init;
- (id)pixelBufferPoolForFormat:(id)arg1;
- (void)preparePixelBufferPools;
- (int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2;
- (int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2;

@end
