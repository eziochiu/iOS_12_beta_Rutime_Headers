/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LanguageResourceManager : NSObject {
    ML3LanguageResources * _cachedResources;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedResourceManager;

- (void).cxx_destruct;
- (id)_buildLanguageResources;
- (void)_fetchLanguageResourcesFromMediaLibraryService:(id /* block */)arg1;
- (void)fetchLanguageResourcesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateCachedResources;

@end
