/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray * _finishWritingOperations;
    NSOperation * _transitionToTerminalStatusOperation;
}

@property (nonatomic, readonly) NSOperation *transitionToTerminalStatusOperation;

- (void)_finishWritingOperationsDidFinish;
- (void)cancelWriting;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2;
- (long long)status;
- (id)transitionToTerminalStatusOperation;

@end