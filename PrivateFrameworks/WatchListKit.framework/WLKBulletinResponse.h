/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBulletinResponse : NSObject <NSSecureCoding> {
    BBActionResponse * _actionResponse;
}

@property (nonatomic, readonly, copy) NSDictionary *actionMetrics;
@property (nonatomic, retain) BBActionResponse *actionResponse;
@property (nonatomic, readonly, copy) NSDictionary *bulletinMetrics;
@property (nonatomic, readonly) long long bulletinSource;
@property (nonatomic, readonly, copy) NSString *coalescingID;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionMetrics;
- (id)actionResponse;
- (id)bulletinMetrics;
- (long long)bulletinSource;
- (id)coalescingID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)message;
- (void)setActionResponse:(id)arg1;
- (id)title;
- (id)userInfo;

@end
