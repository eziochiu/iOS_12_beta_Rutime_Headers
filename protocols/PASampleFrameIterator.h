/* made by EzioChiu.
 */

@protocol PASampleFrameIterator <NSObject>

@required

- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (void)iterateFrames:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PASampleFrame *, void*

@end
