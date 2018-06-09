/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PSampleFrameKPerfIterator : NSObject <PASampleFrameIterator> {
    bool  _hideKernelFrames;
    bool  _hideUserFrames;
    PASampleKernelFrame * _kernel;
    PASampleUserFrame * _user;
    unsigned long long  continuation;
    const unsigned long long * kernelFrames;
    int  numKernelFrames;
    int  numUserFrames;
    const unsigned long long * userFrames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clear;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (bool)hasKernelStack;
- (bool)hasUserStack;
- (void)iterateFrames:(id /* block */)arg1;

@end
