/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

@interface RPUICloudServer : NSObject {
    RPCloudServer * _cloudServer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _serviceIdentifier;
    id /* block */  _sessionAcceptHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) id /* block */ sessionAcceptHandler;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceIdentifier;
- (id /* block */)sessionAcceptHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSessionAcceptHandler:(id /* block */)arg1;

@end
