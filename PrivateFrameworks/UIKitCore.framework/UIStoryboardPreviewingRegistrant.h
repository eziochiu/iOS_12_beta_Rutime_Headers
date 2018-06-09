/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {
    <UIViewControllerPreviewing> * _previewingContext;
    UIStoryboardPreviewingSegueTemplateStorage * _segueTemplateStorage;
    UIView * _sourceView;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)registerForPreviewing;
- (void)setSourceView:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)sourceView;
- (void)unregisterForPreviewing;
- (id)viewController;

@end
