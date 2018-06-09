/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PGGraphUpdateManagerDelegate> {
    struct PFDirectMessagingMulticaster { Class x1; } * _clientMulticaster;
    NSMutableSet * _clientsWantingUpdates;
    PGManager * _graphManager;
    PHAManager * _photoAnalysisManager;
    bool  _rebuildInProgress;
    PFSerialQueue * _serializer;
    PGGraphUpdateManager * _updateManager;
}

@property (nonatomic, retain) PHAManager *photoAnalysisManager;

- (void).cxx_destruct;
- (void)_graphBecameReady:(id)arg1;
- (void)_startListeningWithClient:(struct NSObject { Class x1; }*)arg1;
- (void)_stopListeningWithClient:(struct NSObject { Class x1; }*)arg1;
- (void)dealloc;
- (bool)graphNeedsRebuild;
- (void)graphUpdateManager:(id)arg1 graphIsConsistent:(bool)arg2;
- (void)graphUpdateManager:(id)arg1 graphUpdateMadeProgress:(double)arg2;
- (id)initWithManager:(id)arg1;
- (id)loadGraph;
- (void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(id /* block */)arg2;
- (void)performFullRebuildWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)photoAnalysisManager;
- (id)registerGraphClient:(id)arg1;
- (void)setPhotoAnalysisManager:(id)arg1;
- (void)shutdown;
- (void)unloadGraph;
- (void)unregisterGraphClient:(id)arg1;

@end
