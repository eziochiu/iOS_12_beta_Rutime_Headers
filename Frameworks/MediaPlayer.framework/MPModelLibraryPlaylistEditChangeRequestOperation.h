/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation {
    id /* block */  _completeResponseHandler;
    id /* block */  _localPersistenceResponseHandler;
    MPModelLibraryPlaylistEditChangeRequest * _request;
}

@property (nonatomic, copy) id /* block */ completeResponseHandler;
@property (nonatomic, copy) id /* block */ localPersistenceResponseHandler;
@property (nonatomic, copy) MPModelLibraryPlaylistEditChangeRequest *request;

+ (id)requiredPlaylistEntryProperties;

- (void).cxx_destruct;
- (bool)_isCloudLibraryEnabled;
- (id /* block */)completeResponseHandler;
- (void)execute;
- (id /* block */)localPersistenceResponseHandler;
- (id)request;
- (void)setCompleteResponseHandler:(id /* block */)arg1;
- (void)setLocalPersistenceResponseHandler:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end
