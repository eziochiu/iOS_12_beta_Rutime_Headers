/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertionStoreRecord : NSObject <DNDSBackingStoreRecord, DNDSSyncRecord, NSCopying, NSMutableCopying> {
    NSArray * _storeAssertionRecords;
    NSNumber * _storeLastCompleteInvalidationTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *storeAssertionRecords;
@property (nonatomic, readonly, copy) NSNumber *storeLastCompleteInvalidationTimestamp;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithStoreLastCompleteInvalidationTimestamp:(id)arg1 storeAssertionRecords:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSyncDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)storeAssertionRecords;
- (id)storeLastCompleteInvalidationTimestamp;
- (id)syncDictionaryRepresentation;

@end