/* made by EzioChiu.
 */

@protocol TKProtocolTokenWatcher

@required

- (void)insertedToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removedToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
