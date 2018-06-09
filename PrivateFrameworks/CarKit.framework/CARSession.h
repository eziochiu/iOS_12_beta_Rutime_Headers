/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSession : NSObject <CARSessionCommandDelegate> {
    NSData * _MFiCertificateSerialNumber;
    bool  _authenticated;
    CARSessionConfiguration * _configuration;
    struct OpaqueFigEndpoint { } * _endpoint;
    CARInputDeviceManager * _inputDeviceManager;
    int  _mapsAmbientBrightnessNotifyToken;
    NSNumber * _mapsFallbackAmbientBrightness;
    NSArray * _screenIDs;
    NSArray * _screenInfo;
    <CARSessionDelegate> * _sessionDelegate;
}

@property (nonatomic, readonly, copy) NSData *MFiCertificateSerialNumber;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) CARSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *electronicTollCollectionAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARInputDeviceManager *inputDeviceManager;
@property (nonatomic, readonly, copy) NSNumber *limitUserInterfaces;
@property (nonatomic) int mapsAmbientBrightnessNotifyToken;
@property (nonatomic, retain) NSNumber *mapsFallbackAmbientBrightness;
@property (nonatomic, readonly, copy) NSNumber *nightMode;
@property (nonatomic, copy) NSArray *screenIDs;
@property (nonatomic, copy) NSArray *screenInfo;
@property (nonatomic) <CARSessionDelegate> *sessionDelegate;
@property (readonly) Class superclass;

+ (long long)_siriRequestEventForEndpointAction:(id)arg1;

- (void).cxx_destruct;
- (id)MFiCertificateSerialNumber;
- (id)_endpointValueForKey:(struct __CFString { }*)arg1;
- (void)_fetchAuthenticationStatus;
- (void)_fetchMapsFallbackAmbientBrightnessWithToken:(int)arg1;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleSiriRequestEvent:(long long)arg1;
- (void)_performExtendedEndpointAction:(id /* block */)arg1;
- (void)_setEndpointValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (id)electronicTollCollectionAvailable;
- (struct OpaqueFigEndpoint { }*)endpoint;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (id)inputDeviceManager;
- (bool)isAuthenticated;
- (id)limitUserInterfaces;
- (int)mapsAmbientBrightnessNotifyToken;
- (id)mapsFallbackAmbientBrightness;
- (unsigned long long)navigationOwner;
- (id)nightMode;
- (bool)ownsScreen;
- (bool)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestTurnByTurnOwnership;
- (id)screenIDs;
- (id)screenInfo;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (id)sessionDelegate;
- (void)setInputDeviceManager:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2;
- (void)setMapsAmbientBrightnessNotifyToken:(int)arg1;
- (void)setMapsFallbackAmbientBrightness:(id)arg1;
- (void)setScreenIDs:(id)arg1;
- (void)setScreenInfo:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (id)systemNightMode;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (void)unborrowScreenForToken:(id)arg1;

@end
