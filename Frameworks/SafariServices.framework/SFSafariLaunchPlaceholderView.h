/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {
    UIToolbar * _bottomToolbar;
    double  _topLayoutGuideInset;
    UINavigationBar * _topNavigationBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topLayoutGuideInset;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)setTopLayoutGuideInset:(double)arg1;
- (double)topLayoutGuideInset;
- (void)updateBarTintColor:(id)arg1;

@end
