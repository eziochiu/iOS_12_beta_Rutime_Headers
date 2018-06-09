/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRootViewModel : NSObject {
    NSArray * _children;
    NSArray * _devices;
    STUser * _me;
    NSArray * _selectedDevices;
}

@property (nonatomic, readonly) bool canClearUsageData;
@property (nonatomic, readonly) bool canRemoveAllowances;
@property (nonatomic, readonly) bool canSetUpFamily;
@property (nonatomic, readonly) bool canSignIn;
@property (nonatomic, readonly) bool canStartScreenTime;
@property (nonatomic, readonly) bool canStopScreenTime;
@property (nonatomic, readonly) bool canStopSharingScreenTime;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) STUser *me;
@property (nonatomic, readonly, copy) NSArray *otherDevices;
@property (getter=isScreenTimeEnabled, nonatomic, readonly) bool screenTimeEnabled;
@property (nonatomic, copy) NSArray *selectedDevices;

+ (id)keyPathsForValuesAffectingCanClearUsageData;
+ (id)keyPathsForValuesAffectingCanRemoveAllowances;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingCanSignIn;
+ (id)keyPathsForValuesAffectingCanStartScreenTime;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;

- (void).cxx_destruct;
- (bool)canClearUsageData;
- (bool)canRemoveAllowances;
- (bool)canSetUpFamily;
- (bool)canSignIn;
- (bool)canStartScreenTime;
- (bool)canStopScreenTime;
- (bool)canStopSharingScreenTime;
- (id)children;
- (id)devices;
- (id)init;
- (bool)isScreenTimeEnabled;
- (id)me;
- (id)otherDevices;
- (id)selectedDevices;
- (void)setChildren:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setSelectedDevices:(id)arg1;

@end
