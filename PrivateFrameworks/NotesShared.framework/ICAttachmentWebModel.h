/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentWebModel : ICAttachmentModel {
    id /* block */  _pendingFetchCompletionHandler;
    id  _reservedForWebView;
}

@property (copy) id /* block */ pendingFetchCompletionHandler;
@property (retain) id reservedForWebView;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)hasPreviews;
- (id /* block */)pendingFetchCompletionHandler;
- (id)reservedForWebView;
- (void)setPendingFetchCompletionHandler:(id /* block */)arg1;
- (void)setReservedForWebView:(id)arg1;
- (bool)showThumbnailInNoteList;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)sharedWKProcessPool;

- (void)didCancelPreviewGeneratorOperation;
- (void)downloadWebIcons:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMetadataFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)generateAsynchronousPreviews;
- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;
- (void)parseWebQueryResults:(id)arg1 title:(id*)arg2 description:(id*)arg3 webIcons:(id*)arg4;
- (id)rootURLFromURL:(id)arg1;
- (void)saveWebIcons:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)standardWebIconsForURL:(id)arg1;
- (void)updateFromWebQueryResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePreviewsWithWebIcons:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;

@end
