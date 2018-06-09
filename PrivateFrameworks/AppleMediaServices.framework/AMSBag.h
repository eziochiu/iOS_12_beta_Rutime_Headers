/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBag : NSObject <AMSBagProtocol> {
    <AMSBagDataSourceProtocol> * _dataSource;
}

@property (nonatomic, retain) <AMSBagDataSourceProtocol> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (void)_resetBagCache;
+ (id)bagCache;
+ (id)bagCacheAccessQueue;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dataSource;
- (id)description;
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
