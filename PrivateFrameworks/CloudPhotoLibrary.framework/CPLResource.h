/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResource : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _backgroundDownloadTaskIdentifier;
    bool  _canGenerateDerivative;
    CPLResourceIdentity * _identity;
    CPLScopedIdentifier * _itemScopedIdentifier;
    unsigned long long  _resourceType;
    unsigned long long  _sourceResourceType;
}

@property (nonatomic) bool canGenerateDerivative;
@property (nonatomic, retain) CPLResourceIdentity *identity;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, copy) CPLScopedIdentifier *itemScopedIdentifier;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long sourceResourceType;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (unsigned long long)countOfResourceTypes;
+ (bool)cplShouldGenerateDerivatives;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (float)derivativeGenerationThreshold;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (void)enumerateResourceTypesWithBlock:(id /* block */)arg1;
+ (bool)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id*)arg2;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (bool)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1;
- (id)bestFileNameForResource;
- (bool)canGenerateDerivative;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedResourceSize;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTrackedForUpload;
- (id)itemIdentifier;
- (id)itemScopedIdentifier;
- (unsigned long long)resourceType;
- (void)setCanGenerateDerivative:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemScopedIdentifier:(id)arg1;
- (void)setResourceType:(unsigned long long)arg1;
- (void)setSourceResourceType:(unsigned long long)arg1;
- (bool)shouldApplyDataProtection;
- (bool)shouldCopy;
- (unsigned long long)sourceResourceType;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)imageDerivativeTypes;
+ (id)videoDerivativeTypes;

- (bool)deleteAfterUpload;
- (void)setDeleteAfterUpload:(bool)arg1;

@end
