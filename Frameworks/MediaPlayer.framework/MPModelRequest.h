/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding> {
    MPModelKind * _itemKind;
    MPPropertySet * _itemProperties;
    NSArray * _itemSortDescriptors;
    NSString * _label;
    MPModelKind * _sectionKind;
    MPPropertySet * _sectionProperties;
    NSArray * _sectionSortDescriptors;
    bool  _shouldIncludeContentItemID;
}

@property (nonatomic, retain) Class itemClass;
@property (nonatomic, retain) MPModelKind *itemKind;
@property (nonatomic, copy) MPPropertySet *itemProperties;
@property (nonatomic, copy) NSArray *itemSortDescriptors;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) Class sectionClass;
@property (nonatomic, retain) MPModelKind *sectionKind;
@property (nonatomic, copy) MPPropertySet *sectionProperties;
@property (nonatomic, copy) NSArray *sectionSortDescriptors;
@property (nonatomic) bool shouldIncludeContentItemID;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)sharedQueue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_kindForClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)itemClass;
- (id)itemKind;
- (id)itemProperties;
- (id)itemSortDescriptors;
- (id)label;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (Class)sectionClass;
- (id)sectionKind;
- (id)sectionProperties;
- (id)sectionSortDescriptors;
- (void)setItemClass:(Class)arg1;
- (void)setItemKind:(id)arg1;
- (void)setItemProperties:(id)arg1;
- (void)setItemSortDescriptors:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSectionClass:(Class)arg1;
- (void)setSectionKind:(id)arg1;
- (void)setSectionProperties:(id)arg1;
- (void)setSectionSortDescriptors:(id)arg1;
- (void)setShouldIncludeContentItemID:(bool)arg1;
- (bool)shouldIncludeContentItemID;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(id /* block */)arg2;

- (id)playbackIntentWithStartItemIdentifiers:(id)arg1;

@end
