/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteConnectionTrustDecision : NSObject {
    id  _trust;
    CATRemoteConnection * mConnection;
    bool  mHasResponded;
}

@property (readonly) id trust;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 trust:(struct __SecTrust { }*)arg2;
- (void)respondWithDecisionToAllowUntrustedConnection:(bool)arg1;
- (id)trust;

@end
