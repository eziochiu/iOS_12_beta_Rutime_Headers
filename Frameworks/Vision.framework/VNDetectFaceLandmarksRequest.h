/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting> {
    NSNumber * _cascadeStepCount;
    bool  _performBlinkDetection;
    bool  _refineLeftEyeRegion;
    bool  _refineMouthRegion;
    bool  _refineRightEyeRegion;
}

@property (nonatomic, retain) NSNumber *cascadeStepCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) bool performBlinkDetection;
@property (nonatomic) bool refineLeftEyeRegion;
@property (nonatomic) bool refineMouthRegion;
@property (nonatomic) bool refineRightEyeRegion;
@property (readonly) Class superclass;

+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatability;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)cascadeStepCount;
- (long long)dependencyProcessingOrdinality;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (bool)performBlinkDetection;
- (bool)refineLeftEyeRegion;
- (bool)refineMouthRegion;
- (bool)refineRightEyeRegion;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setCascadeStepCount:(id)arg1;
- (void)setPerformBlinkDetection:(bool)arg1;
- (void)setRefineLeftEyeRegion:(bool)arg1;
- (void)setRefineMouthRegion:(bool)arg1;
- (void)setRefineRightEyeRegion:(bool)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
