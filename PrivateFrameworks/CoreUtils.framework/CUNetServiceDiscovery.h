/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNetServiceDiscovery : NSObject {
    bool  _activated;
    int  _awdlControl;
    unsigned char  _bleActionType;
    SFService * _bleAdvertiser;
    struct NSMutableDictionary { Class x1; } * _bleDevices;
    SFDeviceDiscovery * _bleDiscovery;
    unsigned int  _bleDiscoveryFlags;
    NSSet * _blePeerFilter;
    bool  _blePeerFilterChanged;
    NSString * _bleServiceIdentifier;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _endpointChangedHandler;
    id /* block */  _endpointFoundHandler;
    id /* block */  _endpointLostHandler;
    struct NSMutableDictionary { Class x1; } * _endpoints;
    CUBonjourBrowser * _infraBonjourBrowser;
    unsigned int  _infraBonjourBrowserID;
    struct NSMutableDictionary { Class x1; } * _infraBonjourDevices;
    int  _infraControl;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _nanControl;
    struct NSMutableDictionary { Class x1; } * _nanEndpoints;
    CUNANSubscriber * _nanSubscriber;
    unsigned int  _nanSubscriberID;
    NSString * _serviceType;
    bool  _serviceTypeChanged;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    bool  _updatePending;
}

@property (nonatomic) int awdlControl;
@property (nonatomic) unsigned int bleDiscoveryFlags;
@property (nonatomic, copy) NSSet *blePeerFilter;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ endpointChangedHandler;
@property (nonatomic, copy) id /* block */ endpointFoundHandler;
@property (nonatomic, copy) id /* block */ endpointLostHandler;
@property (nonatomic) int infraControl;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int nanControl;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(id /* block */)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_bleScannerEnsureStarted;
- (void)_bleScannerEnsureStopped;
- (void)_bleTriggerDeviceFound:(id)arg1;
- (void)_bleTriggerDeviceLost:(id)arg1;
- (void)_bleTriggerEnsureStarted;
- (void)_bleTriggerEnsureStopped;
- (void)_infraBonjourBrowserEnsureStarted;
- (void)_infraBonjourBrowserEnsureStopped;
- (void)_infraBonjourDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_infraBonjourDeviceFound:(id)arg1;
- (void)_infraBonjourDeviceLost:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_nanEndpointChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_nanEndpointFound:(id)arg1;
- (void)_nanEndpointLost:(id)arg1;
- (void)_nanSubscriberEnsureStarted;
- (void)_nanSubscriberEnsureStopped;
- (void)_updateLocked;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)awdlControl;
- (unsigned int)bleDiscoveryFlags;
- (id)blePeerFilter;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (id /* block */)endpointChangedHandler;
- (id /* block */)endpointFoundHandler;
- (id /* block */)endpointLostHandler;
- (int)infraControl;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (int)nanControl;
- (id)serviceType;
- (void)setAwdlControl:(int)arg1;
- (void)setBleDiscoveryFlags:(unsigned int)arg1;
- (void)setBlePeerFilter:(id)arg1;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointChangedHandler:(id /* block */)arg1;
- (void)setEndpointFoundHandler:(id /* block */)arg1;
- (void)setEndpointLostHandler:(id /* block */)arg1;
- (void)setInfraControl:(int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setNanControl:(int)arg1;
- (void)setServiceType:(id)arg1;

@end
