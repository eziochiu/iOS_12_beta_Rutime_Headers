/* made by EzioChiu.
 */

@protocol PUTopResultDelegate <NSObject>

@required

- (void)topResultContentView:(PUSearchTopResultContentView *)arg1 didSelectAssetIndex:(unsigned long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withNumberOfImages:(unsigned long long)arg4;

@end
