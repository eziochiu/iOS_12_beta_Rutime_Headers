/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {
    id  _realLayoutManager;
}

+ (id)sharedLayoutManagerForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (void)getTextLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 detailTextLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(bool)arg5;
- (id)initWithCellStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (bool)rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trailsOtherRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 byDistance:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;

@end
