/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBLEConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable> {
    id /* block */  _activateCompletion;
    CBCentralManager * _centralManager;
    unsigned short  _destinationPSM;
    NSUUID * _destinationUUID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _guardConnected;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    CBL2CAPChannel * _l2capChannel;
    NSString * _label;
    CBPeripheral * _peripheral;
    CUReadRequest * _readRequestCurrent;
    struct NSMutableArray { Class x1; } * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    unsigned char  _readSuspended;
    id /* block */  _serverInvalidationHandler;
    int  _socketFD;
    int  _state;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWriteRequest * _writeRequestCurrent;
    struct NSMutableArray { Class x1; } * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSuspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short destinationPSM;
@property (nonatomic, copy) NSUUID *destinationUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) CBL2CAPChannel *l2capChannel;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ serverInvalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (bool)_processReadStatus;
- (void)_processReads:(bool)arg1;
- (void)_processWrites;
- (void)_reportError:(id)arg1;
- (void)_run;
- (bool)_runConnectStart;
- (bool)_runSetupChannel;
- (bool)_setupIOAndReturnError:(id*)arg1;
- (bool)_startConnectingAndReturnError:(id*)arg1;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (unsigned short)destinationPSM;
- (id)destinationUUID;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)l2capChannel;
- (id)label;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)readWithRequest:(id)arg1;
- (id /* block */)serverInvalidationHandler;
- (void)setDestinationPSM:(unsigned short)arg1;
- (void)setDestinationUUID:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setL2capChannel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setServerInvalidationHandler:(id /* block */)arg1;
- (void)writeEndOfDataWithCompletion:(id /* block */)arg1;
- (void)writeWithRequest:(id)arg1;

@end
