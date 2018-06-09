/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _activityImage;
    unsigned long long  _activityProxyID;
    NSString * _activityTitle;
    NSString * _activityType;
}

@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) unsigned long long activityProxyID;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4;
- (id)activityImage;
- (unsigned long long)activityProxyID;
- (id)activityTitle;
- (id)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
