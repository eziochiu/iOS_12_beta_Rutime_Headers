/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationService : NSObject {
    <FBUIApplicationServiceDelegate> * _delegate;
    FBSSerialQueue * _queue;
}

@property (nonatomic) <FBUIApplicationServiceDelegate> *delegate;
@property (nonatomic, readonly) FBSSerialQueue *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(id /* block */)arg2;
- (void)handleApplication:(id)arg1 setBadgeValue:(id)arg2;
- (void)handleDeleteAllSnapshotsForApplication:(id)arg1;
- (void)handleSuspendApplicationProcess:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;

@end
