/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateFaceRegionMapRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (readonly) Class superclass;

+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatability;

- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
