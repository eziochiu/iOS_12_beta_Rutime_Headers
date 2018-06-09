/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureValue : NSObject <NSCopying> {
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) unsigned long long int64Value;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) unsigned long long type;

+ (id)featureValueWithBool:(bool)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)nullValueForFeature:(id)arg1;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)int64Value;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (unsigned long long)type;

@end
