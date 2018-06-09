/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMAssetFormats : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeredRectForSourceSize:(struct CGSize { double x1; double x2; })arg1 destinationSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)formatSizeIsShortSide:(long long)arg1;
+ (long long)masterThumbnailFormat;
+ (struct CGSize { double x1; double x2; })scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 format:(long long)arg2 capLength:(bool)arg3;
+ (struct CGSize { double x1; double x2; })sizeForFormat:(long long)arg1;
+ (long long)wildcatStackFormat;

@end
