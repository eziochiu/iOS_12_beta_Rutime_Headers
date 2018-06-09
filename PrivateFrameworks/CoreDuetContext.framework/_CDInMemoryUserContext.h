/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDInMemoryUserContext : NSObject <_CDContextInternal, _CDUserContext> {
    NSMutableDictionary * _contexts;
    NSNumber * _localDeviceID;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _CDInMemoryContext * _userContext;
}

@property (nonatomic, retain) NSMutableDictionary *contexts;
@property (nonatomic, retain) NSNumber *localDeviceID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) _CDInMemoryContext *userContext;

+ (id)sharedUserContext;
+ (id)userContext;

- (void).cxx_destruct;
- (bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(bool*)arg4;
- (bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)contextForKeyPath:(id)arg1;
- (id)contexts;
- (void)deregisterCallback:(id)arg1;
- (id)description;
- (bool)evaluatePredicate:(id)arg1;
- (bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)init;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)localContext;
- (id)localDeviceID;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (void)registerCallback:(id)arg1;
- (bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)setContexts:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setSyncQueue:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)syncQueue;
- (id)userContext;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;

@end
