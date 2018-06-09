/* made by EzioChiu.
 */

@protocol PFIStream <NSObject, PFStream>

@required

- (bool)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long*)arg3;
- (const char *)streamData:(unsigned long long*)arg1;

@end
