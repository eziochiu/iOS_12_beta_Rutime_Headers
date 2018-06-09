/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface BAChangeRecord : NSObject {
    WebBookmark * _bookmark;
    int  _changeType;
    WebBookmarkCollection * _collection;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) WebBookmarkCollection *collection;

- (void).cxx_destruct;
- (id)_changeTypeDescription;
- (id)_changedAttributeDescription;
- (id)bookmark;
- (int)changeType;
- (id)collection;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end
