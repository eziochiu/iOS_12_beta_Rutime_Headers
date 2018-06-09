/* made by EzioChiu.
 */

@protocol BWInferenceFormatProvider <NSObject>

@required

- (BWFormat *)inputFormatForAttachedMediaKey:(NSString *)arg1;
- (BWVideoFormat *)inputVideoFormatForAttachedMediaKey:(NSString *)arg1;
- (BWFormat *)outputFormatForAttachedMediaKey:(NSString *)arg1;
- (BWVideoFormat *)outputVideoFormatForAttachedMediaKey:(NSString *)arg1;

@end
