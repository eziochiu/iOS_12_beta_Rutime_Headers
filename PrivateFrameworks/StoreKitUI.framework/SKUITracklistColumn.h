/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITracklistColumn : NSObject <NSCopying> {
    long long  _columnIdentifier;
    long long  _contentAlignment;
    long long  _headerAlignment;
    double  _maximumWidthFraction;
    double  _preferredWidth;
    bool  _showsPreviewControl;
    bool  _sizesToFit;
    double  _width;
}

@property (nonatomic) long long columnIdentifier;
@property (nonatomic) long long contentAlignment;
@property (nonatomic) long long headerAlignment;
@property (nonatomic) double maximumWidthFraction;
@property (nonatomic) double preferredWidth;
@property (nonatomic) bool showsPreviewControl;
@property (nonatomic) bool sizesToFit;
@property (nonatomic) double width;

- (long long)columnIdentifier;
- (long long)contentAlignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)headerAlignment;
- (double)maximumWidthFraction;
- (double)preferredWidth;
- (void)setColumnIdentifier:(long long)arg1;
- (void)setContentAlignment:(long long)arg1;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setMaximumWidthFraction:(double)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setPreferredWidthForAttributedStrings:(id)arg1;
- (void)setShowsPreviewControl:(bool)arg1;
- (void)setSizesToFit:(bool)arg1;
- (void)setWidth:(double)arg1;
- (bool)showsPreviewControl;
- (bool)sizesToFit;
- (double)width;

@end
