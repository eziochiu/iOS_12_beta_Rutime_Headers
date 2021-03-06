/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceTracker : VNTracker

+ (id)faceClassifierBoostedPixelDifference;
+ (Class)trackerObservationClass;

- (id)_convertDetectedObjectObservationsToFaceObservations:(id)arg1 error:(id*)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id*)arg3;
- (id)_runBBoxAlignmentOnTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id*)arg3;
- (id)_runFaceClassifierOnBBoxAlignmentResults:(id)arg1 trackingResults:(id)arg2 bBoxAlignmentResults:(id)arg3 error:(id*)arg4;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
