/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkList : NSObject {
    unsigned int  _bookmarkCount;
    NSMutableArray * _bookmarks;
    WebBookmarkCollection * _collection;
    WebBookmarkListQuery * _query;
    unsigned int  _skipOffset;
}

@property (nonatomic, readonly) int folderID;

- (void).cxx_destruct;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (id)bookmarkArray;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (unsigned int)bookmarkCount;
- (int)folderID;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3;

@end
