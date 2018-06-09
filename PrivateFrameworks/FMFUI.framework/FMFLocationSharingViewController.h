/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal> {
    NSArray * _allFollowersHandles;
    NSMutableDictionary * _dsidToFamilyPhoto;
    NSArray * _familyMembers;
    NSArray * _familySpecifiers;
    NSArray * _followersHandles;
    NSArray * _followersSpecifiers;
    UIAlertController * _genericErrorAlert;
    NSArray * _hashedFamilyDsids;
    bool  _isMyLocationEnabled;
    FMFHandle * _lastSelectedHandle;
    bool  _useFamilyCirclePhotos;
    bool  _useFamilyCirclePhotosLoaded;
}

@property (nonatomic, retain) NSArray *allFollowersHandles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dsidToFamilyPhoto;
@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, retain) NSArray *familySpecifiers;
@property (nonatomic, retain) NSArray *followersHandles;
@property (nonatomic, retain) NSArray *followersSpecifiers;
@property (nonatomic, retain) UIAlertController *genericErrorAlert;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hashedFamilyDsids;
@property (nonatomic) bool isMyLocationEnabled;
@property (nonatomic, retain) FMFHandle *lastSelectedHandle;
@property (readonly) Class superclass;
@property (nonatomic) bool useFamilyCirclePhotos;
@property (nonatomic) bool useFamilyCirclePhotosLoaded;

- (void).cxx_destruct;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (bool)_isFamilyMemberAFollower:(id)arg1;
- (bool)_isHandleAFollower:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(bool)arg1;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_specifierForFamilyMember:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (void)addRemoveActionToContactViewController:(id)arg1;
- (void)addShareActionToContactViewController:(id)arg1;
- (id)allFollowersHandles;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didUpdateHidingStatus:(bool)arg1;
- (void)displayAlertController:(id)arg1;
- (id)dsidToFamilyPhoto;
- (id)familyMembers;
- (id)familySpecifiers;
- (id)followersHandles;
- (id)followersSpecifiers;
- (id)formatStringForHours:(long long)arg1 minutes:(long long)arg2;
- (id)genericAlertController;
- (id)genericErrorAlert;
- (id)hashedFamilyDsids;
- (id)identifierForHandle:(id)arg1;
- (bool)isMyLocationEnabled;
- (id)lastSelectedHandle;
- (id)monogramForHandle:(id)arg1;
- (void)networkReachabilityUpdated:(bool)arg1;
- (bool)noMeDeviceSelected:(id)arg1;
- (id)offerTimeRemaining:(double)arg1;
- (bool)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (void)reloadSpecifiersOnMainQueue;
- (void)removeFollower:(id)arg1;
- (id)reverseString:(id)arg1;
- (void)setAllFollowersHandles:(id)arg1;
- (void)setDsidToFamilyPhoto:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilySpecifiers:(id)arg1;
- (void)setFollowersHandles:(id)arg1;
- (void)setFollowersSpecifiers:(id)arg1;
- (void)setGenericErrorAlert:(id)arg1;
- (void)setHashedFamilyDsids:(id)arg1;
- (void)setIsMyLocationEnabled:(bool)arg1;
- (void)setLastSelectedHandle:(id)arg1;
- (void)setUseFamilyCirclePhotos:(bool)arg1;
- (void)setUseFamilyCirclePhotosLoaded:(bool)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (id)specifiers;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (bool)useFamilyCirclePhotos;
- (bool)useFamilyCirclePhotosLoaded;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
