/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailUtilities : NSObject

+ (int)_bytesPerRowForWidthInPixels:(int)arg1;
+ (id)_destinationDataArrayFromSpecifications:(id)arg1;
+ (id)_destinationDataFromSpecification:(id)arg1;
+ (bool)_performSWDownscaleTo5551OnSourceImage:(struct CGImage { }*)arg1 withSourceDimensions:(struct { int x1; int x2; })arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 bytesPerRow:(int*)arg6;
+ (int)_requiredDataLengthForSpecification:(id)arg1;
+ (bool)_validateSpecification:(id)arg1 destinationData:(id*)arg2;
+ (bool)_validateSpecifications:(id)arg1 destinationData:(id*)arg2;
+ (bool)performHWCascadingDownscaleTo5551OnIOSurface:(struct __IOSurface { }*)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 usingContext:(id)arg4;
+ (bool)performSWCascadingDownscaleTo5551OnImage:(struct CGImage { }*)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3;
+ (bool)performSWDownscaleTo5551OnImage:(struct CGImage { }*)arg1 withSpecification:(id)arg2 destinationData:(id*)arg3 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 bytesPerRow:(int*)arg5;

@end
