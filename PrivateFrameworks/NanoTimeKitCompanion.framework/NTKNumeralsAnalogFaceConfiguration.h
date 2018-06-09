/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsAnalogFaceConfiguration : NSObject {
    bool  _areAllComplicationsOff;
    unsigned long long  _colorSchemeUnits;
    CLKDevice * _device;
    unsigned long long  _faceColor;
    unsigned long long  _selectedStyle;
    long long  _utilitySlot;
}

@property (nonatomic, readonly) bool areAllComplicationsOff;
@property (nonatomic, readonly) unsigned long long colorSchemeUnits;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) unsigned long long faceColor;
@property (nonatomic, readonly) unsigned long long selectedStyle;
@property (nonatomic, readonly) long long utilitySlot;

- (void).cxx_destruct;
- (bool)areAllComplicationsOff;
- (unsigned long long)colorSchemeUnits;
- (id)device;
- (unsigned long long)faceColor;
- (id)initWithFaceColor:(unsigned long long)arg1 colorSchemeUnits:(unsigned long long)arg2 areAllComplicationsOff:(bool)arg3 utilitySlot:(long long)arg4 selectedStyle:(unsigned long long)arg5 forDevice:(id)arg6;
- (unsigned long long)selectedStyle;
- (long long)utilitySlot;

@end
