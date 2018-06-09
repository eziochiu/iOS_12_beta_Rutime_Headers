/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSchema : NUModel {
    NUIdentifier * _identifier;
}

@property (nonatomic, readonly) NUIdentifier *identifier;
@property (nonatomic, readonly) long long type;

+ (id)copyIdentifiableItem:(id)arg1;
+ (id)copyItem:(id)arg1 schemaIdentifier:(id)arg2;
+ (struct NSDictionary { Class x1; }*)deserializeContentsFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeIdentifiableItem:(id)arg1 error:(out id*)arg2;
+ (id)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3;
+ (long long)deserializeMediaTypeFromDictionary:(id)arg1;
+ (id)deserializeSchemaFromArray:(id)arg1 error:(out id*)arg2;
+ (id)makeJSValueForIdentifiableItem:(id)arg1 context:(id)arg2 error:(out id*)arg3;
+ (id)reservedPropertyNames;
+ (long long)schemaTypeFromString:(id)arg1 error:(out id*)arg2;
+ (id)serializeIdentifiableItem:(id)arg1 error:(out id*)arg2;
+ (id)serializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3;
+ (bool)serializeMediaType:(long long)arg1 intoDictionary:(id)arg2 error:(out id*)arg3;
+ (bool)validateIdentifiable:(id)arg1 error:(out id*)arg2;
+ (bool)validateIdentifiable:(id)arg1 type:(long long)arg2 error:(out id*)arg3;
+ (bool)validateSchemaIdentifier:(id)arg1 type:(long long)arg2 error:(out id*)arg3;
+ (bool)validateSchemaType:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)description;
- (bool)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2;
- (id)identifier;
- (id)initWithAttributes:(id)arg1;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (bool)isValid:(out id*)arg1;
- (struct NSArray { Class x1; }*)schemaDependencies;
- (bool)serializeIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (long long)type;
- (bool)validateIdentifier:(id)arg1 error:(out id*)arg2;

@end
