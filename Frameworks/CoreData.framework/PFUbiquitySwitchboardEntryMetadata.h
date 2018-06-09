/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString * _activeModelVersionHash;
    PFUbiquityBaselineHeuristics * _baselineHeuristics;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    _PFUbiquityRecordsExporter * _exporter;
    _PFUbiquityRecordsImporter * _importer;
    NSString * _localPeerID;
    PFUbiquityLocation * _localRootLocation;
    NSPersistentStoreCoordinator * _privatePSC;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSSQLCore * _privateStore;
    PFUbiquityRecordsImporterSchedulingContext * _schedulingContext;
    NSString * _storeName;
    NSMutableSet * _stores;
    PFUbiquityLocation * _ubiquityRootLocation;
    bool  _useLocaAccount;
    bool  _useLocalStorage;
}

@property (nonatomic, readonly) NSString *activeModelVersionHash;
@property (nonatomic, readonly) PFUbiquityBaselineHeuristics *baselineHeuristics;
@property (nonatomic, retain) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (nonatomic, readonly) _PFUbiquityRecordsExporter *exporter;
@property (nonatomic, readonly) _PFUbiquityRecordsImporter *importer;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *privatePSC;
@property (nonatomic, readonly) NSSQLCore *privateStore;
@property (nonatomic, readonly) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;
@property (nonatomic, readonly) NSSet *stores;
@property (nonatomic, retain) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic) bool useLocalAccount;
@property (nonatomic) bool useLocalStorage;

- (id)activeModelVersionHash;
- (void)addPersistentStore:(id)arg1;
- (id)baselineHeuristics;
- (id)cacheWrapper;
- (void)dealloc;
- (id)exporter;
- (id)importer;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;
- (id)privatePSC;
- (id)privateStore;
- (void)removePersistentStore:(id)arg1;
- (id)schedulingContext;
- (void)setCacheWrapper:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUseLocalAccount:(bool)arg1;
- (void)setUseLocalStorage:(bool)arg1;
- (id)stores;
- (void)tearDown;
- (id)ubiquityRootLocation;
- (bool)useLocalAccount;
- (bool)useLocalStorage;

@end
