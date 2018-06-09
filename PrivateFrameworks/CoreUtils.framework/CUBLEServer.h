/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBLEServer : NSObject <CBPeripheralManagerDelegate> {
    id /* block */  _activateCompletion;
    id /* block */  _connectionEndedHandler;
    id /* block */  _connectionStartedHandler;
    struct NSMutableSet { Class x1; } * _connections;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned short  _listenPSM;
    unsigned short  _listeningPSM;
    CBPeripheralManager * _peripheralManager;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ connectionEndedHandler;
@property (nonatomic, copy) id /* block */ connectionStartedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned short listenPSM;
@property (nonatomic) unsigned short listeningPSM;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleConnectionInvalidated:(id)arg1;
- (void)_invalidate;
- (void)_startIfNeeded;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)connectionEndedHandler;
- (id /* block */)connectionStartedHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned short)listenPSM;
- (unsigned short)listeningPSM;
- (void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)setConnectionEndedHandler:(id /* block */)arg1;
- (void)setConnectionStartedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setListenPSM:(unsigned short)arg1;
- (void)setListeningPSM:(unsigned short)arg1;

@end
