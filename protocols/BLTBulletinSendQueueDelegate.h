/* made by EzioChiu.
 */

@protocol BLTBulletinSendQueueDelegate <BLTSendQueueSerializerDelegate>

@required

- (void)sendRequest:(void *)arg1 type:(void *)arg2 withTimeout:(void *)arg3 didSend:(void *)arg4 didQueue:(void *)arg5; // needs 5 arg types, found 15: PBCodable *, unsigned short, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, id /* block */, void*, void, id /* block */, void*

@end
