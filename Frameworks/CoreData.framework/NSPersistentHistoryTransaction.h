/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>

@property (readonly, copy) NSString *author;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSArray *changes;
@property (readonly, copy) NSString *contextName;
@property (readonly, copy) NSString *processID;
@property (readonly, copy) NSString *storeID;
@property (readonly, copy) NSDate *timestamp;
@property (readonly) NSPersistentHistoryToken *token;
@property (readonly) long long transactionNumber;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (bool)supportsSecureCoding;

- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialQueryGenerationToken;
- (bool)isEqual:(id)arg1;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)processID;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (bool)bds_atOffset:(long long*)arg1 getAtMost:(long long)arg2 moc:(id)arg3 entityClass:(Class)arg4 privacyDelegate:(id)arg5 updated:(id*)arg6 tombstones:(id*)arg7;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;

@end
