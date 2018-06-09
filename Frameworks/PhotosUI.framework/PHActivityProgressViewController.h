/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHActivityProgressViewController : UIViewController {
    double  _progress;
    PUActivityProgressController * _pu_activityProgressController;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_commonPHActivityProgressViewControllerInitialization;
- (id /* block */)cancellationHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)progress;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setProgress:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
