/* made by EzioChiu.
 */

@protocol _KSBlobSaver

@required

- (NSData *)contents;
- (unsigned long long)size;

@end
