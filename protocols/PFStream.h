/* made by EzioChiu.
 */

@protocol PFStream <NSObject, NSLocking>

@required

- (bool)advanceStream;
- (bool)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
- (void)closeStream;
- (NSError *)getStreamError;
- (bool)openStream;
- (unsigned long long)preferredStreamBlockSize;
- (bool)rewindStream;
- (bool)rewindStream:(long long)arg1;
- (long long)streamLength;
- (long long)streamPosition;

@end
