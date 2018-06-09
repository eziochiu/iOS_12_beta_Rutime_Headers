/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    struct __CFDictionary { } * _headerWidthDict;
    NSMutableIndexSet * _invalidatedSections;
}

@property (nonatomic, readonly) NSIndexSet *invalidatedSections;

- (void)dealloc;
- (id)invalidatedSections;
- (double)preferredWidthForHeaderInSection:(long long)arg1;

@end
