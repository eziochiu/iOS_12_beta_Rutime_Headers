/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPProvider : NSObject <NSCopying, NSSecureCoding> {
    NSFileProviderDomain * _domain;
    bool  _empty;
    bool  _enabled;
    NSString * _identifier;
    bool  _isReadOnly;
    FPItemCollection * _itemCollection;
    NSString * _localizedName;
    NSFileProviderManager * _manager;
    NSString * _providerIdentifier;
    NSURL * _storageURL;
    NSArray * _supportedFileTypes;
    NSArray * _supportedSortDescriptors;
    long long  _type;
    bool  _usesUniqueItemIdentifiersAcrossDevices;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (getter=isEmpty, nonatomic) bool empty;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAvailableSystemWide;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) bool isiCloudDriveProvider;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSFileProviderManager *manager;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSURL *storageURL;
@property (nonatomic, readonly) NSArray *supportedFileTypes;
@property (nonatomic, readonly) NSArray *supportedSortDescriptors;
@property (nonatomic, readonly) bool supportsEnumeration;
@property (nonatomic, readonly) long long type;
@property (nonatomic) bool usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic, readonly) NSString *version;

+ (id)beginMonitoringProviderChangesWithHandler:(id /* block */)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (void)fetchProviderForItem:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchProviderForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchProviderWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchProviderWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)localizedTitleForSortDescriptor:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 domain:(id)arg2 localizedName:(id)arg3 storageURL:(id)arg4 supportedFileTypes:(id)arg5 type:(long long)arg6 isReadOnly:(bool)arg7 isEnabled:(bool)arg8 usesUniqueItemIdentifiers:(bool)arg9;
- (id)bundleURL;
- (id)containingBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailableSystemWide;
- (bool)isEmpty;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (bool)isiCloudDriveProvider;
- (id)localizedName;
- (id)manager;
- (id)providerIdentifier;
- (void)setEmpty:(bool)arg1;
- (void)setEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setStorageURL:(id)arg1;
- (void)setUsesUniqueItemIdentifiersAcrossDevices:(bool)arg1;
- (id)storageURL;
- (id)supportedFileTypes;
- (id)supportedSortDescriptors;
- (bool)supportsEnumeration;
- (long long)type;
- (bool)usesUniqueItemIdentifiersAcrossDevices;
- (id)version;

@end
