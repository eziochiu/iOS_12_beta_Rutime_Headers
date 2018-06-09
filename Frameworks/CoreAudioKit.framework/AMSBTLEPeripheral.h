/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEPeripheral : NSObject {
    bool  available;
    CBCentralManager * centralManager;
    bool  changingState;
    bool  inputAvailable;
    double  lastSeen;
    NSString * name;
    bool  online;
    bool  outputAvailable;
    CBPeripheral * peripheral;
    NSString * uuid;
}

@property (getter=isAvailable) bool available;
@property (getter=isChangingState) bool changingState;
@property bool inputAvailable;
@property double lastSeen;
@property (retain) NSString *name;
@property (getter=isOnline) bool online;
@property bool outputAvailable;
@property (readonly) CBPeripheral *peripheral;
@property (readonly, retain) NSString *uuid;

- (bool)canConnect;
- (bool)connect;
- (void)dealloc;
- (bool)disconnect;
- (bool)hidden;
- (id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3;
- (bool)inputAvailable;
- (bool)isAvailable;
- (bool)isChangingState;
- (bool)isOnline;
- (double)lastSeen;
- (id)name;
- (bool)outputAvailable;
- (id)peripheral;
- (void)setAvailable:(bool)arg1;
- (void)setChangingState:(bool)arg1;
- (void)setInputAvailable:(bool)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOnline:(bool)arg1;
- (void)setOutputAvailable:(bool)arg1;
- (bool)updateAvailableStateChanged;
- (id)uuid;

@end
