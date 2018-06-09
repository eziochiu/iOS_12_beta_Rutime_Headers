/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding> {
    FPItem * _fileProviderItem;
    bool  _isFPV2;
    bool  _needsToResolveHierarchy;
    NSString * _promptText;
    NSString * _sourceIdentifier;
    NSArray * _tags;
    NSString * _title;
}

@property (retain) FPItem *fileProviderItem;
@property bool isFPV2;
@property bool needsToResolveHierarchy;
@property (copy) NSString *promptText;
@property (copy) NSString *sourceIdentifier;
@property (readonly, copy) NSArray *tags;
@property (copy) NSString *title;

+ (id)defaultLocation;
+ (id)defaultSaveLocation;
+ (id)emptyLocation;
+ (id)recentDocumentsLocation;
+ (id)recentsLocation;
+ (id)searchLocation;
+ (id)sharedItemsLocation;
+ (bool)supportsSecureCoding;
+ (id)trashedItemsLocation;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 fileProviderItem:(id)arg2;
- (id)initWithTags:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFPV2;
- (bool)needsToResolveHierarchy;
- (id)promptText;
- (void)setFileProviderItem:(id)arg1;
- (void)setIsFPV2:(bool)arg1;
- (void)setNeedsToResolveHierarchy:(bool)arg1;
- (void)setPromptText:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceIdentifier;
- (id)tags;
- (id)title;

@end
