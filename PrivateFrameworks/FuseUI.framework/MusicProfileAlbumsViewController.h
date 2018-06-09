/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {
    bool  _collapseSections;
    MusicLibraryAlbumsViewConfiguration * _libraryAlbumsViewConfiguration;
}

@property (nonatomic, readonly) MusicLibraryAlbumsViewConfiguration *libraryAlbumsViewConfiguration;

- (void).cxx_destruct;
- (void)_setCollapseSections:(bool)arg1;
- (void)_updateCollapseSections;
- (long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (id)libraryAlbumsViewConfiguration;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewDataDidReload;
- (void)viewDidLoad;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end
