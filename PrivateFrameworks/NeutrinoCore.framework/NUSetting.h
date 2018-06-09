/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSetting : NUModel

@property (readonly) id defaultValue;
@property (nonatomic, readonly) bool isRequired;

+ (id)deserializeAttributesFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (struct NSDictionary { Class x1; }*)deserializeSettingsFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3;
+ (id)supportedAttributes;

- (id)copy:(id)arg1;
- (id)defaultValue;
- (id)description;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (bool)isRequired;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (bool)serializeAttributesIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;

@end
