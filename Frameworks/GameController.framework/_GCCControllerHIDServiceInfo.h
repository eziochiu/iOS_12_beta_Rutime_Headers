/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCCControllerHIDServiceInfo : NSObject {
    NSData * _inputData;
    struct __IOHIDServiceClient { } * _service;
}

@property (nonatomic, retain) NSData *inputData;
@property (nonatomic, readonly) struct __IOHIDServiceClient { }*service;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(struct __IOHIDServiceClient { }*)arg1;
- (id)inputData;
- (id)registryID;
- (struct __IOHIDServiceClient { }*)service;
- (void)setInputData:(id)arg1;

@end
