/* made by EzioChiu.
 */

@protocol DCDocumentCameraPublicViewController

@required

- (void)didCancel;
- (void)didFinishWithDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;

@end
