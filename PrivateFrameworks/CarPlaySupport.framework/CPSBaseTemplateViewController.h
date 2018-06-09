/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBaseTemplateViewController : UIViewController <CPBaseTemplateProviding, CPSButtonDelegate> {
    CPTemplate * _associatedTemplate;
    <CPTemplateDelegate> * _templateDelegate;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, readonly) CPTemplate *associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (id)_barButtonItemForIdentifier:(id)arg1;
- (void)_cps_viewControllerWasPopped;
- (void)_dismissTemplateViewController;
- (id)associatedTemplate;
- (void)didSelectButton:(id)arg1;
- (id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2;
- (void)setBarButton:(id)arg1 image:(id)arg2;
- (void)setBarButton:(id)arg1 title:(id)arg2;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)templateDelegate;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
