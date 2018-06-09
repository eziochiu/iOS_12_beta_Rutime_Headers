/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {
    NSMutableArray * _activeReaders;
    NSMutableArray * _activeWriters;
    NSMutableArray * _pendingReaders;
    NSMutableArray * _pendingWriters;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _suspended;
}

@property (nonatomic, readonly) NSMutableArray *activeReaders;
@property (nonatomic, readonly) NSMutableArray *activeWriters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *pendingReaders;
@property (nonatomic, readonly) NSMutableArray *pendingWriters;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)activateReader:(id)arg1;
- (void)activateWriter:(id)arg1;
- (id)activeReaders;
- (id)activeWriters;
- (void)addReaderWithIdentifier:(id)arg1;
- (void)addWriterWithIdentifier:(id)arg1;
- (void)appendDescriptionToBuilder:(id)arg1;
- (id)description;
- (id)init;
- (bool)isSuspended;
- (id)pendingReaders;
- (id)pendingWriters;
- (id)performReaderBlock:(id /* block */)arg1;
- (void)performSynchronousReaderBlock:(id /* block */)arg1;
- (void)performSynchronousWriterBlock:(id /* block */)arg1;
- (id)performWriterBlock:(id /* block */)arg1;
- (id)queue;
- (void)removeReader:(id)arg1;
- (void)removeWriter:(id)arg1;
- (void)resume;
- (void)setSuspended:(bool)arg1;
- (void)suspend;

@end
