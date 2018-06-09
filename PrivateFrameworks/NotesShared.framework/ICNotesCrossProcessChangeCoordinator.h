/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNotesCrossProcessChangeCoordinator : NSObject {
    bool  _asApplication;
    NSManagedObjectContext * _destinationContext;
    int  _notifyToken;
    NSPersistentStoreCoordinator * _sourceCoordinator;
}

@property (nonatomic) bool asApplication;
@property (nonatomic, retain) NSManagedObjectContext *destinationContext;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSPersistentStoreCoordinator *sourceCoordinator;

- (void).cxx_destruct;
- (bool)asApplication;
- (void)dealloc;
- (id)destinationContext;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2 asApplication:(bool)arg3;
- (int)notifyToken;
- (void)postAccountDidChangeNotification;
- (void)postCrossProcessNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(id /* block */)arg2;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)setAsApplication:(bool)arg1;
- (void)setDestinationContext:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setSourceCoordinator:(id)arg1;
- (id)sourceCoordinator;

@end
