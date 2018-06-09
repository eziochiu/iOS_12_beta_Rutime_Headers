/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudStoreRecord : NSObject {
    NSDictionary * _cloudStoreSpecificKeys;
    NSMutableDictionary * _records;
}

@property (nonatomic, copy) NSDictionary *cloudStoreSpecificKeys;
@property (nonatomic, readonly) NSArray *records;

- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (id)cloudStoreSpecificKeys;
- (id)description;
- (id)initWithRecords:(id)arg1;
- (id)recordWithRecordType:(id)arg1;
- (id)records;
- (void)setCloudStoreSpecificKeys:(id)arg1;

@end
