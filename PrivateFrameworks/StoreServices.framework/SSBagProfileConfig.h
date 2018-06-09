/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBagProfileConfig : NSObject <NSCopying> {
    NSDictionary * _bagKeysDictionary;
    double  _bagLoadTimeout;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) NSArray *bagKeys;
@property (nonatomic, retain) NSDictionary *bagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (nonatomic, copy) NSString *profile;
@property (nonatomic, copy) NSString *profileVersion;

- (void).cxx_destruct;
- (id)bagKeyForStringRepresentation:(id)arg1;
- (id)bagKeys;
- (id)bagKeysDictionary;
- (double)bagLoadTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)profile;
- (id)profileVersion;
- (void)setBagKeysDictionary:(id)arg1;
- (void)setBagLoadTimeout:(double)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;

@end
