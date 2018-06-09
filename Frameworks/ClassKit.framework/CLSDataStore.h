/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking> {
    int  _accountChangeToken;
    CLSAuthTree * _authTree;
    CLSCurrentUser * _cachedCurrentUser;
    NSMutableSet * _dataObservers;
    <CLSDataStoreDelegate> * _delegate;
    struct NSMutableDictionary { Class x1; } * _deletedObjectsByID;
    CLSEndpointConnection * _endpointConnection;
    CLSGraph * _graph;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    CLSContext * _mainAppContext;
    NSMutableDictionary * _objectGenerationsByID;
    NSMutableArray * _pendingSaves;
    NSMutableArray * _runningActivities;
    bool  _saveInProgress;
}

@property (nonatomic, readonly) CLSContext *activeContext;
@property (nonatomic, readonly) CLSAuthTree *authTree;
@property (nonatomic, retain) CLSCurrentUser *cachedCurrentUser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLSDataStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLSEndpointConnection *endpointConnection;
@property (nonatomic, readonly) CLSGraph *graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLSContext *mainAppContext;
@property (nonatomic, readonly) CLSActivity *runningActivity;
@property (readonly) Class superclass;

+ (Class)endpointClass;
+ (bool)isAvailable;
+ (bool)isDashboardApp;
+ (bool)isPDTool;
+ (id)newDatastore;
+ (id)shared;

- (void).cxx_destruct;
- (id)_addObject:(id)arg1;
- (void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_connectionConnected;
- (void)_connectionInterupted;
- (void)_createMainAppContext;
- (id)_filterObjectsBeingSavedFromObjects:(id)arg1;
- (id)_modifiedObjects;
- (void)_reconnect;
- (void)_reenableObservers;
- (void)_refreshMainAppContext;
- (void)_registerForDarwinNotifications;
- (void)_save;
- (void)_saveObjects:(id)arg1 completion:(id /* block */)arg2;
- (id)_validateObjects:(id)arg1;
- (id)activeContext;
- (void)addFavorite:(id)arg1;
- (void)addHandout:(id)arg1;
- (id)addObject:(id)arg1;
- (void)addRunningActivitiesObject:(id)arg1;
- (id)allContexts;
- (id)appIdentifier;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)authTree;
- (void)awaitExecuteQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedCurrentUser;
- (id)cachedMainAppContext;
- (void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)contextsMatchingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)contextsMatchingIdentifierPath:(id)arg1 completion:(id /* block */)arg2;
- (void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(id /* block */)arg3;
- (void)contextsMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (id)currentUser;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (void)currentUserWithServer:(id)arg1 completion:(id /* block */)arg2;
- (id)dataServer:(id /* block */)arg1;
- (void)dataServer:(id)arg1 executeQuery:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deregisterDataObserver:(id)arg1;
- (void)developerModeChanged:(id)arg1;
- (id)endpointConnection;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (void)faultMainAppContext;
- (bool)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(struct NSObject { Class x1; }*)arg3;
- (void)fetchTransparencyMessageInfoWithCompletion:(id /* block */)arg1;
- (id)graph;
- (void)handoutAttachmentForDocumentURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (bool)isAllowedToInsertObject:(id)arg1;
- (bool)isAppClient;
- (bool)isDashboardAPIEnabled;
- (bool)isRemovedObject:(id)arg1;
- (void)lock;
- (id)mainAppContext;
- (void)markObjectAsDeleted:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)publishHandout:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshAuthTreeWithCompletion:(id /* block */)arg1;
- (void)refreshMainAppContext;
- (void)registerDataObserver:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)removeContextWithObjectID:(id)arg1;
- (void)removeFavorite:(id)arg1;
- (void)removeHandout:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2;
- (void)removeRunningActivitiesObject:(id)arg1;
- (void)reset;
- (id)runningActivities;
- (id)runningActivity;
- (void)saveObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)saveWithCompletion:(id /* block */)arg1;
- (void)setCachedCurrentUser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setMainAppContext:(id)arg1;
- (void)setShouldSyncTeacherBrowsedContexts:(bool)arg1 completion:(id /* block */)arg2;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(id /* block */)arg1;
- (id)syncDataServer:(id /* block */)arg1;
- (void)triggerProgressTransparencyMessageIfNeeded;
- (void)unlock;

@end
