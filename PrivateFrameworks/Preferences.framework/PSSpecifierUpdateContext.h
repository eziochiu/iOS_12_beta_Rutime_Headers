/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {
    bool  _animated;
    bool  _updateModelOnly;
    NSDictionary * _userInfo;
}

@property (nonatomic) bool animated;
@property (nonatomic) bool updateModelOnly;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)context;
+ (id)contextWithUserInfo:(id)arg1;

- (void).cxx_destruct;
- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setAnimated:(bool)arg1;
- (void)setUpdateModelOnly:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)updateModelOnly;
- (id)userInfo;

@end
