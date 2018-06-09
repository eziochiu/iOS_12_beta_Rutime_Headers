/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNANSubscriber : NSObject {
    id /* block */  _activateCompletion;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _endpointChangedHandler;
    id /* block */  _endpointFoundHandler;
    id /* block */  _endpointLostHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _serviceType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ endpointChangedHandler;
@property (nonatomic, copy) id /* block */ endpointFoundHandler;
@property (nonatomic, copy) id /* block */ endpointLostHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_lostAllEndpoints;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (id /* block */)endpointChangedHandler;
- (id /* block */)endpointFoundHandler;
- (id /* block */)endpointLostHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceType;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointChangedHandler:(id /* block */)arg1;
- (void)setEndpointFoundHandler:(id /* block */)arg1;
- (void)setEndpointLostHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
