/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzerObjectState : NSObject {
    long long  _finalChangeType;
    NSPersistentHistoryToken * _finalHistoryToken;
    NSNumber * _finalTransactionNumber;
    NSManagedObjectID * _objectID;
    long long  _originalChangeType;
    NSNumber * _originalTransactionNumber;
    NSDictionary * _tombstone;
}

@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, readonly) NSPersistentHistoryToken *finalHistoryToken;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) NSDictionary *tombstone;

- (void)dealloc;
- (id)description;
- (long long)finalChangeType;
- (id)finalHistoryToken;
- (id)finalTransactionNumber;
- (id)initWithOriginalChange:(id)arg1;
- (id)objectID;
- (long long)originalChangeType;
- (id)originalTransactionNumber;
- (id)tombstone;
- (void)updateWithChange:(id)arg1;

@end
