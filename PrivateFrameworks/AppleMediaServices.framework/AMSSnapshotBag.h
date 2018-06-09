/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSnapshotBag : NSObject <AMSBagProtocol> {
    NSDate * _creationDate;
    AMSBagFrozenDataSource * _dataSource;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) AMSBagFrozenDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)creationDate;
- (id)dataSource;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithDataSource:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)profile;
- (id)profileVersion;
- (void)setDataSource:(id)arg1;
- (id)stringForKey:(id)arg1;

@end
