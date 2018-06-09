/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentNavigationPreview : NSObject {
    <SXWebContentNavigationHandler> * _navigationHandler;
    NSURLRequest * _request;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) <SXWebContentNavigationHandler> *navigationHandler;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;
- (id)navigationHandler;
- (id)request;
- (id)viewController;

@end
