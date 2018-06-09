/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraDevice : ICCameraDevice {
    void * _ptpCameraProperties;
}

@property (readonly) PTPInitiator *initiator;

- (void)addToEventHandlerQ:(id)arg1;
- (void)dealloc;
- (bool)eject;
- (void)enumerateContent;
- (id)initWithUSBLocationID:(unsigned int)arg1;
- (id)initiator;

@end
