/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAStackIterator : NSObject <SAFrameIterator> {
    NSArray * _stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *stack;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (void)iterateFrames:(id /* block */)arg1;
- (void)setStack:(id)arg1;
- (id)stack;

@end
