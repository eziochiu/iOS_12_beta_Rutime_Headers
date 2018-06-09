/* made by EzioChiu.
 */

@protocol AXHARemoteControllerProtocol <NSObject>

@required

- (AXDispatchTimer *)communicationTimer;
- (bool)didValidateHIID;
- (void)setCommunicationTimer:(AXDispatchTimer *)arg1;
- (void)setDidValidateHIID:(bool)arg1;

@end
