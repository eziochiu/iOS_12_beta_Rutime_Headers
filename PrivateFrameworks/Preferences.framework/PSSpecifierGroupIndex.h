/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierGroupIndex : NSObject <NSCopying> {
    NSMutableArray * _groupSections;
    NSMutableArray * _groupSpecifiers;
    NSMutableArray * _specifiers;
    NSMutableArray * _ungroupedPrefixSpecifiers;
    bool  _wantsDebugCallbacks;
}

@property (nonatomic, readonly, copy) NSArray *groupSpecifiers;
@property (nonatomic, readonly, copy) NSArray *specifiers;

+ (bool)_wantsDebuggingCallbacks;
+ (id)groupIndexWithSpecifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned long long)arg3;
- (void)_createGroupIndex;
- (void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(bool)arg4;
- (void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(bool)arg4 allowGroupSpecifiers:(bool)arg5;
- (id)_groupSections;
- (unsigned long long)_indexOfSpecifierInSection:(unsigned long long)arg1 row:(unsigned long long)arg2 forInsertion:(bool)arg3;
- (id)_init;
- (id)_initForCopyWithGroupIndex:(id)arg1;
- (void)_manuallyFindSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)_tabStringOfDepth:(unsigned long long)arg1;
- (id)_ungroupedPrefixSpecifiers;
- (void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifier:(id)arg3;
- (bool)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierAtIndex:(unsigned long long)arg3;
- (bool)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierWithID:(id)arg3;
- (unsigned long long)groupIndexOfGroup:(id)arg1;
- (unsigned long long)groupIndexOfGroupWithID:(id)arg1;
- (id)groupSpecifiers;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfGroupAtGroupIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfGroupWithID:(id)arg1;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(bool)arg2;
- (id)indexPathForSpecifier:(id)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 forInsertion:(bool)arg2;
- (id)indexPathForSpecifierWithID:(id)arg1;
- (id)init;
- (id)initWithSpecifiers:(id)arg1;
- (unsigned long long)numberOfGroups;
- (unsigned long long)numberOfRowsInGroupAtIndex:(unsigned long long)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)performSpecifierUpdatesUsingBlock:(id /* block */)arg1;
- (void)performUpdateOperation:(id)arg1;
- (void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSpecifiersInGroup:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSpecifiersInGroupWithID:(id)arg1;
- (void)reloadWithSpecifiers:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)specifiers;
- (id)specifiersInGroup:(id)arg1;
- (id)specifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (id)specifiersInGroupWithID:(id)arg1;

@end
