/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding> {
    bool  __unitTest_disableExcludingSourceApplicationFromOpenActivities;
    NSArray * _activityItemValueClassNames;
    NSArray * _activityItemValueExtensionMatchingDictionaries;
    NSArray * _activityTypeOrder;
    NSArray * _activityTypesToCreateInShareService;
    bool  _allowsEmbedding;
    bool  _canExcludeExtensionActivities;
    bool  _canShowShareSheetPlugIns;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    NSArray * _hostActivityConfigurations;
    NSArray * _includedActivityTypes;
    double  _preferredWidth;
    UISUISecurityContext * _securityScopedURLsForMatching;
    bool  _shouldExcludeiCloudAddToDriveActivity;
    bool  _shouldExcludeiCloudSharingActivity;
    bool  _shouldMatchOnlyUserElectedExtensions;
    bool  _shouldPresentAirDropSection;
    bool  _sourceIsManaged;
}

@property (nonatomic, readonly) bool _unitTest_disableExcludingSourceApplicationFromOpenActivities;
@property (nonatomic, retain) NSArray *activityItemValueClassNames;
@property (nonatomic, retain) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (nonatomic, retain) NSArray *activityTypeOrder;
@property (nonatomic, retain) NSArray *activityTypesToCreateInShareService;
@property (nonatomic) bool allowsEmbedding;
@property (nonatomic) bool canExcludeExtensionActivities;
@property (nonatomic) bool canShowShareSheetPlugIns;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, retain) NSArray *excludedActivityTypes;
@property (nonatomic, retain) NSArray *hostActivityConfigurations;
@property (nonatomic, retain) NSArray *includedActivityTypes;
@property (nonatomic) double preferredWidth;
@property (nonatomic, retain) UISUISecurityContext *securityScopedURLsForMatching;
@property (nonatomic) bool shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) bool shouldExcludeiCloudSharingActivity;
@property (nonatomic) bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) bool shouldPresentAirDropSection;
@property (nonatomic) bool sourceIsManaged;

+ (void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3;
- (bool)_unitTest_disableExcludingSourceApplicationFromOpenActivities;
- (id)activityItemValueClassNames;
- (id)activityItemValueExtensionMatchingDictionaries;
- (id)activityTypeOrder;
- (id)activityTypesToCreateInShareService;
- (bool)allowsEmbedding;
- (id)availableActivityItemValueClasses;
- (bool)canExcludeExtensionActivities;
- (bool)canShowShareSheetPlugIns;
- (id)contextForMatchingByActivityItemValueClasses;
- (id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)hostActivityConfigurations;
- (id)includedActivityTypes;
- (id)initWithCoder:(id)arg1;
- (double)preferredWidth;
- (id)securityScopedURLsForMatching;
- (void)setActivityItemValueClassNames:(id)arg1;
- (void)setActivityItemValueExtensionMatchingDictionaries:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityTypesToCreateInShareService:(id)arg1;
- (void)setAllowsEmbedding:(bool)arg1;
- (void)setCanExcludeExtensionActivities:(bool)arg1;
- (void)setCanShowShareSheetPlugIns:(bool)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setHostActivityConfigurations:(id)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setSecurityScopedURLsForMatching:(id)arg1;
- (void)setShouldExcludeiCloudAddToDriveActivity:(bool)arg1;
- (void)setShouldExcludeiCloudSharingActivity:(bool)arg1;
- (void)setShouldMatchOnlyUserElectedExtensions:(bool)arg1;
- (void)setShouldPresentAirDropSection:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)shouldExcludeiCloudAddToDriveActivity;
- (bool)shouldExcludeiCloudSharingActivity;
- (bool)shouldMatchOnlyUserElectedExtensions;
- (bool)shouldPresentAirDropSection;
- (bool)sourceIsManaged;

@end
