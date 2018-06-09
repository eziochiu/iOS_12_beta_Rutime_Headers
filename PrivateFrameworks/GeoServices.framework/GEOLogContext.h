/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogContext : NSObject <NSCopying> {
    NSMutableArray * _logMsgStates;
}

@property (nonatomic, readonly) NSArray *logMsgStates;

+ (id)defaultGlobalLogContext;
+ (id)emptyLogContext;
+ (id)logContextFromTraits:(id)arg1;
+ (id)logContextWithDefaultTraits;
+ (id)logContextWithDefaultTraitsForCachedContext;

- (void).cxx_destruct;
- (void)_initializeDefaultStates;
- (void)_initializeGlobalDefaultStates;
- (void)_registerApplicationIdentifierState;
- (void)_registerDefaultMapUIState;
- (void)_registerDeviceBaseStateWithTraits:(id)arg1;
- (void)_registerDeviceConnectionState;
- (void)_registerDeviceIdentifierState;
- (void)_registerDeviceLocaleStateWithTraits:(id)arg1;
- (void)_registerExperimentsState;
- (void)_registerLogContextWithTraits:(id)arg1;
- (void)_registerMapViewStateWithTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentExperimentsState;
- (id)init;
- (id)initWithDefaultStates;
- (id)initWithDefaultTraits;
- (id)initWithGlobalDefaultStates;
- (id)initWithTraits:(id)arg1;
- (id)logContextByMergingLogContext:(id)arg1;
- (id)logMsgStateOfType:(int)arg1;
- (id)logMsgStates;
- (void)mergeLogContext:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(bool)arg2 userSessionSnapshot:(id)arg3;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (void)updateDeviceConnectionState;

@end
