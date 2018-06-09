/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUOpaqueSetting : NUSetting

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)supportedAttributes;

- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (bool)isValid:(out id*)arg1;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;
- (bool)validatePlistCompatibility:(id)arg1 error:(out id*)arg2;

@end
