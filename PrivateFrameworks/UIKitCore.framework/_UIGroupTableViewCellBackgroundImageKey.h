/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _bottomShadowColor;
    UIColor * _fillColor;
    double  _leftPhase;
    bool  _opaque;
    double  _rightPhase;
    double  _screenScale;
    UIColor * _sectionBorderColor;
    double  _sectionBorderWidth;
    double  _sectionCornerRadius;
    int  _sectionLocation;
    bool  _selected;
    UIColor * _selectionColor;
    long long  _selectionStyle;
    UIColor * _separatorColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIColor * _topShadowColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *bottomShadowColor;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) double leftPhase;
@property (nonatomic) bool opaque;
@property (nonatomic) double rightPhase;
@property (nonatomic) double screenScale;
@property (nonatomic, retain) UIColor *sectionBorderColor;
@property (nonatomic) double sectionBorderWidth;
@property (nonatomic) double sectionCornerRadius;
@property (nonatomic) int sectionLocation;
@property (nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectionColor;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) UIColor *topShadowColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)bottomShadowColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fillColor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)leftPhase;
- (bool)opaque;
- (double)rightPhase;
- (double)screenScale;
- (id)sectionBorderColor;
- (double)sectionBorderWidth;
- (double)sectionCornerRadius;
- (int)sectionLocation;
- (bool)selected;
- (id)selectionColor;
- (long long)selectionStyle;
- (id)separatorColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLeftPhase:(double)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRightPhase:(double)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (void)setSectionBorderWidth:(double)arg1;
- (void)setSectionCornerRadius:(double)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionColor:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTopShadowColor:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)topShadowColor;

@end
