/* made by EzioChiu.
 */

@protocol AVTARFrameConsumer <NSObject>

@required

- (void)renderForARFrame:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: ARFrame *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CVBuffer { }*, void*

@end
