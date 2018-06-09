/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWebContentFilterPayload : MCPayload {
    bool  _autoFilterEnabled;
    NSArray * _blacklistedURLStrings;
    bool  _filterBrowsers;
    bool  _filterSockets;
    NSString * _filterType;
    NSString * _name;
    NSArray * _permittedURLStrings;
    NSString * _pluginBundleID;
    NSDictionary * _pluginConfiguration;
    NSArray * _whitelistedBookmarks;
}

@property (nonatomic) bool autoFilterEnabled;
@property (nonatomic, retain) NSArray *blacklistedURLStrings;
@property (nonatomic) bool filterBrowsers;
@property (nonatomic) bool filterSockets;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *permittedURLStrings;
@property (nonatomic, copy) NSString *pluginBundleID;
@property (nonatomic, retain) NSDictionary *pluginConfiguration;
@property (nonatomic, retain) NSArray *whitelistedBookmarks;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)pluginFilterKeysAndClasses;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)autoFilterEnabled;
- (id)blacklistedURLStrings;
- (id)description;
- (bool)filterBrowsers;
- (bool)filterSockets;
- (id)filterType;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)name;
- (id)payloadDescriptionKeyValueSections;
- (id)permittedURLStrings;
- (id)pluginBundleID;
- (id)pluginConfiguration;
- (id)restrictions;
- (void)setAutoFilterEnabled:(bool)arg1;
- (void)setBlacklistedURLStrings:(id)arg1;
- (void)setFilterBrowsers:(bool)arg1;
- (void)setFilterSockets:(bool)arg1;
- (void)setFilterType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPermittedURLStrings:(id)arg1;
- (void)setPluginBundleID:(id)arg1;
- (void)setPluginConfiguration:(id)arg1;
- (void)setWhitelistedBookmarks:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)whitelistedBookmarks;

@end
