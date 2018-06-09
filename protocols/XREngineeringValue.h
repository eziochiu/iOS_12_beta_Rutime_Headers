/* made by EzioChiu.
 */

@protocol XREngineeringValue <NSObject>

@required

- (unsigned short)engineeringType;
- (NSString *)engineeringTypeMnemonic;
- (void)enumerateUint64Values:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, void*
- (double)fixedDecimal;
- (bool)getLengthOfUint64Representation:(unsigned long long*)arg1;
- (bool)getValue:(id*)arg1 fieldIndex:(unsigned short)arg2;
- (unsigned char)implClass;
- (bool)isValid;
- (id)objectValue;
- (NSString *)string;
- (unsigned int)uint32;
- (unsigned long long)uint64;

@end
