/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSocket : NSObject {
    NSString * _accountIdentifier;
    bool  _allowsTrustPrompt;
    NSArray * _clientCertificates;
    NSCondition * _condition;
    struct __CFString { } * _connectionServiceType;
    bool  _disableEphemeralDiffieHellmanCiphers;
    NSInvocation * _eventHandler;
    NSString * _host;
    int  _lowThroughputCounter;
    NSString * _networkAccountIdentifier;
    int  _numTimeoutSecs;
    NSString * _protocol;
    NSString * _service;
    bool  _socketCanRead;
    bool  _socketCanWrite;
    NSString * _sourceApplicationBundleIdentifier;
    MFStream * _stream;
    bool  _usesOpportunisticSockets;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool allowsTrustPrompt;
@property (nonatomic, retain) NSArray *clientCertificates;
@property (nonatomic) bool disableEphemeralDiffieHellmanCiphers;
@property (nonatomic, readonly) bool isCellularConnection;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, copy) NSString *networkAccountIdentifier;
@property (nonatomic, readonly) NSString *remoteHostname;
@property (nonatomic, readonly) unsigned int remotePortNumber;
@property (nonatomic, readonly) NSArray *serverCertificates;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSData *sourceIPAddress;
@property (retain) MFStream *stream;
@property (nonatomic) int timeout;
@property (nonatomic) bool usesOpportunisticSockets;

- (unsigned int)_bufferedByteCount;
- (bool)_certificateIsTrustedForAccount:(id)arg1;
- (bool)_evaluateTrust:(struct __SecTrust { }*)arg1 errorPtr:(id*)arg2;
- (id)_negotiatedProtocolVersion;
- (void)_setCertificateIsTrusted:(bool)arg1 forAccount:(id)arg2;
- (bool)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id*)arg2;
- (bool)_waitForSocketOpenAndFlag:(bool*)arg1;
- (void)abort;
- (id)accountIdentifier;
- (bool)allowsTrustPrompt;
- (id)clientCertificates;
- (bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (void)dealloc;
- (bool)disableEphemeralDiffieHellmanCiphers;
- (void)enableThroughputMonitoring:(bool)arg1;
- (id)init;
- (bool)isCellularConnection;
- (bool)isReadable;
- (bool)isValid;
- (bool)isWritable;
- (id)networkAccountIdentifier;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)securityProtocol;
- (id)serverCertificates;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setDisableEphemeralDiffieHellmanCiphers:(bool)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setNetworkAccountIdentifier:(id)arg1;
- (bool)setSecurityProtocol:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setTimeout:(int)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceIPAddress;
- (id)stream;
- (int)timeout;
- (bool)usesOpportunisticSockets;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
