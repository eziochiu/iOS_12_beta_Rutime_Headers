/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVViewElementStyle : NSObject <NSCopying> {
    NSMutableDictionary * _cachedColorObjects;
    IKViewElementStyle * _style;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) TVColor *backgroundColor;
@property (nonatomic, readonly) TVColor *color;
@property (nonatomic, readonly) long long contentAlignment;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } focusMargin;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) NSString *fontWeight;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) TVColor *highlightColor;
@property (nonatomic, readonly) NSString *imageTreatmentName;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) unsigned long long maxTextLines;
@property (nonatomic, readonly) double maxWidth;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic, readonly) double minWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) NSString *ratingStyle;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) IKViewElementStyle *style;
@property (nonatomic, retain) TVAppStyle *styleMetrics;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) NSString *textHighlightStyle;
@property (nonatomic, readonly) double textMinimumScaleFactor;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) NSString *textTransform;
@property (nonatomic, readonly) TVColor *tintColor;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (long long)alignment;
- (id)backgroundColor;
- (id)color;
- (long long)contentAlignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cssValueForStyleProperty:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })focusMargin;
- (double)fontSize;
- (id)fontWeight;
- (double)height;
- (id)highlightColor;
- (id)imageTreatmentName;
- (id)initWithStyle:(id)arg1;
- (double)interitemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (double)maxHeight;
- (unsigned long long)maxTextLines;
- (double)maxWidth;
- (double)minHeight;
- (double)minWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (long long)position;
- (id)ratingStyle;
- (void)setStyleMetrics:(id)arg1;
- (id)shadow;
- (id)style;
- (id)styleMetrics;
- (long long)textAlignment;
- (id)textHighlightStyle;
- (double)textMinimumScaleFactor;
- (id)textStyle;
- (id)textTransform;
- (id)tintColor;
- (id)valueForStyleProperty:(id)arg1;
- (double)width;

@end
