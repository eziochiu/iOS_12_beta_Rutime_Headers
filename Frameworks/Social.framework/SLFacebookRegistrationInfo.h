/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookRegistrationInfo : NSObject {
    NSDate * _birthday;
    NSString * _email;
    NSString * _firstName;
    NSString * _gender;
    NSString * _lastName;
    NSString * _password;
    NSNumber * _phone;
}

@property (nonatomic, retain) NSDate *birthday;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *gender;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSNumber *phone;

- (void).cxx_destruct;
- (id)birthday;
- (id)debugDescription;
- (id)email;
- (id)firstName;
- (id)gender;
- (bool)hasAllRequiredValues;
- (id)lastName;
- (id)password;
- (id)phone;
- (void)setBirthday:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPhone:(id)arg1;

@end
