/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {
    ML3MusicLibrary * _library;
    NSString * _libraryPath;
    NSMutableArray * _notificationObservers;
    NSMutableOrderedSet * _queuedDistributedNotificationNames;
    NSMutableOrderedSet * _queuedLocalNotifications;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_observerForDistributedName:(id)arg1;
- (id)_observerForLocalName:(id)arg1;
- (void)_postEnqueuedDistributedNotifications;
- (void)_postEnqueuedLocalNotifications;
- (void)addObserverForDistributedName:(id)arg1 localName:(id)arg2;
- (void)enqueueDistributedNotificationNamed:(id)arg1;
- (void)enqueueLocalNotification:(id)arg1;
- (void)enqueueLocalNotificationNamed:(id)arg1;
- (id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2;
- (id)library;
- (bool)observerShouldForwardDistributedNotification:(id)arg1;
- (void)removeObserverWithDistributedName:(id)arg1;
- (void)removeObserverWithLocalName:(id)arg1;

@end
