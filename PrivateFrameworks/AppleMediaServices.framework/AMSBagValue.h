/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagValue : NSObject {
    <AMSBagDataSourceProtocol> * _dataSource;
    NSString * _key;
    unsigned long long  _valueType;
}

@property (nonatomic) <AMSBagDataSourceProtocol> *dataSource;
@property (nonatomic, retain) NSString *key;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic) unsigned long long valueType;

+ (bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)globalBagValueStorage;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (bool)isLoaded;
- (id)key;
- (void)setDataSource:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (id)valuePromise;
- (unsigned long long)valueType;
- (void)valueWithCompletion:(id /* block */)arg1;
- (id)valueWithError:(id*)arg1;

@end
