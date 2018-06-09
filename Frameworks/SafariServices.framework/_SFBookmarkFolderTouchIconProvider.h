/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    WebBookmarkCollection * _collection;
}

- (void).cxx_destruct;
- (void)_folderContentsDidChange:(id)arg1;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)init;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;

@end
