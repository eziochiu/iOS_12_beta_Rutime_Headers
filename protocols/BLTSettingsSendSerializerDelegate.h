/* made by EzioChiu.
 */

@protocol BLTSettingsSendSerializerDelegate <BLTSendQueueSerializerDelegate>

@required

- (void)sendRequest:(void *)arg1 type:(void *)arg2 withTimeout:(void *)arg3 withDescription:(void *)arg4 onlyOneFor:(void *)arg5 didSend:(void *)arg6 andResponse:(void *)arg7; // needs 7 arg types, found 18: PBCodable *, unsigned short, NSNumber *, NSObject *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, id /* block */, void*, void, id /* block */, IDSProtobuf *, void*

@end
