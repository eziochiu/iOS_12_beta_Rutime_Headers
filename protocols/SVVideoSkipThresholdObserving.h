/* made by EzioChiu.
 */

@protocol SVVideoSkipThresholdObserving <NSObject>

@required

- (id /* block */)block:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoSkipThreshold> *, void*, id, SEL
- (bool)loading;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoSkipThreshold> *, void*
- (<SVVideoSkipThreshold> *)thresholdProvider;

@end
