/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptFacebookFriend : SUScriptObject {
    NSDictionary * _dictionary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)identifier;
- (id)initWithFriendDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)scriptAttributeKeys;

@end
