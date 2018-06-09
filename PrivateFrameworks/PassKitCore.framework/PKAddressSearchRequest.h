/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddressSearchRequest : NSObject {
    id /* block */  _contactFilter;
    NSString * _fragment;
    NSArray * _keysToFetch;
    NSString * _outputKey;
    NSPredicate * _predicate;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ contactFilter;
@property (nonatomic, copy) NSString *fragment;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic, retain) NSString *outputKey;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id /* block */)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2;
- (id)allKeys;
- (id /* block */)contactFilter;
- (id)contactKeys;
- (id)fragment;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithFullText:(id)arg1;
- (id)initWithNameComponents:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)keysToFetch;
- (id)outputKey;
- (id)postalAddressKeys;
- (id)predicate;
- (void)setContactFilter:(id /* block */)arg1;
- (void)setFragment:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setOutputKey:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
