/* made by EzioChiu.
 */

@protocol SVVideoSkipLockObserving <NSObject>

@required

- (double)countdown;
- (id /* block */)countdownBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoSkipLockObserving> *, void*, id, SEL
- (bool)locked;
- (void)onCountDown:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoSkipLockObserving> *, void*
- (void)onUnlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoSkipLockObserving> *, void*
- (id /* block */)unlockBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoSkipLockObserving> *, void*, id, SEL

@end
