/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTAsciiAddress : NSObject <CTMessageAddress, NSCopying> {
    NSString * _address;
}

@property (readonly) NSString *address;

+ (id)asciiAddressWithString:(id)arg1;

- (id)address;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;

@end
