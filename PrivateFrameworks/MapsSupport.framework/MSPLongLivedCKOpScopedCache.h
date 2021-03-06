/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPLongLivedCKOpScopedCache : NSObject {
    MSPLongLivedCKOpCache * _cache;
    NSString * _typeName;
}

@property (nonatomic, retain) MSPLongLivedCKOpCache *cache;
@property (nonatomic, readonly) NSString *typeName;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)cache;
- (bool)hasOperationID:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithType:(id)arg1 cache:(id)arg2;
- (bool)isAwareOfOperationID:(id)arg1;
- (bool)isCurrentOperationID:(id)arg1;
- (void)pruneOperationsToIDs:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)setCache:(id)arg1;
- (id)typeName;

@end
