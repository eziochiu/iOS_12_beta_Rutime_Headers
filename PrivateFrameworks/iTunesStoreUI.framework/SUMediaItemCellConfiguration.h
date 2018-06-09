/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, readonly) long long mediaIconType;
@property (nonatomic, readonly) bool showContentRating;

+ (id)copyDefaultContext;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_ratingBorderInsets;
- (double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3;
- (double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)copyImageDataProvider;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (long long)mediaIconType;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (bool)showContentRating;

@end
