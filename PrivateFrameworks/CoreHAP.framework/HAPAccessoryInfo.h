/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryInfo : HMFObject {
    bool  _authenticated;
    NSString * _blacklisted;
    NSNumber * _category;
    NSString * _certificationStatus;
    NSString * _manufacturer;
    NSString * _modelName;
    NSString * _name;
    NSString * _ppid;
}

@property (nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) NSString *blacklisted;
@property (nonatomic, readonly) NSNumber *category;
@property (nonatomic, readonly) NSString *certificationStatus;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ppid;

- (void).cxx_destruct;
- (bool)authenticated;
- (id)blacklisted;
- (id)category;
- (id)certificationStatus;
- (id)description;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 blacklisted:(id)arg6 ppid:(id)arg7;
- (bool)isBlacklisted;
- (bool)isCertified;
- (id)manufacturer;
- (id)modelName;
- (id)name;
- (id)ppid;

@end
