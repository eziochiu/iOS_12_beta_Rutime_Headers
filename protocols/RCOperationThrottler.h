/* made by EzioChiu.
 */

@protocol RCOperationThrottler

@required

- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
