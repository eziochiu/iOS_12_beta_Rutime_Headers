/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditRoomViewController : HUItemTableViewController <HUWallpaperEditingViewControllerDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperThumbnailCellDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate> {
    <HUEditRoomViewControllerAddRoomDelegate> * _addRoomDelegate;
    HUEditableTextCell * _nameCell;
    <HUEditRoomViewControllerPresentationDelegate> * _presentationDelegate;
    HFRoomBuilder * _roomBuilder;
    HUEditRoomItemManager * _roomItemManager;
    UIBarButtonItem * _savedButtonBarItem;
    HUZoneModuleController * _zoneModuleController;
}

@property (nonatomic, readonly) <HUEditRoomViewControllerAddRoomDelegate> *addRoomDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HUEditableTextCell *nameCell;
@property (nonatomic, readonly) <HUEditRoomViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) HFRoomBuilder *roomBuilder;
@property (nonatomic) HUEditRoomItemManager *roomItemManager;
@property (nonatomic, retain) UIBarButtonItem *savedButtonBarItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUZoneModuleController *zoneModuleController;

- (void).cxx_destruct;
- (id)_allTextFields;
- (void)_resignTextFieldFirstResponder;
- (void)addButtonPressed:(id)arg1;
- (id)addRoomDelegate;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3;
- (id)itemModuleControllers;
- (id)nameCell;
- (void)nameFieldTextChanged:(id)arg1;
- (id)presentationDelegate;
- (id)roomBuilder;
- (id)roomItemManager;
- (id)savedButtonBarItem;
- (void)setNameCell:(id)arg1;
- (void)setRoomItemManager:(id)arg1;
- (void)setSavedButtonBarItem:(id)arg1;
- (void)setZoneModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)updateTitle;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (id)zoneModuleController;

@end
