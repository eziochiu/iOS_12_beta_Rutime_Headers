/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIDeviceInfo : NSObject {
    bool  _deviceZoomed;
    bool  _largeFormatPhone;
}

@property (getter=isDeviceZoomed, nonatomic, readonly) bool deviceZoomed;
@property (getter=isLargeFormatPhone, nonatomic, readonly) bool largeFormatPhone;

+ (id)sharedInstance;

- (void)_updateDeviceZoomed;
- (void)_updateLargeFormatPhone;
- (id)init;
- (bool)isDeviceZoomed;
- (bool)isLargeFormatPhone;

@end
