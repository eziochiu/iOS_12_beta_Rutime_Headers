/* made by EzioChiu.
 */

@protocol PFOStream <NSObject, PFStream>

@required

- (bool)reserveLength:(long long)arg1;
- (bool)truncateLength:(long long)arg1;
- (bool)writeStream:(id <PFIStream>)arg1;
- (bool)writeStream:(id <PFIStream>)arg1 blockSize:(unsigned long long)arg2;
- (bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3;

@end
