/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceScreenBorrowToken : NSObject {
    NSString * _client;
    AVExternalDevice * _externalDevice;
    NSString * _reason;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) NSString *reason;

- (id)client;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3;
- (id)reason;

@end
