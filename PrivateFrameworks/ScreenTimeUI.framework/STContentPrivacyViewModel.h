/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STContentPrivacyViewModel : NSObject {
    bool  _includesLocalDevice;
    bool  _isLoaded;
    bool  _restrictionsEnabled;
    NSString * _userName;
    NSMutableDictionary * _valuesByRestriction;
    NSSet * _visibleRestrictions;
}

@property (nonatomic) bool includesLocalDevice;
@property (nonatomic) bool isLoaded;
@property (nonatomic) bool restrictionsEnabled;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) NSMutableDictionary *valuesByRestriction;
@property (nonatomic, copy) NSSet *visibleRestrictions;

- (void).cxx_destruct;
- (id)defaultValueForRestriction:(id)arg1;
- (bool)includesLocalDevice;
- (id)init;
- (bool)isLoaded;
- (bool)restrictionsEnabled;
- (void)setIncludesLocalDevice:(bool)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setRestrictionsEnabled:(bool)arg1;
- (void)setUserName:(id)arg1;
- (void)setValuesByRestriction:(id)arg1;
- (void)setVisibleRestrictions:(id)arg1;
- (id)userName;
- (id)valuesByRestriction;
- (id)visibleRestrictionWithConfiguration:(id)arg1 key:(id)arg2;
- (id)visibleRestrictions;

@end
