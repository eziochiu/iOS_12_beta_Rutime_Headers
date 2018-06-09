/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
 */

@interface FMIPActionContextConfiguration : NSObject {
    NSString * _descriptionFormat;
    NSString * _invocationFormat;
    NSString * _path;
    NSString * _scheme;
    NSString * _titleFormat;
    NSString * _userActivityIdentifier;
}

@property (nonatomic, retain) NSString *descriptionFormat;
@property (nonatomic, retain) NSString *invocationFormat;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *scheme;
@property (nonatomic, retain) NSString *titleFormat;
@property (nonatomic, retain) NSString *userActivityIdentifier;

+ (id)defaultScheme;
+ (id)locateConfiguration;
+ (id)playSoundConfiguration;

- (void).cxx_destruct;
- (id)descriptionFormat;
- (id)invocationFormat;
- (id)path;
- (id)scheme;
- (void)setDescriptionFormat:(id)arg1;
- (void)setInvocationFormat:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setTitleFormat:(id)arg1;
- (void)setUserActivityIdentifier:(id)arg1;
- (id)titleFormat;
- (id)userActivityIdentifier;

@end
