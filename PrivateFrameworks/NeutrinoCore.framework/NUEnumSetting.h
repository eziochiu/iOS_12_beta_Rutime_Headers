/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUEnumSetting : NUSetting {
    NSArray * _values;
}

@property (readonly) NSString *defaultValue;
@property (readonly) NSArray *values;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithValues:(id)arg1 attributes:(id)arg2;
- (bool)isValid:(out id*)arg1;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateValues:(out id*)arg1;
- (id)values;

@end
