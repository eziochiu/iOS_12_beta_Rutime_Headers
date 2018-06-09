/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController> {
    CCUIButtonModuleView * _buttonModuleView;
    bool  _expanded;
}

@property (nonatomic, readonly) CCUIButtonModuleView *buttonView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectedGlyphColor;
@property (nonatomic, retain) UIImage *selectedGlyphImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)buttonView;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (id)glyphColor;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (bool)isExpanded;
- (bool)isSelected;
- (double)preferredExpandedContentHeight;
- (id)selectedGlyphColor;
- (id)selectedGlyphImage;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedGlyphColor:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)viewDidLoad;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
