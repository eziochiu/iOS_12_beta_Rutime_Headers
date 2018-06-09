/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTDSProvider : NSObject {
    int  _dataLinkType;
    bool  _directedOnly;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _serviceType;
    unsigned int  _state;
    id /* block */  _stateChangedHandler;
    unsigned long long  _tdsHashActivate;
    unsigned long long  _tdsHashProvide;
    unsigned long long  _tdsHashSeek;
    bool  _triggered;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) int dataLinkType;
@property (nonatomic) bool directedOnly;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic) unsigned int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (nonatomic) unsigned long long tdsHashActivate;
@property (nonatomic) unsigned long long tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek;
@property (nonatomic) bool triggered;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)dataLinkType;
- (void)dealloc;
- (bool)directedOnly;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceType;
- (void)setDataLinkType:(int)arg1;
- (void)setDirectedOnly:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (void)setTdsHashActivate:(unsigned long long)arg1;
- (void)setTdsHashProvide:(unsigned long long)arg1;
- (void)setTdsHashSeek:(unsigned long long)arg1;
- (void)setTriggered:(bool)arg1;
- (unsigned int)state;
- (id /* block */)stateChangedHandler;
- (unsigned long long)tdsHashActivate;
- (unsigned long long)tdsHashProvide;
- (unsigned long long)tdsHashSeek;
- (bool)triggered;
- (void)updateDeviceActivateHash:(const char *)arg1;
- (bool)updateForDevices:(struct NSMutableDictionary { Class x1; }*)arg1;

@end
