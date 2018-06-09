/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUISchedulerProvider : NSObject <CNSchedulerProvider> {
    <CNScheduler> * _afterCACommitScheduler;
    <CNSchedulerProvider> * _schedulerProvider;
    CNSuspendableSchedulerDecorator * _suspendableBackgroundScheduler;
}

@property (nonatomic, readonly) <CNScheduler> *afterCACommitScheduler;
@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *immediateScheduler;
@property (nonatomic, readonly) <CNScheduler> *inlineScheduler;
@property (nonatomic, readonly) <CNScheduler> *mainThreadScheduler;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *suspendableBackgroundScheduler;

+ (id)makeBackgroundScheduler;

- (void).cxx_destruct;
- (id)afterCACommitScheduler;
- (id)backgroundScheduler;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)immediateScheduler;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)inlineScheduler;
- (id)mainThreadScheduler;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (id)newSerialSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;
- (void)resumeBackgroundScheduler;
- (id)schedulerProvider;
- (void)suspendBackgroundScheduler;
- (id)suspendableBackgroundScheduler;

@end
