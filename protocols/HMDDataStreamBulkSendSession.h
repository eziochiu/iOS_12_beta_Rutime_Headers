/* made by EzioChiu.
 */

@protocol HMDDataStreamBulkSendSession <NSObject>

@required

- (void)cancelWithReason:(unsigned char)arg1;
- (bool)hasMoreData;
- (void)read:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
