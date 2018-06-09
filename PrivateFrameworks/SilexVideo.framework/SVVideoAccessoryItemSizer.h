/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryItemSizer : NSObject <SVVideoAccessoryItemSizing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize { double x1; double x2; })arg2 itemSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize { double x1; double x2; })arg2 itemSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;

@end
