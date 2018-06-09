/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionViewManager : NSObject <SXActionViewManager> {
    <SXViewControllerPresenting> * _viewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenter;

- (void).cxx_destruct;
- (id)initWithViewControllerPresenting:(id)arg1;
- (void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 completion:(id /* block */)arg5;
- (id)viewControllerPresenter;

@end
