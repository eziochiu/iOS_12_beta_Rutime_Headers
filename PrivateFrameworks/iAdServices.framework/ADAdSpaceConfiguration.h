/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSpaceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _adSpaceContextJSON;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    float  _containerHeight;
    float  _containerWidth;
    NSSet * _context;
    int  _creativeType;
    NSString * _identifier;
    long long  _options;
    NSURL * _serverURL;
}

@property (nonatomic, copy) NSString *adSpaceContextJSON;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic) float containerHeight;
@property (nonatomic) float containerWidth;
@property (nonatomic, copy) NSSet *context;
@property (nonatomic) int creativeType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long options;
@property (nonatomic, copy) NSURL *serverURL;

+ (bool)supportsSecureCoding;

- (id)adSpaceContextJSON;
- (id)advertisingSection;
- (id)authenticationUserName;
- (float)containerHeight;
- (float)containerWidth;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)creativeType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)options;
- (id)serverURL;
- (void)setAdSpaceContextJSON:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContainerHeight:(float)arg1;
- (void)setContainerWidth:(float)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setServerURL:(id)arg1;

@end
