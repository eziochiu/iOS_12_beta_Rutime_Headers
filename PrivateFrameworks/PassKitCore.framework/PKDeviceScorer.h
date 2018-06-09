/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceScorer : NSObject {
    PKDSPContext * _context;
    double  _deviceScoreTimeout;
    NSData * _lastDeviceScore;
    NSData * _lastDeviceScoreIdentifier;
    CdQwUTvJnDEPQgR8 * _scorer;
}

@property (nonatomic, readonly, copy) PKDSPContext *context;
@property (nonatomic) double deviceScoreTimeout;

+ (bool)deviceScoringSupported;

- (void).cxx_destruct;
- (id)_createScorer;
- (void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(id /* block */)arg4;
- (id)context;
- (double)deviceScoreTimeout;
- (void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)setDeviceScoreTimeout:(double)arg1;

@end
