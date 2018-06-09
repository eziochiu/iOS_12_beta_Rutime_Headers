/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageAnalyzerCompoundRequestConfiguration : NSObject {
    NSMutableDictionary * _detectorConfigurationOptions;
    NSMutableArray * _observationClasses;
    NSMutableArray * _originalRequests;
}

- (void).cxx_destruct;
- (void)addOriginalRequest:(id)arg1 withObservationClass:(Class)arg2;
- (id)detectorConfigurationOptions;
- (id)init;
- (id)observationClasses;
- (id)originalRequests;
- (bool)preferBackgroundProcessing;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
