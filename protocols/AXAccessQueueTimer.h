/* made by EzioChiu.
 */

@protocol AXAccessQueueTimer <NSObject>

@required

- (void)afterDelay:(void *)arg1 processBlock:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cancel;
- (bool)isActive;
- (bool)isPending;

@end
