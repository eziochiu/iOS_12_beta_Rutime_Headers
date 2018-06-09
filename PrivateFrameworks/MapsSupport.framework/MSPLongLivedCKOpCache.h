/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPLongLivedCKOpCache : NSObject {
    NSMutableSet * _currentOpIDs;
    NSUserDefaults * _defaults;
}

@property (nonatomic, retain) NSMutableSet *currentOpIDs;
@property (nonatomic, retain) NSUserDefaults *defaults;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_operationIDsByType;
- (id)_operationIDsForType:(id)arg1;
- (void)_setOperationIDs:(id)arg1 forType:(id)arg2;
- (void)addOperation:(id)arg1 forType:(id)arg2;
- (id)currentOpIDs;
- (id)defaults;
- (bool)hasOperationID:(id)arg1 forType:(id)arg2;
- (id)init;
- (bool)isAwareOfOperationID:(id)arg1;
- (bool)isCurrentOperationID:(id)arg1;
- (void)pruneOperationsToIDs:(id)arg1;
- (void)removeOperation:(id)arg1 forType:(id)arg2;
- (void)setCurrentOpIDs:(id)arg1;
- (void)setDefaults:(id)arg1;

@end
