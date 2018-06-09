/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryFlowContext : NSObject {
    CDPContext * _context;
    bool  _hasPeersForRemoteApproval;
}

@property (nonatomic, retain) CDPContext *context;
@property (nonatomic) bool hasPeersForRemoteApproval;

- (void).cxx_destruct;
- (id)context;
- (bool)hasPeersForRemoteApproval;
- (void)setContext:(id)arg1;
- (void)setHasPeersForRemoteApproval:(bool)arg1;

@end
