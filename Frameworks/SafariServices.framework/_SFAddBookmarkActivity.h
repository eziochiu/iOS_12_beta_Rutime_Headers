/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController * _bookmarkNavigationController;
}

@property (nonatomic, readonly) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (id)bookmarkNavigationController;
- (bool)canPerformWithActivityItems:(id)arg1;

@end
