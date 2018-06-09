/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTDSSeeker : NSObject {
    int  _dataLinkType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _endpointFoundHandler;
    id /* block */  _endpointLostHandler;
    struct NSMutableSet { Class x1; } * _endpoints;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSString * _label;
    bool  _passive;
    NSString * _serviceType;
    unsigned long long  _tdsHashSeek;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) int dataLinkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ endpointFoundHandler;
@property (nonatomic, copy) id /* block */ endpointLostHandler;
@property (nonatomic, retain) NSMutableSet *endpoints;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool passive;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic) unsigned long long tdsHashSeek;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)dataLinkType;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)endpointFoundHandler;
- (id /* block */)endpointLostHandler;
- (struct NSMutableSet { Class x1; }*)endpoints;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (bool)passive;
- (id)serviceType;
- (void)setDataLinkType:(int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointFoundHandler:(id /* block */)arg1;
- (void)setEndpointLostHandler:(id /* block */)arg1;
- (void)setEndpoints:(struct NSMutableSet { Class x1; }*)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPassive:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTdsHashSeek:(unsigned long long)arg1;
- (unsigned long long)tdsHashSeek;
- (void)updateEndpointsForDevices:(struct NSMutableDictionary { Class x1; }*)arg1;

@end
