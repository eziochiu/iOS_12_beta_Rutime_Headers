/* made by EzioChiu.
 */

@protocol SVVideoLoadingProgressObserving <NSObject>

@required

- (void)onProgressChanged:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoLoadingProgressObserving> *, void*
- (double)progress;
- (id /* block */)progressChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoLoadingProgressObserving> *, void*, id, SEL

@end
