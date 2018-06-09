/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNANPublisher : NSObject {
    id /* block */  _activateCompletion;
    bool  _dataPathEnabled;
    id /* block */  _dataSessionEndedHandler;
    id /* block */  _dataSessionStartedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _name;
    int  _port;
    CUNANServiceInfo * _serviceInfo;
    NSString * _serviceType;
    struct NSMutableDictionary { Class x1; } * _sessions;
    NSDictionary * _textInfo;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) bool dataPathEnabled;
@property (nonatomic, copy) id /* block */ dataSessionEndedHandler;
@property (nonatomic, copy) id /* block */ dataSessionStartedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int port;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSDictionary *textInfo;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (bool)dataPathEnabled;
- (id /* block */)dataSessionEndedHandler;
- (id /* block */)dataSessionStartedHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)name;
- (int)port;
- (id)serviceType;
- (void)setDataPathEnabled:(bool)arg1;
- (void)setDataSessionEndedHandler:(id /* block */)arg1;
- (void)setDataSessionStartedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTextInfo:(id)arg1;
- (id)textInfo;

@end
