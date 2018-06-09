/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailDropMetadata : NSObject {
    bool  _autoArchive;
    NSURL * _directUrl;
    NSDate * _expiration;
    NSString * _fileName;
    long long  _fileSize;
    unsigned long long  _flags;
    bool  _isInvalid;
    NSString * _mimeType;
    NSString * _uuid;
    NSURL * _wrappedUrl;
}

@property (getter=UUID, setter=setUUID:) NSString *UUID;
@property bool autoArchive;
@property (nonatomic, copy) NSURL *directUrl;
@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) NSString *fileName;
@property long long fileSize;
@property unsigned long long flags;
@property bool isInvalid;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSURL *wrappedUrl;

+ (id)mailDropMetadata;

- (id)UUID;
- (bool)autoArchive;
- (void)dealloc;
- (id)description;
- (id)directUrl;
- (id)directUrlString;
- (id)expiration;
- (id)fileName;
- (long long)fileSize;
- (unsigned long long)flags;
- (bool)isBanner;
- (bool)isBannerWithMultiple;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isInvalid;
- (bool)isPhotoArchive;
- (void)merge:(id)arg1;
- (id)mimeType;
- (void)setAutoArchive:(bool)arg1;
- (void)setDirectUrl:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsInvalid:(bool)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setWrappedUrl:(id)arg1;
- (id)wrappedUrl;
- (id)wrappedUrlString;

@end
