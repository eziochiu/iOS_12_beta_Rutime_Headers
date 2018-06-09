/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSchema : NSObject <NSSecureCoding> {
    NSMutableDictionary * _parameterCombinationDictionary;
    NSMutableDictionary * _schemaDictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *_parameterCombinationDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_schemaDictionary;

+ (id)_defaultSchemaForBundle:(id)arg1;
+ (id)defaultSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_codableDescriptionsForClass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithContentsOfDictionary:(id)arg1;
- (id)_initWithContentsOfURLs:(id)arg1;
- (void)_loadIntentsFromArrayOfDictionaries:(id)arg1 withEnums:(id)arg2 fromFile:(id)arg3;
- (void)_loadTypesFromArrayOfDictionaries:(id)arg1 withEnums:(id)arg2;
- (id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2;
- (id)_parameterCombinationDictionary;
- (id)_parameterCombinationsForClass:(Class)arg1;
- (id)_parameterCombinationsForClassName:(id)arg1;
- (id)_schemaDictionary;
- (void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentWithName:(id)arg1;

@end
