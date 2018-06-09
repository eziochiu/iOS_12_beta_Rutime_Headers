/* made by EzioChiu.
 */

@protocol AFAudioAnalyzerDelegate <NSObject>

@required

- (void)audioAnalyzer:(AFAudioAnalyzer *)arg1 didDetectHardEndpointAtTime:(double)arg2;
- (void)audioAnalyzer:(AFAudioAnalyzer *)arg1 didDetectStartpointAtTime:(double)arg2;

@end
