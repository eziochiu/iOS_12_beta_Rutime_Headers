/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier;

- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithThumbnailRequest:(id)arg1;

@end
