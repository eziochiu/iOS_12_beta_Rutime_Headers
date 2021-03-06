/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDefaultsPayload : MCPayload {
    NSDictionary * _defaultsByDomain;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)defaultsForDomain:(id)arg1;
- (id)description;
- (id)domains;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isAllowedToWriteDefaults;
- (id)stubDictionary;
- (id)title;

@end
