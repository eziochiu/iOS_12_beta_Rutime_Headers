/* made by EzioChiu.
 */

@protocol IMPreviewGeneratorProtocol

@required

+ (NSURL *)generateAndPersistPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (double)maxUpScale;
+ (struct CGImage { }*)newPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (NSString *)previewExtension;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;
+ (bool)writesToDisk;

@end
