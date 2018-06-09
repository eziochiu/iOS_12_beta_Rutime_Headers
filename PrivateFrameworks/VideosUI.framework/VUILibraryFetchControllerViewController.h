/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryFetchControllerViewController : UIViewController {
    bool  _contentHasBeenDeleted;
    UIView * _contentView;
    UIView * _currentView;
    unsigned long long  _currentViewType;
    NSString * _deletedContentErrorMessage;
    NSArray * _fetchControllers;
    VUIMediaLibrary * _mediaLibrary;
    NSString * _noContentErrorMessage;
    NSString * _noContentErrorTitle;
    bool  _pausesFetchControllersAutomatically;
    UIView * _rootView;
}

@property (nonatomic) bool contentHasBeenDeleted;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *currentView;
@property (nonatomic) unsigned long long currentViewType;
@property (nonatomic, copy) NSString *deletedContentErrorMessage;
@property (nonatomic, copy) NSArray *fetchControllers;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSString *noContentErrorMessage;
@property (nonatomic, copy) NSString *noContentErrorTitle;
@property (nonatomic) bool pausesFetchControllersAutomatically;
@property (nonatomic, retain) UIView *rootView;

- (void).cxx_destruct;
- (id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2;
- (bool)contentHasBeenDeleted;
- (id)contentView;
- (id)currentView;
- (unsigned long long)currentViewType;
- (id)deletedContentErrorMessage;
- (id)fetchControllers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mediaLibrary;
- (id)noContentErrorMessage;
- (id)noContentErrorTitle;
- (bool)pausesFetchControllersAutomatically;
- (id)rootView;
- (void)setContentHasBeenDeleted:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentView:(id)arg1;
- (void)setCurrentViewType:(unsigned long long)arg1;
- (void)setDeletedContentErrorMessage:(id)arg1;
- (void)setFetchControllers:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setNoContentErrorMessage:(id)arg1;
- (void)setNoContentErrorTitle:(id)arg1;
- (void)setPausesFetchControllersAutomatically:(bool)arg1;
- (void)setRootView:(id)arg1;
- (void)startFetchControllers:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
