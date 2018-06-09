/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponseData : NSObject {
    NSArray * _conflictedKeys;
    NSArray * _deletedKeys;
    NSMutableDictionary * _responseOpEntiesByKey;
    NSArray * _successfullyDeletedKeys;
    NSArray * _successfullyUpdatedKeys;
    NSString * _syncAnchor;
    SBKSyncTransaction * _transaction;
    NSArray * _updatedKeys;
}

@property (readonly) NSArray *conflictedKeys;
@property (readonly) NSArray *deletedKeys;
@property (retain) NSMutableDictionary *responseOpEntiesByKey;
@property (readonly) NSArray *successfullyDeletedKeys;
@property (readonly) NSArray *successfullyUpdatedKeys;
@property (readonly, copy) NSString *syncAnchor;
@property (readonly) SBKSyncTransaction *transaction;
@property (readonly) NSArray *updatedKeys;

+ (id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;

- (void).cxx_destruct;
- (void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2;
- (id)conflictedKeys;
- (id)deletedKeys;
- (id)description;
- (id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;
- (id)payloadDataForUpdateResponseKey:(id)arg1;
- (id)responseOpEntiesByKey;
- (void)setResponseOpEntiesByKey:(id)arg1;
- (id)successfullyDeletedKeys;
- (id)successfullyUpdatedKeys;
- (id)syncAnchor;
- (id)transaction;
- (id)updatedKeys;

@end
