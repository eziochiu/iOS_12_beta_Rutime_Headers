/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRIDSMessageCenter : NSObject <IDSServiceDelegate> {
    <NMRIDSMessageCenterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _idsQueue;
    IDSService * _idsService;
    NSMutableDictionary * _messageHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMRIDSMessageCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(bool)arg5 skipStorage:(bool)arg6 isResponse:(bool)arg7 additionalOptions:(id)arg8 resultingMessageIdentifier:(id*)arg9 error:(id*)arg10;
- (id)delegate;
- (bool)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(bool)arg5 skipStorage:(bool)arg6 expectReply:(bool)arg7 queueOneIdentifier:(id)arg8 resultingMessageIdentifier:(id*)arg9 error:(id*)arg10;
- (bool)sendMessageWithProtobufData:(id)arg1 messageType:(unsigned short)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 bypassDuet:(bool)arg5 skipStorage:(bool)arg6 inReplyTo:(id)arg7 resultingMessageIdentifier:(id*)arg8 error:(id*)arg9;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setMessageHandlerTarget:(id)arg1 action:(SEL)arg2 forIncomingMessagesOfType:(unsigned short)arg3;
- (void)startHandlingMessages;

@end
