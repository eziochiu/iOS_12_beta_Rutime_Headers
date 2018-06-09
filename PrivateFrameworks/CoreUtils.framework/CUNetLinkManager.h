/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNetLinkManager : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _endpointChanges;
    struct NSMutableSet { Class x1; } * _endpoints;
    bool  _hasIPv4Endpoint;
    bool  _hasIPv6Endpoint;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSObject<OS_dispatch_source> * _pollTimer;
    int  _probeSocketV4;
    int  _probeSocketV6;
    NSObject<OS_dispatch_source> * _probeSourceV4;
    NSObject<OS_dispatch_source> * _probeSourceV6;
    int  _reachableSecs;
    unsigned int  _rxCount;
    unsigned int  _txCount;
    unsigned int  _txErrors;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned int  _unreachableSecs;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_monitorEnsureStarted;
- (void)_monitorEnsureStopped;
- (void)_monitorReadPacket:(int)arg1;
- (void)_monitorSendPacketToEndpoint:(id)arg1;
- (void)_monitorSetupSocket:(int)arg1;
- (void)_update;
- (void)_updateARP;
- (void)_updateEndpoint:(id)arg1 state:(int)arg2;
- (void)_updateEndpoints;
- (void)_updateNDP;
- (void)activate;
- (void)addEndpoint:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)removeEndpoint:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;

@end
