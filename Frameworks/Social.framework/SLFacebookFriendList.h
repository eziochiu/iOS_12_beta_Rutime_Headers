/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookFriendList : NSObject {
    NSString * _identifier;
    NSString * _name;
    NSString * _type;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSString *type;

+ (id)friendListWithDictionary:(id)arg1;
+ (id)friendListsWithResponseData:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithFriendListDictionary:(id)arg1;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
