/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1 {
    double  _minimumTextIndentation;
}

@property (nonatomic) double minimumTextIndentation;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedTextFrameWithOriginalTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCell:(id)arg2;
- (double)minimumTextIndentation;
- (void)setMinimumTextIndentation:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;

@end
