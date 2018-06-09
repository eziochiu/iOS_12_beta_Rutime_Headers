/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LibraryManager : NSObject {
    ML3MusicLibrary * _currentLibrary;
}

@property (nonatomic, retain) ML3MusicLibrary *currentLibrary;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1;
- (void)_setupNotifications;
- (void)_switchToLibrary:(id)arg1;
- (void)_teardownNotifications;
- (id)currentLibrary;
- (void)dealloc;
- (id)init;
- (id)libraryForAccount:(id)arg1;
- (id)pathToLibraryForAccount:(id)arg1;
- (void)setCurrentLibrary:(id)arg1;

@end
