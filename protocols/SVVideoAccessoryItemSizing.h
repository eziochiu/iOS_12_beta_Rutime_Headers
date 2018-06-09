/* made by EzioChiu.
 */

@protocol SVVideoAccessoryItemSizing <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;

@end
