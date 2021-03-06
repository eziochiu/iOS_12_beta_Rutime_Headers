/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXCMMInvitationGadgetDelegate, PXCMMWorkflowCoordinatorDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    UIColor * _backgroundColor;
    PXCMMInvitationsDataSource * _dataSource;
    PXCMMInvitationsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    <PXCMMInvitation> * _invitationForWorkflow;
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)_performAcceptForInvitationGadget:(id)arg1;
- (void)_performReceiveForInvitationGadget:(id)arg1;
- (void)_performReviewForInvitationGadget:(id)arg1;
- (void)_reportFailureWithTitle:(id)arg1 message:(id)arg2 invitationGadget:(id)arg3;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)_workflowCoordinator;
- (id)backgroundColor;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)invitationForGadget:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)presentInvitationGadget:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end
