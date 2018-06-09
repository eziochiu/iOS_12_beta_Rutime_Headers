/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)queryWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (bool)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; int x13; int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned int x19; unsigned int x20[4]; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned long long x48; unsigned long long x49; unsigned int x50; unsigned long long x51; unsigned int x52; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
