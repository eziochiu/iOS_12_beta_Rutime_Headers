/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol> {
    AMSBagKeySet * _bagKeySet;
    NSArray * _cookies;
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _logKey;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) AMSBagKeySet *bagKeySet;
@property (nonatomic, readonly) NSArray *cookies;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 logKey:(id)arg7;
- (id)bagKeyInfoForKey:(id)arg1;
- (id)bagKeySet;
- (id)cookies;
- (id)data;
- (id)expirationDate;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)logKey;
- (id)profile;
- (id)profileVersion;
- (id)valueForURLVariable:(id)arg1;

@end
