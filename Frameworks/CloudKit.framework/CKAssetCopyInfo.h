/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetCopyInfo : NSObject <NSSecureCoding> {
    NSData * _assetKey;
    NSURL * _assetURL;
    NSData * _fileSignature;
    NSData * _referenceSignature;
    NSString * _senderID;
}

@property (nonatomic, copy) NSData *assetKey;
@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic, copy) NSData *fileSignature;
@property (nonatomic, copy) NSData *referenceSignature;
@property (nonatomic, copy) NSString *senderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)assetKey;
- (id)assetURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSignature;
- (id)initWithCoder:(id)arg1;
- (id)referenceSignature;
- (id)senderID;
- (void)setAssetKey:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setSenderID:(id)arg1;

@end
