/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagFrozenDataSourceBuilder : NSObject {
    AMSBagKeySet * _bagKeySet;
    NSArray * _cookies;
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _logKey;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, retain) AMSBagKeySet *bagKeySet;
@property (nonatomic, retain) NSArray *cookies;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSString *profileVersion;

- (void).cxx_destruct;
- (id)bagKeySet;
- (id)cookies;
- (id)createFrozenDataSource;
- (id)data;
- (id)expirationDate;
- (id)initWithFrozenDataSource:(id)arg1;
- (id)logKey;
- (id)profile;
- (id)profileVersion;
- (void)setBagKeySet:(id)arg1;
- (void)setCookies:(id)arg1;
- (void)setData:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;

@end
