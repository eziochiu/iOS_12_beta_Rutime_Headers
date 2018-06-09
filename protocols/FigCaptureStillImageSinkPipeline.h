/* made by EzioChiu.
 */

@protocol FigCaptureStillImageSinkPipeline <NSObject>

@required

- (NSArray *)nodes;
- (void)prewarmLandmarkDetectorIfNecessary;
- (NSString *)sinkID;
- (BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
- (BWStillImageSampleBufferSinkNode *)stillImageSinkNode;

@end
