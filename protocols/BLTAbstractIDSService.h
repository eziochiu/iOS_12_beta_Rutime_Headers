/* made by EzioChiu.
 */

@protocol BLTAbstractIDSService <NSObject>

@required

- (void)addDelegate:(id <IDSServiceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (<BLTAbstractIDSDevice> *)defaultPairedDevice;
- (id)initWithService:(NSString *)arg1;
- (void)removeDelegate:(id <IDSServiceDelegate>)arg1;
- (bool)sendProtobuf:(IDSProtobuf *)arg1 toDestinations:(NSSet *)arg2 priority:(long long)arg3 options:(NSDictionary *)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 toDestinations:(NSSet *)arg3 priority:(long long)arg4 options:(NSDictionary *)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
