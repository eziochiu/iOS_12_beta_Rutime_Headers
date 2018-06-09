/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUCellConfiguration : NSObject

+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(bool)arg5;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(bool)arg5;
+ (void)configureCellForSizing:(id)arg1;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(bool)arg5;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3;
+ (double)expandedTableViewCellHeight;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (id)mediaEntityPropertiesToFetch;
+ (id)reuseIdentifier;
+ (id)tableViewBackgroundColor;
+ (id)tableViewCellBackgroundColor;
+ (Class)tableViewCellClass;
+ (double)tableViewCellHeight;
+ (id)tableViewSeparatorColor;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tableViewSeparatorInset;
+ (long long)tableViewSeparatorStyle;
+ (bool)wantsScrollViewDidEndDecelerating;
+ (bool)wantsScrollViewDidScroll;
+ (bool)wantsScrollViewDidScrollInScrollView;
+ (void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned long long)arg4;

@end
