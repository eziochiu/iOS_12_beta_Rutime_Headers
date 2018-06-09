/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBurstAnalysisResultsRequest : VNRequest {
    bool  _includeAllImageIdentifiers;
    bool  _includeAllImageStats;
    bool  _includeClusters;
}

@property (nonatomic) bool includeAllImageIdentifiers;
@property (nonatomic) bool includeAllImageStats;
@property (nonatomic) bool includeClusters;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)includeAllImageIdentifiers;
- (bool)includeAllImageStats;
- (bool)includeClusters;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setIncludeAllImageIdentifiers:(bool)arg1;
- (void)setIncludeAllImageStats:(bool)arg1;
- (void)setIncludeClusters:(bool)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
