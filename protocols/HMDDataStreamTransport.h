/* made by EzioChiu.
 */

@protocol HMDDataStreamTransport <NSObject>

@required

- (void)close;
- (void)connect;
- (void)sendRawFrame:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
