/* made by EzioChiu.
 */

@protocol ARResultData <ARData>

@optional

- (NSArray *)anchorsForCameraWithTransform:(void *)arg1 referenceOriginTransform:(void *)arg2 existingAnchors:(void *)arg3 anchorsToRemove:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, NSArray *, NSMutableArray *
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
- (double)timestamp;
- (struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; })trackingState;
- (unsigned long long)worldAlignmentModifiers;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldAlignmentTransform;

@end
