/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKLabelItem : NSObject <TLKGridArrangementItem> {
    TLKFormattedText * _formattedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  columnRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  frame;
    double  horizontalCompressionResistance;
    double  horizontalHuggingPriority;
    unsigned long long  row;
    NUISizeCache * sizeCache;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property TLKFormattedText *formattedText;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property double horizontalCompressionResistance;
@property double horizontalHuggingPriority;
@property unsigned long long row;
@property (retain) NUISizeCache *sizeCache;
@property (readonly) Class superclass;

+ (id)font;
+ (void)initialize;
+ (double)minimumWidthForLabelItem;
+ (void)setFontValues;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (id)description;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (id)formattedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)horizontalCompressionResistance;
- (double)horizontalHuggingPriority;
- (id)init;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (unsigned long long)row;
- (void)setColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFormattedText:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalCompressionResistance:(double)arg1;
- (void)setHorizontalHuggingPriority:(double)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSizeCache:(id)arg1;
- (id)sizeCache;
- (struct CGSize { double x1; double x2; })sizeForTargetSize:(struct CGSize { double x1; double x2; })arg1;

@end
