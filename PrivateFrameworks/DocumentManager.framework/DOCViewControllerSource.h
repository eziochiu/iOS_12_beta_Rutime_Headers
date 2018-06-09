/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCViewControllerSource : DOCDocumentSource {
    <DOCSourceViewControllerProviding> * _provider;
    UIViewController * _viewController;
}

@property (readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithViewControllerProvider:(id)arg1;
- (id)viewController;

@end
