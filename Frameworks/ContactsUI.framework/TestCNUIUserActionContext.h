/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext> {
    bool  _actionExecutionWasAttemted;
}

@property (nonatomic, readonly) <CNUIUserActionCurator> *actionCurator;
@property (nonatomic) bool actionExecutionWasAttemted;
@property (nonatomic, readonly) <CNUIUserActionRecorder> *actionRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIUserActionDialRequestOpener> *dialRequestOpener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNUIUserActionURLOpener> *urlOpener;
@property (nonatomic, readonly) <CNUIUserActionUserActivityOpener> *userActivityOpener;

- (id)actionCurator;
- (bool)actionExecutionWasAttemted;
- (id)actionRecorder;
- (id)dialRequestOpener;
- (id)nilValue;
- (void)setActionExecutionWasAttemted:(bool)arg1;
- (id)urlOpener;
- (id)userActivityOpener;

@end
