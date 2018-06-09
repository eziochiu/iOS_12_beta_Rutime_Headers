/* made by EzioChiu.
 */

@protocol PFBlockControlCommon <NSObject>

@required

- (bool)blockHasFinished;
- (bool)blockHasStarted;
- (bool)blockWasCanceled;
- (void)notifyOnQueue:(void *)arg1 whenFinished:(void *)arg2; // needs 2 arg types, found 6: PFDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)waitForBlock;

@end
