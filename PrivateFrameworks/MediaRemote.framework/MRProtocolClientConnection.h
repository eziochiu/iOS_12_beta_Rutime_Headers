/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolClientConnection : NSObject <MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate, MSVMessageParserDelegate, NSStreamDelegate> {
    <MRProtocolClientConnectionDelegate> * _delegate;
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    bool  _disconnected;
    unsigned long long  _firstClientNanoseconds;
    unsigned long long  _firstDeviceTicks;
    NSInputStream * _inputStream;
    MRProtocolMessageQueue * _messageQueue;
    NSOutputStream * _outputStream;
    MSVMessageParser * _parser;
    NSRunLoop * _runLoop;
    MRSupportedProtocolMessages * _supportedMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRProtocolClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) bool streamsAreValid;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRSupportedProtocolMessages *supportedMessages;

- (void).cxx_destruct;
- (void)_adjustTimestamp:(id)arg1;
- (bool)_clientSupportsMessage:(id)arg1;
- (void)_closeStream:(id)arg1;
- (void)_disconnectClient;
- (void)_flush;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_openStream:(id)arg1;
- (void)_parseMessageData:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)closeAllStreams;
- (void)dealloc;
- (id)decryptData:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)deviceInfo;
- (id)encryptDataForMessage:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (id)inputStream;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;
- (void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (id)outputStream;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setSupportedMessages:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (bool)streamsAreValid;
- (id)supportedMessages;

@end
