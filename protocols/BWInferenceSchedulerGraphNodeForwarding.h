/* made by EzioChiu.
 */

@protocol BWInferenceSchedulerGraphNodeForwarding <BWInferenceSchedulerGraphNode>

@required

- (void)forwardInputPixelBuffersFromGlobalStorage:(BWInferenceStorage *)arg1 toInferenceStorage:(BWInferenceStorage *)arg2;

@end
