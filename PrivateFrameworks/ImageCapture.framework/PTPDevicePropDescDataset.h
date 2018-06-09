/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPDevicePropDescDataset : NSObject {
    NSMutableData * _content;
    id  _currentValue;
    unsigned short  _dataTypeCode;
    unsigned short  _devicePropertyCode;
    bool  _dirty;
    id  _factoryDefaultValue;
    unsigned char  _formFlag;
    id  _maximumValue;
    id  _minimumValue;
    unsigned short  _numberOfValues;
    bool  _readOnlyObject;
    unsigned char  _readWriteAttribute;
    id  _stepSize;
    NSMutableArray * _supportedValues;
}

- (id)content;
- (id)currentValue;
- (unsigned short)dataTypeCode;
- (void)dealloc;
- (id)description;
- (unsigned short)devicePropertyCode;
- (id)factoryDefaultValue;
- (unsigned char)formFlag;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (unsigned short)numberOfValues;
- (unsigned char)readWriteAttribute;
- (void)setContent:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDataTypeCode:(unsigned short)arg1;
- (void)setDevicePropertyCode:(unsigned short)arg1;
- (void)setFactoryDefaultValue:(id)arg1;
- (void)setFormFlag:(unsigned char)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setNumberOfValues:(unsigned short)arg1;
- (void)setReadWriteAttribute:(unsigned char)arg1;
- (void)setStepSize:(id)arg1;
- (void)setSupportedValues:(id)arg1;
- (id)stepSize;
- (id)supportedValues;
- (void)updateContent;

@end
