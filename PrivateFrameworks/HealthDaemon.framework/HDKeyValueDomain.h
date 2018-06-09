/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKeyValueDomain : NSObject {
    long long  _category;
    NSString * _domainName;
    Class  _entityClass;
    HDProfile * _profile;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *domainName;

- (void).cxx_destruct;
- (id)allValuesWithError:(id*)arg1;
- (long long)category;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)dateForKey:(id)arg1 error:(id*)arg2;
- (id)domainName;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 profile:(id)arg3;
- (id)modificationDatesForKeys:(id)arg1 error:(id*)arg2;
- (id)numberForKey:(id)arg1 error:(id*)arg2;
- (id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id*)arg3;
- (bool)removeValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (bool)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setValuesWithDictionary:(id)arg1 error:(id*)arg2;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (id)valuesForKeys:(id)arg1 error:(id*)arg2;

@end
