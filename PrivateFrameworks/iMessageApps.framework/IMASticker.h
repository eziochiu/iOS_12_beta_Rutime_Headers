/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

@interface IMASticker : NSObject {
    NSString * _accessibilityLabel;
    NSURL * _fileURL;
    NSString * _stickerName;
}

@property (nonatomic, readonly, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *stickerName;

+ (double)screenScale;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3;
- (id)stickerName;

@end
