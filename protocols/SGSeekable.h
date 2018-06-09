/* made by EzioChiu.
 */

@protocol SGSeekable <NSObject>

@required

- (const void*)dataOfLength:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (void)seekToFileOffset:(unsigned long long)arg1;

@end
