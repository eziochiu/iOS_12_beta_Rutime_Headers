/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary *attributes;
@property (copy) NSURL *contentURL;
@property (copy) NSString *contentUTI;
@property (copy) NSString *displayName;
@property (readonly, copy) NSString *localizedDisplayName;
@property (copy) NSString *secondaryDisplayName;
@property (copy) NSData *thumbnailImageData;
@property (copy) NSURL *thumbnailURL;

+ (bool)supportsSecureCoding;

- (void)_standardizeDeprecatedProperties:(id)arg1;
- (id)attributes;
- (id)contentURL;
- (id)contentUTI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3;
- (id)localizedDisplayName;
- (id)secondaryDisplayName;
- (void)setAttributes:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setContentUTI:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSecondaryDisplayName:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)thumbnailImageData;
- (id)thumbnailURL;

@end
