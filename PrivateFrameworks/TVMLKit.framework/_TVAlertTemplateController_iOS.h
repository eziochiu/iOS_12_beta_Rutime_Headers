/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAlertTemplateController_iOS : UIViewController {
    NSMutableArray * _additionalLabels;
    UIAlertController * _alertController;
    NSArray * _buttonElements;
    TVImageProxy * _imageProxy;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSString * _message;
    NSString * _title;
}

- (void).cxx_destruct;
- (void)_dismissAlertControllerAnimated:(bool)arg1;
- (void)_presentAlertController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)updateWithTemplateElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
