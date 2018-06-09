/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;

+ (unsigned long long)groupCountPerRowForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3;
+ (unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1;
+ (unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1;
+ (double)verticalMargin;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
