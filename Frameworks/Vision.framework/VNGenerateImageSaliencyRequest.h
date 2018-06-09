/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGenerateImageSaliencyRequest : VNImageBasedRequest

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id*)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
