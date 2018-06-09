/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotatedItemListViewController : UIViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    UIViewController * _annotatedItemListViewController;
    GEOMapItemAttribution * _attribution;
    UIView * _bottomHairlineSeparator;
    NSString * _headerTitle;
    UIView * _topHairlineSeparator;
}

@property (nonatomic, readonly) UIViewController *annotatedItemListViewController;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (nonatomic, readonly) UIView *bottomHairlineSeparator;
@property (getter=isBottomSeparatorHidden, nonatomic) bool bottomSeparatorHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *headerTitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *topHairlineSeparator;
@property (getter=isTopSeparatorHidden, nonatomic) bool topSeparatorHidden;

- (void).cxx_destruct;
- (id)annotatedItemListViewController;
- (id)attribution;
- (id)bottomHairlineSeparator;
- (id)headerTitle;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithChildViewController:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (id)initWithPictureItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (id)initWithTextItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (bool)isBottomSeparatorHidden;
- (bool)isTopSeparatorHidden;
- (void)openAttribution;
- (void)setBottomSeparatorHidden:(bool)arg1;
- (void)setTopSeparatorHidden:(bool)arg1;
- (id)topHairlineSeparator;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLoad;

@end
