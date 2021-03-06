/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateImageprintRequest : VNImageBasedRequest {
    NSNumber * _timeStamp;
}

@property (nonatomic, retain) NSNumber *timeStamp;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
