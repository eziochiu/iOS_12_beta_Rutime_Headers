/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGroupImagesByTimeAndContentRequest : VNRequest {
    float  _clusteringDistanceThreshold;
    NSArray * _inputImageprints;
}

@property (nonatomic) float clusteringDistanceThreshold;
@property (nonatomic, copy) NSArray *inputImageprints;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_inputImageprintsCacheKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (float)clusteringDistanceThreshold;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputImageprints;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setClusteringDistanceThreshold:(float)arg1;
- (void)setInputImageprints:(id)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
