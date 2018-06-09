/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface FirmwareBundle : NSObject {
    NSString * _bundleDescription;
    NSData * _certificate;
    NSData * _firmwareImage;
    unsigned int  _firmwareImageBaseAddress;
    unsigned int  _firmwareImageSize;
    NSData * _hash;
    unsigned int  _productIDCode;
    NSData * _signature;
}

@property (readonly) NSData *certificate;
@property (readonly) NSData *firmwareImage;
@property (readonly) unsigned int firmwareImageBaseAddress;
@property (readonly) unsigned int firmwareImageSize;
@property (readonly) NSData *hash;
@property (readonly) unsigned int productIDCode;
@property (readonly) NSData *signature;

+ (id)defaultBundlePath;

- (id)certificate;
- (void)dealloc;
- (id)description;
- (id)firmwareImage;
- (unsigned int)firmwareImageBaseAddress;
- (unsigned int)firmwareImageSize;
- (id)hash;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (void)parseFileName:(id)arg1 intoPath:(id*)arg2 andExtension:(id*)arg3;
- (id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (id)parseResourceFileIntoData:(id)arg1;
- (id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (void)parseSRECLine:(id)arg1 intoImage:(id)arg2;
- (unsigned int)productIDCode;
- (id)signature;

@end
