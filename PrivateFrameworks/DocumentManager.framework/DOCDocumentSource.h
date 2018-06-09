/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCDocumentSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSArray * _documentTypes;
    bool  _hasTemplateIcon;
    bool  _hidden;
    UIImage * _icon;
    NSString * _identifier;
    NSString * _promptText;
    FPProvider * _searching_fileProvider;
}

@property (copy) NSString *displayName;
@property (copy) NSArray *documentTypes;
@property bool hasTemplateIcon;
@property bool hidden;
@property (retain) UIImage *icon;
@property (copy) NSString *identifier;
@property (readonly) bool isAvailableSystemWide;
@property (copy) NSString *promptText;
@property FPProvider *searching_fileProvider;

+ (void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)arg1;
+ (void)endSearchingSources:(id)arg1;
+ (bool)isICloudFileProviderEnabledForBundleIdentifier:(id)arg1;
+ (void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)sourceIdentifierOrderWithDefault:(id)arg1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)documentTypes;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTemplateIcon;
- (unsigned long long)hash;
- (bool)hidden;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailableSystemWide;
- (bool)isEqual:(id)arg1;
- (id)promptText;
- (id)sanitizedSource;
- (id)searching_fileProvider;
- (void)setDisplayName:(id)arg1;
- (void)setDocumentTypes:(id)arg1;
- (void)setHasTemplateIcon:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setSearching_fileProvider:(id)arg1;
- (bool)usesEnumeration;

@end
