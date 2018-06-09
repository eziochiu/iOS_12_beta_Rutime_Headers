/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchEntry : NSObject {
    PSSpecifierAction * _action;
    NSArray * _additionalDetailTextComponents;
    NSString * _bundleName;
    NSMutableSet * _childEntries;
    NSString * _groupName;
    PSSpecifier * _groupSpecifier;
    bool  _hasDetailController;
    bool  _hasListController;
    NSString * _identifier;
    bool  _isRootURL;
    bool  _isSection;
    NSMutableArray * _keywords;
    NSString * _manifestBundleName;
    NSString * _name;
    PSSearchEntry * _parentEntry;
    NSString * _plistName;
    NSString * _sectionIdentifier;
    PSSpecifier * _specifier;
    NSURL * _url;
}

@property (nonatomic, retain) PSSpecifierAction *action;
@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic, readonly) NSMutableSet *childEntries;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isRootURL;
@property (nonatomic, readonly) NSMutableArray *keywords;
@property (nonatomic, copy) NSString *manifestBundleName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) PSSearchEntry *parentEntry;
@property (nonatomic, copy) NSString *plistName;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly) PSSpecifier *specifier;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)schemeNameOverride;
+ (void)setSchemeNameOverride:(id)arg1;

- (void).cxx_destruct;
- (id)_prefsURLIsRoot:(bool*)arg1;
- (bool)_specifier:(id)arg1 hasDetailController:(bool)arg2;
- (id)action;
- (id)ancestorEntries;
- (id)bundleName;
- (id)childEntries;
- (id)debugDescription;
- (id)description;
- (id)detailTextWithEffectiveTitle:(id*)arg1;
- (bool)finishIndexing;
- (id)groupName;
- (id)groupSpecifier;
- (bool)hasDetailController;
- (bool)hasFinishedIndexing;
- (bool)hasListController;
- (id)hierarchyDescription;
- (id)identifier;
- (id)initWithSpecifier:(id)arg1 parent:(id)arg2;
- (bool)isRootEntry;
- (bool)isRootURL;
- (bool)isRootUrl;
- (bool)isSectionEntry;
- (id)keywords;
- (id)manifestBundleName;
- (id)name;
- (id)parentEntry;
- (id)plistName;
- (id)recursiveDescription;
- (id)recursiveDescriptionForLevel:(unsigned long long)arg1;
- (id)rootEntry;
- (id)sectionEntry;
- (id)sectionIdentifier;
- (void)setAction:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setManifestBundleName:(id)arg1;
- (void)setParentEntry:(id)arg1;
- (void)setPlistName:(id)arg1;
- (id)specifier;
- (id)url;

@end
