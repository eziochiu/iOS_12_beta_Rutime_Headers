/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBonjourBrowser : NSObject {
    bool  _activateCalled;
    bool  _activated;
    struct BonjourBrowser { } * _bonjourBrowser;
    unsigned long long  _browseFlags;
    bool  _browseFlagsChanged;
    unsigned int  _changeFlags;
    unsigned int  _controlFlags;
    id /* block */  _deviceChangedHandler;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _domain;
    NSString * _interfaceName;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSString * _serviceType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) unsigned long long browseFlags;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(id /* block */)arg1;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (void)_bonjourHandleRemoveDevice:(id)arg1;
- (int)_bonjourStart;
- (void)_interrupted;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_update;
- (void)_updateLocked;
- (void)activate;
- (unsigned long long)browseFlags;
- (unsigned int)changeFlags;
- (unsigned int)controlFlags;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (id)domain;
- (id)init;
- (id)interfaceName;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceType;
- (void)setBrowseFlags:(unsigned long long)arg1;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setControlFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)update;

@end
