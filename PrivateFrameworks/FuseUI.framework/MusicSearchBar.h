/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchBar : UISearchBar

@property (nonatomic) <MusicSearchBarDelegate> *delegate;

- (bool)_isInBar;
- (void)layoutSubviews;

@end
