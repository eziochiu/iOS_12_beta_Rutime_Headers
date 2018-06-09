/* made by EzioChiu.
 */

@protocol BWInferencePixelBufferPoolProvider <NSObject>

@required

- (BWPixelBufferPool *)liveOutputPixelBufferPoolForAttachedMediaKey:(NSString *)arg1 format:(BWVideoFormat *)arg2;
- (BWPixelBufferPool *)preparedOutputPixelBufferPoolForAttachedMediaKey:(NSString *)arg1 format:(BWVideoFormat *)arg2;

@end
