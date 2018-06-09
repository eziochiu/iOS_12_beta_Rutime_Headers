/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageAnalyzerCompoundRequestConfigurations : NSObject {
    NSMutableDictionary * _regionOfInterestConfigurations;
}

- (void).cxx_destruct;
- (id)allConfigurations;
- (id)configurationForRequest:(id)arg1 withObservationClass:(Class)arg2;
- (unsigned long long)count;
- (id)init;
- (bool)preferBackgroundProcessing;

@end
