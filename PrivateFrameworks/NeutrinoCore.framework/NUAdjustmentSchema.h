/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAdjustmentSchema : NUSchema {
    struct NSDictionary { Class x1; } * _settings;
}

@property (nonatomic, readonly) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)copy:(id)arg1;
- (id)copyAdjustment:(id)arg1;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (id)deserializeAdjustment:(id)arg1 error:(out id*)arg2;
- (bool)deserializeSettings:(id)arg1 fromDictionary:(id)arg2 error:(out id*)arg3;
- (void)enumerateProperties:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)initWithIdentifier:(id)arg1 settings:(struct NSDictionary { Class x1; }*)arg2 attributes:(id)arg3;
- (bool)isValid:(out id*)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)modelForProperty:(id)arg1;
- (struct NSArray { Class x1; }*)schemaDependencies;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (id)serializeAdjustment:(id)arg1 error:(out id*)arg2;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)serializeSettings:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3;
- (struct NSDictionary { Class x1; }*)settings;
- (long long)type;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAdjustment:(id)arg1 error:(out id*)arg2;
- (bool)validateSettings:(out id*)arg1;
- (bool)validateSettings:(id)arg1 error:(out id*)arg2;

@end
