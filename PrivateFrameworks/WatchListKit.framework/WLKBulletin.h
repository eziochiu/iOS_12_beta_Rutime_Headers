/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBulletin : NSObject <NSSecureCoding> {
    NSDictionary * _actionMetrics;
    NSURL * _actionURL;
    NSDictionary * _bulletinMetrics;
    long long  _bulletinSource;
    NSString * _bulletinType;
    NSString * _coalescingID;
    NSString * _message;
    NSDate * _notAfterDate;
    NSDate * _notBeforeDate;
    NSDate * _publishedDate;
    NSString * _threadID;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSDictionary *actionMetrics;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, copy) NSDictionary *bulletinMetrics;
@property (nonatomic) long long bulletinSource;
@property (nonatomic, copy) NSString *bulletinType;
@property (nonatomic, copy) NSString *coalescingID;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *notAfterDate;
@property (nonatomic, copy) NSDate *notBeforeDate;
@property (nonatomic, copy) NSDate *publishedDate;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionMetrics;
- (id)actionURL;
- (id)bulletinMetrics;
- (long long)bulletinSource;
- (id)bulletinType;
- (id)coalescingID;
- (id)createBulletinRequest;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)notAfterDate;
- (id)notBeforeDate;
- (id)publishedDate;
- (void)setActionMetrics:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setBulletinMetrics:(id)arg1;
- (void)setBulletinSource:(long long)arg1;
- (void)setBulletinType:(id)arg1;
- (void)setCoalescingID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNotAfterDate:(id)arg1;
- (void)setNotBeforeDate:(id)arg1;
- (void)setPublishedDate:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)threadID;
- (id)title;
- (id)userInfo;

@end
