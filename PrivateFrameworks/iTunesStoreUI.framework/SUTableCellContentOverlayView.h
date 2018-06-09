/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableCellContentOverlayView : UIView {
    SUCellConfiguration * _configuration;
}

@property (nonatomic, retain) SUCellConfiguration *configuration;

- (id)configuration;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;

@end
