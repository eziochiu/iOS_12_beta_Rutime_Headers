/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListAssetCollectionItem : NSObject <PXNavigationListItem> {
    PHAssetCollection * _collection;
    long long  _indentationLevel;
    long long  _itemCount;
    NSString * m_formattedCount;
    long long  m_previousItemCount;
}

@property (nonatomic, readonly) NSString *accessoryTitle;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, readonly) long long itemCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *visualDescription;

- (void).cxx_destruct;
- (id)accessoryTitle;
- (const struct __CFString { }*)aggregateDictionaryKey;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageName;
- (long long)indentationLevel;
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNavigationListAssetCollectionItem:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (long long)itemCount;
- (void)setIndentationLevel:(long long)arg1;
- (id)title;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1;
- (id)visualDescription;

@end
