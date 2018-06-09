/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCDocumentCameraViewController : UINavigationController {
    <DCDocumentCameraViewControllerDelegate> * _docCamDelegate;
}

@property (nonatomic) <DCDocumentCameraViewControllerDelegate> *docCamDelegate;

+ (id)defaultViewControllerWithDelegate:(id)arg1;
+ (id)inProcessViewControllerWithDelegate:(id)arg1;
+ (bool)isAvailable;
+ (id)viewServiceViewControllerWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)docCamDelegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 rootViewController:(id)arg2;
- (void)setDocCamDelegate:(id)arg1;

@end
