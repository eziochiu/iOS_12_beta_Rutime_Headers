/* made by EzioChiu.
 */

@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider, NSTextContainerView>

@required

- (void)invalidateTextContainerOrigin;
- (bool)isHorizontallyResizable;
- (struct CGSize { double x1; double x2; })minSize;
- (void)setConstrainedFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@optional

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (NSDictionary *)markedTextStyle;
- (void)setMarkedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextContainer:(NSTextContainer *)arg1;
- (NSTextContainer *)textContainer;

@end
