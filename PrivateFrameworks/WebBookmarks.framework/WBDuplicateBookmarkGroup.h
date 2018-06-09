/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBDuplicateBookmarkGroup : NSObject {
    NSMutableArray * _dupicateBookmarks;
    NSMutableArray * _dupicateBookmarksToKeep;
    bool  _foundDuplicates;
    WebBookmark * _originalBookmark;
}

@property (nonatomic, readonly) NSArray *duplicates;
@property (nonatomic, readonly) NSArray *duplicatesToKeep;
@property (nonatomic, readonly) bool foundDuplicates;
@property (nonatomic, readonly) WebBookmark *originalBookmark;

- (void).cxx_destruct;
- (void)addDuplicateBookmark:(id)arg1 replaceOriginal:(bool)arg2;
- (void)addDuplicateBookmarkToKeep:(id)arg1;
- (id)duplicates;
- (id)duplicatesToKeep;
- (void)exchangeOriginalBookmarkWithBookmark:(id)arg1;
- (bool)foundDuplicates;
- (id)initWithOriginalBookmark:(id)arg1;
- (id)originalBookmark;
- (void)removeAllDuplicates;

@end
