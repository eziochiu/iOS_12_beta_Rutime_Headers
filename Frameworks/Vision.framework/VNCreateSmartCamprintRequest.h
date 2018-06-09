/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest {
    bool  _returnAllResults;
}

@property (nonatomic) bool returnAllResults;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (bool)returnAllResults;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setReturnAllResults:(bool)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
