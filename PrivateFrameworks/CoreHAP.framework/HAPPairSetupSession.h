/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate> {
    HMFTimer * _backoffTimer;
    NSData * _certificate;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HAPPairSetupSessionDelegate> * _delegate;
    unsigned long long  _pairSetupType;
    struct PairingSessionPrivate { } * _pairingSession;
    long long  _role;
    NSData * _sessionReadKey;
    NSMutableData * _sessionReadNonce;
    NSData * _sessionWriteKey;
    NSMutableData * _sessionWriteNonce;
    unsigned long long  _state;
}

@property (nonatomic, retain) HMFTimer *backoffTimer;
@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPPairSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long pairSetupType;
@property (nonatomic, readonly) struct PairingSessionPrivate { }*pairingSession;
@property (nonatomic, readonly) long long role;
@property (nonatomic, retain) NSData *sessionReadKey;
@property (nonatomic, retain) NSMutableData *sessionReadNonce;
@property (nonatomic, retain) NSData *sessionWriteKey;
@property (nonatomic, retain) NSMutableData *sessionWriteNonce;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)isValidSetupCode:(id)arg1;

- (void).cxx_destruct;
- (void)_handleBackoffExpiration;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1;
- (void)_handlePairSetupExchangeComplete;
- (bool)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_invalidate;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (id)backoffTimer;
- (id)certificate;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (void)generateSessionKeys;
- (id)getCertificate;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (bool)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id*)arg2;
- (void)handleSetupCodeRequest;
- (id)init;
- (id)initWithRole:(long long)arg1 pairSetupType:(unsigned long long)arg2 delegate:(id)arg3;
- (bool)isSecureSession;
- (unsigned long long)pairSetupType;
- (struct PairingSessionPrivate { }*)pairingSession;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (long long)role;
- (id)sessionReadKey;
- (id)sessionReadNonce;
- (id)sessionWriteKey;
- (id)sessionWriteNonce;
- (void)setBackoffTimer:(id)arg1;
- (void)setCertificate:(id)arg1;
- (void)setPairSetupType:(unsigned long long)arg1;
- (void)setSessionReadKey:(id)arg1;
- (void)setSessionReadNonce:(id)arg1;
- (void)setSessionWriteKey:(id)arg1;
- (void)setSessionWriteNonce:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)shortDescription;
- (void)start;
- (unsigned long long)state;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
