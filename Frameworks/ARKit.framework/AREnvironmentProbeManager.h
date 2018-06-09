/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AREnvironmentProbeManager : NSObject <ARInternalSessionObserver> {
    NSMutableArray * _anchorsToRemove;
    AREnvironmentProbeUpdate * _currentProbeUpdate;
    NSMutableArray * _initialProbeIdentifiers;
    double  _lastProbeUpdateTime;
    double  _minimumProbeUpdateDelay;
    double  _minimumProbeUpdateInterval;
    long long  _mode;
    NSMutableDictionary * _probeIdentifiersByPlaneIdentifier;
    NSMutableArray * _probeUpdateQueue;
    NSMutableDictionary * _probesByIdentifier;
    NSMutableArray * _requestedProbeIdentifiers;
    NSObject<OS_dispatch_semaphore> * _textureDataSemaphore;
    <AREnvironmentTextureProvider> * _textureProvider;
    NSUUID * _universeProbeIdentifier;
    NSMutableArray * _updatedProbeIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AREnvironmentTextureProvider> *textureProvider;

- (void).cxx_destruct;
- (bool)addProbeWithAnchor:(id)arg1 timestamp:(double)arg2 textureImmediately:(bool)arg3;
- (id)initWithMode:(long long)arg1 textureProvider:(id)arg2;
- (void)insertIntoQueue:(id)arg1;
- (bool)isProbe:(id)arg1 affectedByPlanes:(id)arg2 timestamp:(double)arg3;
- (bool)isProbeUpdateSignificant:(id)arg1 oldProbe:(id)arg2;
- (long long)mode;
- (id)probeWithIdentifier:(void *)arg1 planeTransform:(void *)arg2 planeCenter:(void *)arg3 planeExtent:(void *)arg4; // needs 4 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)requestTextureForProbe:(id)arg1;
- (id)textureProvider;
- (id)updateProbesForTimestamp:(double)arg1 planeData:(id)arg2 addedAnchors:(id)arg3 removedAnchors:(id)arg4;
- (void)updateProbesFromExistingAnchors:(id)arg1;

@end
