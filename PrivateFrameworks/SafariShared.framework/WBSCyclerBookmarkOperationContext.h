/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerBookmarkOperationContext : NSObject {
    <WBSCyclerTestTarget> * _testTarget;
    NSString * _titlePrefix;
    WBSCyclerBookmarkListRepresentation * _topLevelBookmark;
}

@property (nonatomic, retain) <WBSCyclerTestTarget> *testTarget;
@property (nonatomic, copy) NSString *titlePrefix;
@property (nonatomic, retain) WBSCyclerBookmarkListRepresentation *topLevelBookmark;

- (void).cxx_destruct;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1;
- (id)_copyBookmark:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2;
- (bool)_isBookmarkPrefixed:(id)arg1;
- (bool)_isBookmarkValid:(id)arg1;
- (id)filterOutBookmarksWithoutTitlePrefixInList:(id)arg1;
- (id)randomBookmarkTitle;
- (id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(bool)arg2 passingTest:(id /* block */)arg3;
- (id)randomValidStrictDescendantOfList:(id)arg1;
- (id)randomValidStrictDescendantOfTopLevelBookmark;
- (void)setTestTarget:(id)arg1;
- (void)setTitlePrefix:(id)arg1;
- (void)setTopLevelBookmark:(id)arg1;
- (id)testTarget;
- (id)titlePrefix;
- (id)topLevelBookmark;

@end
