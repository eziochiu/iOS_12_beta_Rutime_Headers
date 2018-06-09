/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVFaceMerger : NSObject {
    PVContext * _context;
    <PVVisionIntegrating> * _visionIntegration;
}

- (void).cxx_destruct;
- (bool)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2;
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id*)arg3;
- (void)_configureRequest:(id)arg1;
- (id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2;
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;

@end
