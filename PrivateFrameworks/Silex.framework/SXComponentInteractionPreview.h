/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInteractionPreview : NSObject {
    SXComponentInteraction * _interaction;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) SXComponentInteraction *interaction;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithInteraction:(id)arg1 viewController:(id)arg2;
- (id)interaction;
- (id)viewController;

@end
