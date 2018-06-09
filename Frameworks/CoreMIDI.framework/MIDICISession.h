/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDICISession : NSObject {
    unsigned int  _client;
    struct MIDICIDeviceIdentification { 
        unsigned char manufacturer[3]; 
        unsigned char family[2]; 
        unsigned char modelNumber[2]; 
        unsigned char revisionLevel[4]; 
        unsigned char reserved[5]; 
    }  _deviceID;
    struct MIDICIDeviceIdentification { 
        unsigned char manufacturer[3]; 
        unsigned char family[2]; 
        unsigned char modelNumber[2]; 
        unsigned char revisionLevel[4]; 
        unsigned char reserved[5]; 
    }  _deviceIdentification;
    unsigned int  _entity;
    unsigned int  _impl;
    id /* block */  _profileChangedCallback;
    NSMutableArray * _profileStates;
    id /* block */  _propertyChangedCallback;
    id /* block */  _propertyResponseCallback;
    NSArray * _supportedProtocols;
    bool  _supportsProfileCapability;
    bool  _supportsPropertyCapability;
}

@property (nonatomic, readonly) struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; } deviceIdentification;
@property (nonatomic, readonly) unsigned int entity;
@property (nonatomic, copy) id /* block */ profileChangedCallback;
@property (nonatomic, copy) id /* block */ propertyChangedCallback;
@property (nonatomic, readonly) bool supportsProfileCapability;
@property (nonatomic, readonly) bool supportsPropertyCapability;

- (void).cxx_destruct;
- (void)addProfileState:(char *)arg1 length:(unsigned int)arg2 channel:(unsigned char)arg3;
- (void)dealloc;
- (struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; })deviceIdentification;
- (bool)disableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3;
- (bool)enableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)entity;
- (void)getProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (void)handleCINotification:(const struct MIDINotification { int x1; unsigned int x2; }*)arg1 withHandler:(id /* block */)arg2;
- (void)hasProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithMIDIEntity:(unsigned int)arg1 dataReadyHandler:(id /* block */)arg2;
- (bool)isEqualTo:(id)arg1;
- (id /* block */)profileChangedCallback;
- (id)profileStateForChannel:(unsigned char)arg1;
- (id /* block */)propertyChangedCallback;
- (void)setProfileChangedCallback:(id /* block */)arg1;
- (void)setProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(id /* block */)arg3;
- (void)setPropertyChangedCallback:(id /* block */)arg1;
- (bool)supportsProfileCapability;
- (bool)supportsPropertyCapability;
- (bool)toggleProfile:(id)arg1 onChannel:(unsigned char)arg2 enabling:(bool)arg3 error:(id*)arg4;
- (bool)updateProfileStateForChannel:(unsigned char)arg1 withProfile:(id)arg2 enabled:(bool)arg3;

@end
