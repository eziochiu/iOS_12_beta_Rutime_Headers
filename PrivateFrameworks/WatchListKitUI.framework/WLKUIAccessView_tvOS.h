/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAccessView_tvOS : UIView <TVCarouselViewDataSource, TVCarouselViewDelegate> {
    UIButton * _allowButton;
    NSArray * _apps;
    UILabel * _bodyLabel;
    UIStackView * _buttonStack;
    TVCarouselView * _carouselView;
    UILayoutGuide * _contentGuide;
    UIStackView * _contentStack;
    bool  _didLayout;
    UIButton * _disallowButton;
    UIStackView * _logoStack;
    UIButton * _nackButton;
    UIView * _privacyView;
    UIButton * _seeAllButton;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *privacyView;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })iconSize;

- (void).cxx_destruct;
- (id)_buildButtonStack;
- (id)_buildCarousel;
- (id)_buildLogoStack;
- (id)_imageViewForIndex:(unsigned long long)arg1;
- (id)allowButton;
- (id)bodyScroll;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)disallowButton;
- (id)initWithApps:(id)arg1;
- (void)layoutSubviews;
- (id)nackButton;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (id)privacyView;
- (id)seeAllButton;
- (void)setBody:(id)arg1;
- (void)setPrivacyView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showNackScreen;

@end
