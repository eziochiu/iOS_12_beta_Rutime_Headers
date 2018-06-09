/* made by EzioChiu.
 */

@protocol SVPlayerStatusObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVPlayerStatusObserving> *, void*, id, SEL
- (NSError *)error;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVPlayerStatusObserving> *, void*
- (long long)status;

@end
