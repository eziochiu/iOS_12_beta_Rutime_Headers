/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTVRemotePayload : MCPayload {
    NSArray * _allowedRemotes;
    NSArray * _allowedTVs;
}

@property (nonatomic, retain) NSArray *allowedRemotes;
@property (nonatomic, retain) NSArray *allowedTVs;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)allowedRemotes;
- (id)allowedTVs;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAllowedRemotes:(id)arg1;
- (void)setAllowedTVs:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
