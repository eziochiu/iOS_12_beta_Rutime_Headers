/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport> {
    id /* block */  _refreshHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ refreshHandler;
@property (readonly) Class superclass;

+ (id)messageWithName:(id)arg1 identifier:(id)arg2 target:(id)arg3 payload:(id)arg4 responseHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)initWithRefreshHandler:(id /* block */)arg1;
- (id /* block */)refreshHandler;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setRefreshHandler:(id /* block */)arg1;

@end
