/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheBasicFileIdentifier *fileIdentifier;

- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithThumbnailRequest:(id)arg1;

@end
