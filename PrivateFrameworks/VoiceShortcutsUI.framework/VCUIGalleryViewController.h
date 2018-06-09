/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIGalleryViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, VCUIAppGalleryViewControllerDelegate, VCUICreateVoiceShortcutViewControllerDelegate, VCUIGalleryDataSourceDelegate, VCUIGallerySectionHeaderViewDelegate> {
    VCUIGalleryDataSource * _dataSource;
    <VCUIGalleryViewControllerDelegate> * _delegate;
    VCUIActionDonationCell * _prototypeCell;
    UISearchController * _searchController;
    UITableView * _tableView;
    VCVoiceShortcutClient * _voiceShortcutClient;
}

@property (nonatomic, retain) VCUIGalleryDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIGalleryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VCUIActionDonationCell *prototypeCell;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, readonly) VCVoiceShortcutClient *voiceShortcutClient;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setSeparatorInsets;
- (void)appGalleryViewControllerDidEnterStateSiriUnavailable:(id)arg1 withCreateVoiceShortcutViewController:(id)arg2;
- (void)appGalleryViewControllerDidFinish:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)galleryDataSourceDidUpdate:(id)arg1;
- (void)gallerySectionHeaderView:(id)arg1 didSelectSeeAllWithApplicationBundleIdentifier:(id)arg2;
- (id)initWithVoiceShortcutClient:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (id)prototypeCell;
- (id)searchController;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrototypeCell:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)voiceShortcutClient;

@end
