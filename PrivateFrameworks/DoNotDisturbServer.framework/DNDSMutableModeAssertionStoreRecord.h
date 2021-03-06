/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSMutableModeAssertionStoreRecord : DNDSModeAssertionStoreRecord

@property (nonatomic, copy) NSArray *storeAssertionRecords;
@property (nonatomic, copy) NSNumber *storeLastCompleteInvalidationTimestamp;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setStoreAssertionRecords:(id)arg1;
- (void)setStoreLastCompleteInvalidationTimestamp:(id)arg1;

@end
