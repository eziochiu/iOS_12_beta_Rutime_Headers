/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_bookmarksIDsFromBookmarks:(id)arg1 fromChangeSet:(id)arg2 withFilter:(id /* block */)arg3;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;

@end
