/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicAlbumTracklistTableViewHeaderFooterView : MusicEntityHorizontalLockupTableViewHeaderFooterView

@property (nonatomic) double leadingTextColumnWidth;

+ (Class)lockupViewClass;

- (id)initWithReuseIdentifier:(id)arg1;
- (double)leadingTextColumnWidth;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLeadingTextColumnWidth:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
