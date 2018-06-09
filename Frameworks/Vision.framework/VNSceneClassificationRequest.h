/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding> {
    VNSceneClassificationCustomHierarchy * _customHierarchy;
    unsigned long long  _maximumHierarchicalObservations;
    unsigned long long  _maximumLeafObservations;
    VNSceneObservation * _sceneObservation;
}

@property (nonatomic, readonly, copy) VNSceneClassificationCustomHierarchy *customHierarchy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic, readonly, retain) VNSceneObservation *sceneObservation;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;

+ (id)_knownVNImageAnalyzerMultiDetectorLabelsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatability;
+ (id)knownSceneClassifications;
+ (id)knownSceneClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)customHierarchy;
- (bool)defineCustomHierarchy:(id)arg1 error:(id*)arg2;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithSceneObservation:(id)arg1;
- (id)initWithSceneObservation:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumHierarchicalObservations;
- (unsigned long long)maximumLeafObservations;
- (id)observationsCacheKey;
- (id /* block */)resultsSortingComparator;
- (id)sceneObservation;
- (void)setMaximumHierarchicalObservations:(unsigned long long)arg1;
- (void)setMaximumLeafObservations:(unsigned long long)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (void)setSceneObservation:(id)arg1;
- (id)supportedImageSizeSet;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
