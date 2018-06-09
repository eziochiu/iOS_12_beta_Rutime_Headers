/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe> {
    NSMutableDictionary * _addData;
    NSString * _bundleID;
    NSString * _keyPrefix;
    NSMutableDictionary * _setData;
}

@property (nonatomic, retain) NSMutableDictionary *addData;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyPrefix;
@property (nonatomic, retain) NSMutableDictionary *setData;
@property (readonly) Class superclass;

+ (id)preparedBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)addData;
- (id)bundleID;
- (id)fullKey:(id)arg1;
- (id)init;
- (id)initWithKeyPrefix:(id)arg1;
- (id)initWithKeyPrefix:(id)arg1 bundleIdentifier:(id)arg2;
- (id)keyPrefix;
- (void)recordAddValue:(id)arg1 forKey:(id)arg2;
- (void)recordSetValue:(id)arg1 forKey:(id)arg2;
- (void)sendData;
- (void)setAddData:(id)arg1;
- (id)setData;
- (void)setSetData:(id)arg1;

@end
