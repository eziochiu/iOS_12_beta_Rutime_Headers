/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTextItemContainerViewController : UIViewController {
    UIStackView * _stackView;
    <GEOTextItemContainer> * _textItemContainer;
    NSArray * _textItemViews;
}

@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, readonly) <GEOTextItemContainer> *textItemContainer;
@property (nonatomic, copy) NSArray *textItemViews;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithTextItemContainer:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTextItemViews:(id)arg1;
- (void)setupSubviews;
- (id)stackView;
- (id)textItemContainer;
- (id)textItemViews;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
