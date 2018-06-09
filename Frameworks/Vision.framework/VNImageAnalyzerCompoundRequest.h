/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageAnalyzerCompoundRequest : VNUniqueObservationClassCompoundRequest {
    NSDictionary * _detectorConfigurationOptions;
    NSString * _detectorType;
}

+ (void)_addCompoundRequestsToArray:(id)arg1 forModel:(unsigned long long)arg2 withConfigurations:(id)arg3;
+ (id)compoundRequestsForOriginalRequests:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
