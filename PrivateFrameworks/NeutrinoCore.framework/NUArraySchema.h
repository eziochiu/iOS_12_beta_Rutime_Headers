/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUArraySchema : NUSchema {
    NSDictionary * _aliasToIdentifier;
    long long  _contentType;
    NSDictionary * _identifierToAlias;
    NUPattern * _pattern;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSDictionary *contents;
@property (nonatomic, readonly) NSArray *defaultArray;
@property (nonatomic, readonly) NUPattern *pattern;

+ (long long)deserializeContentTypeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializePatternFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (long long)contentType;
- (struct NSDictionary { Class x1; }*)contents;
- (id)copy:(id)arg1;
- (id)copyArray:(id)arg1;
- (struct NSArray { Class x1; }*)defaultArray;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (id)deserializeArray:(id)arg1 error:(out id*)arg2;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)initWithIdentifier:(id)arg1 contentType:(long long)arg2 contents:(struct NSDictionary { Class x1; }*)arg3 pattern:(id)arg4 attributes:(id)arg5;
- (bool)isValid:(out id*)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)makeJSValueFromArray:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)pattern;
- (struct NSArray { Class x1; }*)schemaDependencies;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (id)serializeArray:(id)arg1 error:(out id*)arg2;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (long long)type;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateArray:(id)arg1 error:(out id*)arg2;
- (bool)validateArrayContents:(id)arg1 error:(out id*)arg2;
- (bool)validateArrayOrder:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;
- (bool)validateAttributes:(out id*)arg1;
- (bool)validateContents:(out id*)arg1;
- (bool)validateDefaultArray:(id)arg1 error:(out id*)arg2;

@end
