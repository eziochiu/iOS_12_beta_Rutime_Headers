/* made by EzioChiu.
 */

@protocol BLTSendQueueSerializerDelegate <NSObject>

@required

- (void)handleIDSProtobuf:(IDSProtobuf *)arg1;
- (void)sendFileURL:(void *)arg1 withTimeout:(void *)arg2 extraMetadata:(void *)arg3 responseHandlers:(void *)arg4 didSend:(void *)arg5 didQueue:(void *)arg6; // needs 6 arg types, found 16: NSURL *, NSNumber *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, id /* block */, void*, void, id /* block */, void*

@end
