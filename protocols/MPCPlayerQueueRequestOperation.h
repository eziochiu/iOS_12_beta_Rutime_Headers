/* made by EzioChiu.
 */

@protocol MPCPlayerQueueRequestOperation <NSObject>

@required

- (MPCPlayerQueueRequest *)request;
- (id /* block */)responseHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, MPCPlayerQueueResponse *, NSError *, void*, id, SEL
- (void)setRequest:(MPCPlayerQueueRequest *)arg1;
- (void)setResponseHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCPlayerQueueResponse *, NSError *, void*

@end
