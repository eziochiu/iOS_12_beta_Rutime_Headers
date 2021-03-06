/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupMoreInfoItem : NSObject {
    NSString * _body;
    NSData * _imageData;
    NSURL * _imageURL;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)imageData;
- (id)imageURL;
- (id)initWithMoreInfoDictionary:(id)arg1;
- (id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2;
- (void)setImageData:(id)arg1;
- (id)title;

@end
