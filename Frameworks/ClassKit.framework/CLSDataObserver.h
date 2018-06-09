/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSDataObserver : NSObject <CLSChangeNotifiable, CLSPredicateValueNormalizer> {
    unsigned long long  _changeTag;
    id /* block */  _dataChanged;
    CLSDataStore * _dataStore;
    bool  _invalidated;
    Class  _objectType;
    NSString * _observerID;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property unsigned long long changeTag;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, copy) id /* block */ dataChanged;
@property (nonatomic) CLSDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated) bool invalidated;
@property (nonatomic, readonly) Class objectType;
@property (nonatomic, readonly) NSString *observerID;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;

+ (id)predicateForObjectWithObjectID:(id)arg1;
+ (id)predicateForObjectsWithIdentifier:(id)arg1;
+ (id)predicateForObjectsWithObjectIDs:(id)arg1;
+ (id)predicateForObjectsWithParentObjectID:(id)arg1;
+ (id)predicateForObjectsWithParentObjectID:(id)arg1 andRole:(unsigned long long)arg2;
+ (id)predicateForObjectsWithPersonID:(id)arg1 andRole:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)changeTag;
- (id)className;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (id /* block */)dataChanged;
- (id)dataStore;
- (id)description;
- (id)init;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4;
- (bool)isInvalidated;
- (id)normalizeKeyPath:(id)arg1 forValue:(id)arg2;
- (id)normalizedValue:(id)arg1 forKeyPath:(id)arg2;
- (Class)objectType;
- (id)observerID;
- (id)predicate;
- (void)reset;
- (void)setChangeTag:(unsigned long long)arg1;
- (void)setDataChanged:(id /* block */)arg1;
- (void)setDataStore:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
