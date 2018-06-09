/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInputStream : NSStream

@property (readonly) bool hasBytesAvailable;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithURL:(id)arg1;

- (struct { long long x1; int x2; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;

@end
