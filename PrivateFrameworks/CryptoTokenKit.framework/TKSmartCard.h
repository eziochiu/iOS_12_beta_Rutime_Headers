/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCard : NSObject {
    unsigned long long  _allowedProtocols;
    NSObject<OS_dispatch_queue> * _beginSessionQueue;
    unsigned char  _cla;
    NSMutableDictionary * _contexts;
    unsigned long long  _currentProtocol;
    NSNumber * _reservationId;
    bool  _sensitive;
    bool  _sensitiveRequired;
    id  _session;
    long long  _sessionCounter;
    long long  _sessionEndPolicy;
    TKSmartCardSlot * _slot;
    bool  _someoneWantsSession;
    bool  _synchronous;
    bool  _useCommandChaining;
    bool  _useExtendedLength;
    bool  _valid;
}

@property unsigned long long allowedProtocols;
@property (retain) id context;
@property unsigned long long currentProtocol;
@property bool sensitive;
@property (nonatomic, readonly) TKSmartCardSlot *slot;
@property bool valid;

+ (id)_localizedString:(id)arg1;
+ (bool)decodeResponse:(id)arg1 sw:(unsigned short*)arg2 appendTo:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (unsigned long long)allowedProtocols;
- (bool)beginSessionWithError:(id*)arg1;
- (void)beginSessionWithReply:(id /* block */)arg1;
- (id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(bool)arg8 extended:(bool*)arg9 realLe:(unsigned long long*)arg10;
- (bool)checkAPDUResponse:(id)arg1 error:(id*)arg2;
- (unsigned char)cla;
- (id)context;
- (id)contextForKey:(id)arg1;
- (unsigned long long)currentProtocol;
- (void)dealloc;
- (void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3;
- (void)endSession;
- (void)endSessionWithReply:(id /* block */)arg1;
- (void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(bool)arg4 error:(id)arg5 reply:(id /* block */)arg6;
- (bool)inSessionWithError:(id*)arg1 executeBlock:(id /* block */)arg2;
- (id)initWithSlot:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)querySessionWithReply:(id /* block */)arg1;
- (void)releaseSessionWithReply:(id /* block */)arg1;
- (id)remoteSessionWithErrorHandler:(id /* block */)arg1;
- (void)reserveExclusive:(bool)arg1 reply:(id /* block */)arg2;
- (bool)revalidate;
- (bool)selectApplication:(id)arg1 error:(id*)arg2;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(id /* block */)arg6;
- (id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short*)arg6 error:(id*)arg7;
- (bool)sensitive;
- (long long)sessionEndPolicy;
- (void)sessionRequested;
- (void)setAllowedProtocols:(unsigned long long)arg1;
- (void)setCla:(unsigned char)arg1;
- (void)setContext:(id)arg1;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (void)setCurrentProtocol:(unsigned long long)arg1;
- (void)setSensitive:(bool)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setUseCommandChaining:(bool)arg1;
- (void)setUseExtendedLength:(bool)arg1;
- (void)setValid:(bool)arg1;
- (id)slot;
- (bool)synchronous;
- (void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(bool)arg7 isCase4:(bool)arg8 reply:(id /* block */)arg9;
- (void)transmitRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)unreserve;
- (bool)useCommandChaining;
- (bool)useExtendedLength;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3;
- (bool)valid;

@end
