/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkChange : NSObject {
    WebBookmark * _bookmark;
    int  _bookmarkID;
    long long  _changeType;
    unsigned long long  _modifiedAttributes;
    int  _parentID;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic) int bookmarkID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long modifiedAttributes;
@property (nonatomic) int parentID;

+ (id)bookmarkAddChangeWithBookmark:(id)arg1;
+ (id)bookmarkModifyChangeWithBookmark:(id)arg1;

- (void).cxx_destruct;
- (void)_setModifiedAttributesIfSupported;
- (void)applyModificationsToBookmark:(id)arg1;
- (bool)attributesMarkedAsModify:(unsigned long long)arg1;
- (id)bookmark;
- (int)bookmarkID;
- (long long)changeType;
- (id)dictionaryRepresentation;
- (id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4;
- (id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)modifiedAttributes;
- (int)parentID;
- (void)setBookmarkID:(int)arg1;
- (void)setParentID:(int)arg1;

@end
