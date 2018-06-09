/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFileMetadata : NSObject <NSSecureCoding> {
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSNumber * _fileSize;
    NSNumber * _generationID;
    NSNumber * _modTimeInSeconds;
}

@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic, retain) NSNumber *modTimeInSeconds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)fileSize;
- (id)generationID;
- (id)initWithCoder:(id)arg1;
- (id)modTimeInSeconds;
- (void)setDeviceID:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setModTimeInSeconds:(id)arg1;

@end
