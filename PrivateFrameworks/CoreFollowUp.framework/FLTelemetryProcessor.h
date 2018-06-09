/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLTelemetryProcessor : NSObject {
    NSObject<FLTelemetryController> * _telemetryController;
}

- (void).cxx_destruct;
- (id)initWithController:(id)arg1;
- (void)processCurrentItems:(id)arg1;
- (void)processItemAddition:(id)arg1;
- (void)processItemRemoval:(id)arg1;

@end