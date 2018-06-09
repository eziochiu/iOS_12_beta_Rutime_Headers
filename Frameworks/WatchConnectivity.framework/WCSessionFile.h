/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCSessionFile : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _fileIdentifier;
    NSURL * _fileURL;
    NSDictionary * _metadata;
    NSString * _relativePath;
    WCUserInfo * _userInfoStorage;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (copy) NSString *fileIdentifier;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *relativePath;
@property (readonly, copy) NSData *userInfoData;
@property (nonatomic, retain) WCUserInfo *userInfoStorage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileIdentifier;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileURL:(id)arg2 relativePath:(id)arg3;
- (id)initWithIdentifier:(id)arg1 relativePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)relativePath;
- (void)setCreationDate:(id)arg1;
- (void)setFileIdentifier:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setRelativePath:(id)arg1;
- (void)setUserInfoStorage:(id)arg1;
- (bool)updateUserInfo:(id)arg1 error:(id*)arg2;
- (bool)updateUserInfoData:(id)arg1 error:(id*)arg2;
- (id)userInfoData;
- (id)userInfoStorage;
- (bool)verifyMetadata;

@end
