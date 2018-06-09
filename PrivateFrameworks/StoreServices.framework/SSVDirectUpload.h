/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDirectUpload : NSObject <SSXPCCoding> {
    NSString * _categoryName;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesSent;
    NSError * _error;
    bool  _explicitContent;
    long long  _persistentIdentifier;
    long long  _state;
    NSString * _subtitle;
    NSURL * _thumbnailImageURL;
    NSString * _title;
    NSString * _uploadKind;
    NSString * _uti;
}

@property (nonatomic, copy) NSString *UTI;
@property (setter=_setUploadKind:, nonatomic, copy) NSString *_uploadKind;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic) long long countOfBytesExpectedToSend;
@property (nonatomic) long long countOfBytesSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long persistentIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *thumbnailImageURL;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)UTI;
- (void)_adoptStatusFromUpload:(id)arg1;
- (void)_setUploadKind:(id)arg1;
- (id)_uploadKind;
- (id)categoryName;
- (id)copyXPCEncoding;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (long long)persistentIdentifier;
- (void)setCategoryName:(id)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setPersistentIdentifier:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUTI:(id)arg1;
- (long long)state;
- (id)subtitle;
- (id)thumbnailImageURL;
- (id)title;

@end
