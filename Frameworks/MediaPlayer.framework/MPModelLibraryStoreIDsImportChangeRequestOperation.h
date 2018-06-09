/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation {
    MPMediaLibrary * _mediaLibrary;
    id /* block */  _responseHandler;
    bool  _shouldLibraryAdd;
    NSArray * _storeIDs;
}

@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool shouldLibraryAdd;
@property (nonatomic, copy) NSArray *storeIDs;

- (void).cxx_destruct;
- (void)execute;
- (id)mediaLibrary;
- (id /* block */)responseHandler;
- (void)setMediaLibrary:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldLibraryAdd:(bool)arg1;
- (void)setStoreIDs:(id)arg1;
- (bool)shouldLibraryAdd;
- (id)storeIDs;

@end
