/* made by EzioChiu.
 */

@protocol AXMIDIDeviceProtocol <NSObject>

@required

- (void)device:(AXMIDIDevice *)arg1 didAddEntity:(AXMIDIDeviceEntity *)arg2;
- (void)device:(AXMIDIDevice *)arg1 didRemoveEntity:(AXMIDIDeviceEntity *)arg2;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddSource:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveSource:(AXMIDIDeviceEntityEndpoint *)arg3;

@end
