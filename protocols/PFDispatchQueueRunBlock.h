/* made by EzioChiu.
 */

@protocol PFDispatchQueueRunBlock

@required

- (bool)onQueue;
- (void)runBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
