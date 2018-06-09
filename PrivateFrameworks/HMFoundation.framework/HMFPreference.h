/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFPreference : HMFObject {
    NSString * _key;
    unsigned long long  _options;
    <NSObject> * _value;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly, copy) NSData *dataValue;
@property (readonly) NSString *key;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (copy) <NSObject> *value;

+ (id)shortDescription;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)dataValue;
- (id)init;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)key;
- (id)numberValue;
- (unsigned long long)options;
- (void)setValue:(id)arg1;
- (id)shortDescription;
- (id)stringValue;
- (id)value;

@end
